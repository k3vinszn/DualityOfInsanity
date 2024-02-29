// Copyright Epic Games, Inc. All Rights Reserved.

#include "DualityOfInsanityGameMode.h"
#include "DualityOfInsanityCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADualityOfInsanityGameMode::ADualityOfInsanityGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
