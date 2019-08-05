// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupSpawner.h"
#include "Engine.h"

// Sets default values
APickupSpawner::APickupSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

AActor* APickupSpawner::Spawn()
{
	if (ToSpawn)
	{
		UWorld* world = GetWorld();
		if (world) 
		{
			FVector spawnLocation = FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z + SpawnHeight);
			FRotator spawnRotation = GetActorRotation();

			SpawnedItem = world->SpawnActor(ToSpawn->GetClass(), &spawnLocation, &spawnRotation);
		}
	}
	return ToSpawn;
}

// Called when the game starts or when spawned
void APickupSpawner::BeginPlay()
{
	Super::BeginPlay();
	Spawn();
	
}

// Called every frame
void APickupSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (SpawnedItem->IsActorBeingDestroyed() == true )
	{
		if (Timer >= RespawnTime)
		{
			Spawn();
			Timer = 0;
		}
		Timer += 0.02f;
	}

}

void SpawnActor()
{
}

