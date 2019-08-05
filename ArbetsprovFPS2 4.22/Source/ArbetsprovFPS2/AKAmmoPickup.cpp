// Fill out your copyright notice in the Description page of Project Settings.

#include "AKAmmoPickup.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AAKAmmoPickup::AAKAmmoPickup()
{
	//Keep movement synced from server to clients
	bReplicates = true;

	//This pickup has physics enambled and should move
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetSimulatePhysics(true);

	// Set a default value for the ammo amount
	AmmoAmount = 1.0f;
}


void AAKAmmoPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAKAmmoPickup, AmmoAmount);
}

void AAKAmmoPickup::PickedUpBy(APawn * Pawn)
{
	Super::PickedUpBy(Pawn);

	if (Role == ROLE_Authority)
	{
		//Give clients time to play vfx, etc.. before destroying the ammo
		SetLifeSpan(1.0f);
	}
}

float AAKAmmoPickup::GetAmmo()
{
	return AmmoAmount;
}
