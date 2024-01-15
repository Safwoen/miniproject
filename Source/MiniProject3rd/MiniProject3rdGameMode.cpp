// Copyright Epic Games, Inc. All Rights Reserved.

#include "MiniProject3rdGameMode.h"
#include "MiniProject3rdPlayerController.h"
#include "MiniProject3rdCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMiniProject3rdGameMode::AMiniProject3rdGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMiniProject3rdPlayerController::StaticClass();

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