// Copyright Epic Games, Inc. All Rights Reserved.

#include "EmpiresGameMode.h"
#include "EmpiresPlayerController.h"
#include "EmpiresPawn.h"

AEmpiresGameMode::AEmpiresGameMode()
{
	// no pawn by default
	DefaultPawnClass = AEmpiresPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AEmpiresPlayerController::StaticClass();
}
