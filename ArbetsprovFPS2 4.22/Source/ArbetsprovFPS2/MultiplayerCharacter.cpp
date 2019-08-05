// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MultiplayerCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Animation/AnimInstance.h"
#include "MultiplayerProjectile.h"
#include "Net/UnrealNetwork.h"
#include "Pickup.h"
#include "AKAmmoPickup.h"
#include "TimerManager.h"
#include "Engine/GameEngine.h"
#include "MultiplayerController.h"
#include "MultiplayerGameStateBase.h"

//////////////////////////////////////////////////////////////////////////
// AMultiplayerCharacter

AMultiplayerCharacter::AMultiplayerCharacter()
{
	//Tell engine to replicate this actor
	bReplicates = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	//Create camera
	FPSCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FPSCamera"));
	FPSCamera->SetupAttachment(GetCapsuleComponent());
	FPSCamera->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	FPSCamera->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FPSCamera);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->RelativeRotation = FRotator(1.9f, -19.19f, 5.2f);
	Mesh1P->RelativeLocation = FVector(-0.5f, -4.4f, -155.7f);

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	//FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Set a base value for the sphere radius
	CollectionSphereRadius = 100.f;

	// Create the collection sphere
	CollectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollectionSphere"));
	CollectionSphere->AttachTo(RootComponent);
	CollectionSphere->SetSphereRadius(CollectionSphereRadius);

	// Set base values for character ammo
	InitialAmmo = 1.0f;
	CurrentAmmo = InitialAmmo;

	// Set base values for character health
	InitialHealth = 100.0f;
	CurrentHealth = InitialHealth;
	Health = InitialHealth;

	Lives = 5;
}

void AMultiplayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMultiplayerCharacter, CollectionSphereRadius);
	DOREPLIFETIME(AMultiplayerCharacter, InitialAmmo);
	DOREPLIFETIME(AMultiplayerCharacter, CurrentAmmo);
	DOREPLIFETIME(AMultiplayerCharacter, InitialHealth);
	DOREPLIFETIME(AMultiplayerCharacter, CurrentHealth);
	DOREPLIFETIME(AMultiplayerCharacter, Task);
	DOREPLIFETIME(AMultiplayerCharacter, Lives);
	DOREPLIFETIME(AMultiplayerCharacter, Health);
}

float AMultiplayerCharacter::GetInitialAmmo()
{
	return InitialAmmo;
}

float AMultiplayerCharacter::GetCurrentAmmo()
{
	return CurrentAmmo;
}

float AMultiplayerCharacter::GetCurrentLives()
{
	return Lives;
}

void AMultiplayerCharacter::UpdateAmmo(float DeltaAmmo)
{
	if (Role == ROLE_Authority)
	{
		// Increase or decrease current ammo
		CurrentAmmo += DeltaAmmo;
	}
}


float AMultiplayerCharacter::GetInitialHealth()
{
	return InitialHealth;
}

float AMultiplayerCharacter::GetCurrentHealth()
{
	return CurrentHealth;
}

float AMultiplayerCharacter::GetHealth()
{
	return Health;
}

void AMultiplayerCharacter::UpdateHealth(float DeltaHP)
{
	if (Role == ROLE_Authority)
	{
		// Increase or decrease current ammo
		CurrentHealth += DeltaHP;
	}
}

void AMultiplayerCharacter::OnRep_Task()
{
	switch (Task)
	{
	case(ETaskEnum::None) :
		break;
	case(ETaskEnum::Fire) :
		OnFire();
		break;
	}
}

void AMultiplayerCharacter::UpdateLives(float DeltaLives)
{
	Lives += DeltaLives;
}

float AMultiplayerCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Health -= DamageAmount;
	if (Health < 0.1f)
	{
		AMultiplayerController* PC = Cast<AMultiplayerController>(Controller);
		AMultiplayerGameStateBase* const MyGameState = GetWorld() != NULL ? GetWorld()->GetGameState<AMultiplayerGameStateBase>() : NULL;
		if (PC)
		{
			PC->OnKilled();
		}
		MyGameState->UpdateLivesLeft(-1.f);
		MyGameState->SetCurrentState(EPlayState::EGameOver);

		Destroy();
	}

	OnRep_Health();
	return DamageAmount;
}

void AMultiplayerCharacter::OnRep_Health()
{
	FPSCamera->PostProcessSettings.SceneFringeIntensity = 5.f - Health * 0.05f;
}

