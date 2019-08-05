// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MultiplayerController.generated.h"

/**
 * 
 */
UCLASS()
class ARBETSPROVFPS2_API AMultiplayerController : public APlayerController
{
	GENERATED_BODY()

		FTimerHandle TimerHandle_Respawn;

public:
	void OnKilled();

	void Respawn();
	
};
