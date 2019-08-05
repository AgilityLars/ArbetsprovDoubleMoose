// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "MultiplayerGameStateBase.generated.h"

UENUM(BlueprintType)
enum EPlayState
{
	EPlaying,
	EGameOver,
	EWon,
	EUnknown
};

/**
 * 
 */
UCLASS()
class ARBETSPROVFPS2_API AMultiplayerGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	AMultiplayerGameStateBase();

	//Required network scaffolding
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintPure, Category = "WinCriteria")
		float GetLivesLeft();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "WinCriteria")
		void UpdateLivesLeft(float DeltaLives);

	// Amount of kills to win the game
	UPROPERTY(Replicated, BlueprintReadWrite, Category = "WinCriteria")
		float LivesLeft;

	UFUNCTION(BlueprintPure, Category = "WinCriteria")
	EPlayState GetCurrentState() const;

	void SetCurrentState(EPlayState NewState);

	UFUNCTION()
	void OnRep_CurrentState();

private:
	UPROPERTY(ReplicatedUsing = OnRep_CurrentState)
	TEnumAsByte<enum EPlayState> CurrentState;

};
