// Copyright Epic Games, Inc. All Rights Reserved.

#include "TD_PrototypeGameMode.h"
#include "TD_PrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATD_PrototypeGameMode::ATD_PrototypeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
