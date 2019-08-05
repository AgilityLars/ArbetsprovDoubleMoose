// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiplayerGameState.h"
#include "Net/UnrealNetwork.h"

AMultiplayerGameState::AMultiplayerGameState()
{

}

void AMultiplayerGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMultiplayerGameState, KillsToWin);
}

float AMultiplayerGameState::GetKillsToWin()
{
	return KillsToWin;
}