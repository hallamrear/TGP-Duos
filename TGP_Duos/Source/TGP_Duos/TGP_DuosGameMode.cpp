// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TGP_DuosGameMode.h"
#include "TGP_DuosHUD.h"
#include "TGP_DuosCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATGP_DuosGameMode::ATGP_DuosGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATGP_DuosHUD::StaticClass();
}
