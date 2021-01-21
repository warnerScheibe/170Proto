// Copyright Epic Games, Inc. All Rights Reserved.

#include "Proto01GameMode.h"
#include "Proto01HUD.h"
#include "Proto01Character.h"
#include "UObject/ConstructorHelpers.h"

AProto01GameMode::AProto01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProto01HUD::StaticClass();
}
