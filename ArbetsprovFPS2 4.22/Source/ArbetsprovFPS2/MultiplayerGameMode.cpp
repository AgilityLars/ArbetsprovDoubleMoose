// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiplayerGameMode.h"
#include "MultiplayerCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "MultiplayerController.h"
#include "GameFramework/HUD.h"
#include "MultiplayerGameStateBase.h"

AMultiplayerGameMode::AMultiplayerGameMode()
	: Super()
{

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Arbetsprov/OnlineMultiplayer/Blueprints/MyMultiplayerCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	PlayerControllerClass = AMultiplayerController::StaticClass();

	static ConstructorHelpers::FClassFinder<AHUD> PlayerHUDClass(TEXT("/Game/Arbetsprov/OnlineMultiplayer/Blueprints/MyMultiplayerHUD"));
	if (PlayerHUDClass.Class != NULL)
	{
		HUDClass = PlayerHUDClass.Class;
	}

	GameStateClass = AMultiplayerGameStateBase::StaticClass();

}

void AMultiplayerGameMode::BeginPlay(){

}
