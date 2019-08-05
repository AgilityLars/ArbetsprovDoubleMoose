// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "MultiplayerGameState.generated.h"

/**
 * 
 */
UCLASS()
class ARBETSPROVFPS2_API AMultiplayerGameState : public AGameState
{
	GENERATED_BODY()

public:
	AMultiplayerGameState();

	//Required network scaffolding
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintPure, Category = "WinCriteria")
	float GetKillsToWin();

	// Amount of kills to win the game
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "WinCriteria")
	float KillsToWin;
};