void AMultiplayerCharacter::PerformTask(ETaskEnum::Type NewTask)
{
	if (GetNetMode() == NM_Client)
	{
		ServerPerformTask(NewTask);
		return;
	}

	Task = NewTask;
	OnRep_Task();
}

void AMultiplayerCharacter::ServerPerformTask_Implementation(ETaskEnum::Type NewTask)
{
	PerformTask(NewTask);
}

bool AMultiplayerCharacter::ServerPerformTask_Validate(ETaskEnum::Type NewTask)
{
	return true;
}

void AMultiplayerCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));
	Mesh1P->SetHiddenInGame(false, true);
}

//////////////////////////////////////////////////////////////////////////
// Input

void AMultiplayerCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("PrimaryFire", IE_Pressed, this, &AMultiplayerCharacter::Fire);
	PlayerInputComponent->BindAction("PrimaryFire", IE_Released, this, &AMultiplayerCharacter::StopFire);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMultiplayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMultiplayerCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMultiplayerCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMultiplayerCharacter::LookUpAtRate);

	// Handle Collecting pickups
	PlayerInputComponent->BindAction("PickUp", IE_Pressed, this, &AMultiplayerCharacter::CollectPickups);
}

void AMultiplayerCharacter::Fire()
{
	PerformTask(ETaskEnum::Fire);
}

void AMultiplayerCharacter::StopFire()
{
	PerformTask(ETaskEnum::None);
}

void AMultiplayerCharacter::CollectPickups()
{
	//Ask server to collect pickups
	ServerCollectPickups();
}

bool AMultiplayerCharacter::ServerCollectPickups_Validate()
{
	return true;
}

void AMultiplayerCharacter::ServerCollectPickups_Implementation()
{
	if (Role == ROLE_Authority)
	{
		// Track the total power found in ammopacks
		float TotalAmmo = 0.0f;
		// Get all overlapping actors and store them in an array
		TArray<AActor*> CollectedActors;
		CollectionSphere->GetOverlappingActors(CollectedActors);

		// Look at each Actor inside the collectionSphere
		for (int i = 0; i < CollectedActors.Num(); ++i)
		{
			// If it is a pickup, and it is valid and active
			APickup* const TestPickup = Cast<APickup>(CollectedActors[i]);
			if (TestPickup != NULL && !TestPickup->IsPendingKill() && TestPickup->IsActive())
			{
				// Add ammo if we found an ammopack
				if (AAKAmmoPickup* const TestAmmo = Cast<AAKAmmoPickup>(TestPickup))
				{
					TotalAmmo += TestAmmo->GetAmmo();
				}
				// Collect the pickup and deactivate it
				TestPickup->PickedUpBy(this);
				TestPickup->SetActive(false);
			}
		}

		// Change the character's ammo based on what we picked up
		if (!FMath::IsNearlyZero(TotalAmmo, 0.001f) && CurrentAmmo < 1.f)
		{
			UpdateAmmo(1.0f);
		}
	}
}

void AMultiplayerCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		//AddMovementInput(GetActorForwardVector(), Value);
		AddMovementInput(FPSCamera->GetForwardVector(), Value);
	}
}

void AMultiplayerCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		//AddMovementInput(GetActorRightVector(), Value);
		AddMovementInput(FPSCamera->GetRightVector(), Value);
	}
}

void AMultiplayerCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMultiplayerCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AMultiplayerCharacter::OnFire()
{

	// Make sure we have enough ammo
	if (CurrentAmmo > 0)
	{
		if (Task != ETaskEnum::Fire) return;

		// try and fire a projectile 
		if (ProjectileClass != NULL)
		{
			UWorld* const World = GetWorld();
			if (World != NULL)
			{
				const FRotator SpawnRotation = GetViewRotation();	// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
				const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// spawn the projectile at the muzzle
				World->SpawnActor<AMultiplayerProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);

				UpdateAmmo(-1.0f);
			}
		}

		// try and play the sound if specified
		if (FireSound != NULL)
		{
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
		}

		// try and play a firing animation if specified
		if (FireAnimation != NULL)
		{
			// Get the animation object for the arms mesh
			UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
			if (AnimInstance != NULL)
			{
				AnimInstance->Montage_Play(FireAnimation, 0.3f);
			}
		}

		GetWorldTimerManager().SetTimer(TimerHandle_Task, this, &AMultiplayerCharacter::OnFire, 1.0f);

	}
}
