// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MultiplayerCharacter.generated.h"

UENUM()
namespace ETaskEnum
{
	enum Type
	{
		None,
		Fire,
	};
}

UCLASS(config = Game)
class AMultiplayerCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FPSCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup", meta = (AllowPrivateAccess = "true"))
	class USphereComponent* CollectionSphere;

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* Mesh1P;

	/** Gun mesh: 1st person view (seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* FP_Gun;

	/** Location on gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USceneComponent* FP_MuzzleLocation;

	// Replication for special character actions
	UPROPERTY(ReplicatedUsing=OnRep_Task)
	TEnumAsByte<ETaskEnum::Type> Task;

	FTimerHandle TimerHandle_Task;

public:
	AMultiplayerCharacter();

	//Required network scaffolding
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Access to the character's starting ammo
	UFUNCTION(BlueprintPure, Category = "Inventory")
	float GetInitialAmmo();

	// Access to the character's current ammo
	UFUNCTION(BlueprintPure, Category = "Inventory")
	float GetCurrentAmmo();

	// Access to the character's current ammo
	UFUNCTION(BlueprintPure, Category = "Inventory")
	float GetCurrentLives();

	/**	 
	* This updates the character's ammo amount
	* @param DeltaAmmo This is the amount to change ammo by, can be + or -
	*/
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Inventory")
	void UpdateAmmo(float DeltaAmmo);

	// Access to the character's starting health
	UFUNCTION(BlueprintPure, Category = "HP")
	float GetInitialHealth();

	// Access to the character's current health
	UFUNCTION(BlueprintPure, Category = "HP")
	float GetCurrentHealth();

	// Access to the character's current health
	UFUNCTION(BlueprintPure, Category = "HP")
	float GetHealth();

	/**
	* This updates the character's health
	* @param DeltaAmmo This is the amount to change health by, can be + or -
	*/
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "HP")
	void UpdateHealth(float DeltaHP);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "HP")
	void UpdateLives(float DeltaLives);

	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	UFUNCTION()
	void OnRep_Task();

	UFUNCTION()
	void OnRep_Health();

protected:
	virtual void BeginPlay();

public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseLookUpRate;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class AMultiplayerProjectile> ProjectileClass;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector GunOffset;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class UAnimMontage* FireAnimation;

	// Variable radius can be changed in the editor
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Pickup", Meta = (AllowPrivateAcces = "true"))
	float CollectionSphereRadius;

protected:

	void PerformTask(ETaskEnum::Type NewTask);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerPerformTask(ETaskEnum::Type NewTask);
	void ServerPerformTask_Implementation(ETaskEnum::Type NewTask);
	bool ServerPerformTask_Validate(ETaskEnum::Type NewTask);

	void Fire();

	void StopFire();

	/**	Fires a projectile. */
	void OnFire();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	// Entry, Called on overlap with collisionSphere
	UFUNCTION(BlueprintCallable, Category = "Pickup")
	void CollectPickups();

	//Called on server to process the collection of pickups
	UFUNCTION(Reliable, Server, WithValidation)
	void ServerCollectPickups();
	void ServerCollectPickups_Implementation();
	bool ServerCollectPickups_Validate();
	
	// The character's starting ammo
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "HP", Meta = (BlueprintProtected = "true"))
	float InitialAmmo;

	// The character's starting health
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "HP", Meta = (BlueprintProtected = "true"))
	float InitialHealth;

	// The character's starting health
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Lives", Meta = (BlueprintProtected = "true"))
	float Lives;

	// The character's starting health
	UPROPERTY(ReplicatedUsing = OnRep_Health)
	float Health;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class UCameraComponent* GetCamera() const { return FPSCamera; }

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USphereComponent* GetCollectionSphere() const { return CollectionSphere; }

private:
	// The character's current ammo amount during gameplay
	UPROPERTY(Replicated, VisibleAnywhere, Category = "HP")
	float CurrentAmmo;

	// The character's current health amount during gameplay
	UPROPERTY(Replicated, VisibleAnywhere, Category = "HP")
	float CurrentHealth;
};

