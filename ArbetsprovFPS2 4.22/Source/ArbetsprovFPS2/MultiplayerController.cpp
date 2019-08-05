// Fill out your copyright notice in the Description page of Project Settings.

#include "MultiplayerController.h"
#include "Engine.h"
#include "TimerManager.h"

void AMultiplayerController::OnKilled()
{
	UnPossess();
	GetWorldTimerManager().SetTimer(TimerHandle_Respawn, this, &AMultiplayerController::Respawn, 5.f);
}

void AMultiplayerController::Respawn()
{
	AGameModeBase* GameMode = GetWorld()->GetAuthGameMode();
	if (GameMode)
	{
		APawn* NewPawn = GameMode->SpawnDefaultPawnFor(this, StartSpot.Get());
		Possess(NewPawn);
	}
}