// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "AKAmmoPickup.generated.h"

/**
 * 
 */
UCLASS()
class ARBETSPROVFPS2_API AAKAmmoPickup : public APickup
{
	GENERATED_BODY()
	
public:
	// Set default values for instances of this class
	AAKAmmoPickup();

	// Required network scaffolding
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Serverside handling of being picked up by the child class
	virtual void PickedUpBy(APawn* Pawn) override;

	// Public method to access ammo's amount
	float GetAmmo();

protected:
	// Set amount of ammo the pickup holds
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Inventory", Meta = (BlueprintProtected = "true"))
	float AmmoAmount;
};
