// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Core/Public/Math/Rotator.h"
#include "PickupSpawner.generated.h"

UCLASS()
class ARBETSPROVFPS2_API APickupSpawner : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	APickupSpawner();

	AActor* SpawnedItem;
	float Timer = 0;

	UPROPERTY(EditAnywhere)
	AActor* ToSpawn;
	UPROPERTY(EditAnywhere)
	float RespawnTime;
	UPROPERTY(EditAnywhere)
	float SpawnHeight;

	UFUNCTION(BlueprintCallable)
	AActor* Spawn();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
