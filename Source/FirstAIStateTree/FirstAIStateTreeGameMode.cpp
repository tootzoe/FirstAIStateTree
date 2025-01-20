// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstAIStateTreeGameMode.h"
#include "FirstAIStateTreeCharacter.h"
#include "TootPlayerController.h"
#include "UObject/ConstructorHelpers.h"

AFirstAIStateTreeGameMode::AFirstAIStateTreeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
        PlayerControllerClass = ATootPlayerController::StaticClass();
	}
}
