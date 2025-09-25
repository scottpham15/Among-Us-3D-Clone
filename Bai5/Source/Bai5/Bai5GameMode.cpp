// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bai5GameMode.h"
#include "Bai5PlayerController.h"
#include "Bai5Character.h"
#include "UObject/ConstructorHelpers.h"

ABai5GameMode::ABai5GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ABai5PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}