// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiplayerGameStateBase.h"
#include "Net/UnrealNetwork.h"


AMultiplayerGameStateBase::AMultiplayerGameStateBase()
{
	LivesLeft = 5.f;
}

void AMultiplayerGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMultiplayerGameStateBase, LivesLeft);
	DOREPLIFETIME(AMultiplayerGameStateBase, CurrentState);
}

float AMultiplayerGameStateBase::GetLivesLeft()
{
	return LivesLeft;
}

void AMultiplayerGameStateBase::UpdateLivesLeft(float DeltaLives)
{
	LivesLeft += DeltaLives;
}

EPlayState AMultiplayerGameStateBase::GetCurrentState() const
{
	return CurrentState;
}

void AMultiplayerGameStateBase::SetCurrentState(EPlayState NewState)
{
	if (Role = ROLE_Authority)
	{
		CurrentState = NewState;
	}
}

void AMultiplayerGameStateBase::OnRep_CurrentState()
{

}
