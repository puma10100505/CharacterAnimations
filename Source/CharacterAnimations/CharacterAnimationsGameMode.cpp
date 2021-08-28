// Copyright Epic Games, Inc. All Rights Reserved.

#include "CharacterAnimationsGameMode.h"
#include "CharacterAnimationsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACharacterAnimationsGameMode::ACharacterAnimationsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
