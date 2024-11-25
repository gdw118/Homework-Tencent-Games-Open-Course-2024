// Copyright Epic Games, Inc. All Rights Reserved.

#include "android_bundleGameMode.h"
#include "android_bundleCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aandroid_bundleGameMode::Aandroid_bundleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
