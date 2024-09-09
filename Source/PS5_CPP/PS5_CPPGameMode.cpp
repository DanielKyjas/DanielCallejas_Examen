// Copyright Epic Games, Inc. All Rights Reserved.

#include "PS5_CPPGameMode.h"
#include "PS5_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

APS5_CPPGameMode::APS5_CPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
