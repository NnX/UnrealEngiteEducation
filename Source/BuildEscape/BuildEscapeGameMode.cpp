// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "BuildEscapeGameMode.h"
#include "BuildEscapeHUD.h"
#include "BuildEscapeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABuildEscapeGameMode::ABuildEscapeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABuildEscapeHUD::StaticClass();
}
