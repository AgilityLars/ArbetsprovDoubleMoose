// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"

APickup::APickup()
{
	//Tell engine to replicate this actor
	bReplicates = true;

	//Pickups do not need to tick every frame
	PrimaryActorTick.bCanEverTick = false;

	// StaticMeshActor disables overlap events by defaults, which we need to renable
	GetStaticMeshComponent()->SetGenerateOverlapEvents(true);

	if (Role == ROLE_Authority)
	{
		bIsActive = true;
	}
}

void APickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APickup, bIsActive);
}

bool APickup::IsActive()
{
	return bIsActive;
}

void APickup::SetActive(bool NewPickupState)
{
	if (Role == ROLE_Authority)
	{
		bIsActive = NewPickupState;
	}
}

void APickup::OnRep_IsActive() 
{
	//TODO
}

void APickup::ClientOnPickedUpBy_Implementation(APawn* Pawn)
{
	// Store the pawn who picked up the pickup
	PickupInstigator = Pawn;

	// Fire the blueprint native event, which itself cannot be replicated
	WasCollected();
}

void APickup::WasCollected_Implementation()
{
	//Log a debug message
	UE_LOG(LogClass, Log, TEXT("APickup::WasCollected_Implementation() %s"), *GetName());
}

void APickup::PickedUpBy(APawn* Pawn)
{
	if (Role == ROLE_Authority)
	{
		// Store the pawn who picked up the pickup
		PickupInstigator = Pawn;

		// Notify clients of the picked up action
		ClientOnPickedUpBy(Pawn);
	}
}
