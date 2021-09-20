// Fill out your copyright notice in the Description page of Project Settings.

#include "HGGameModeBase.h"
#include "Player/HGPlayerCharacter.h"
#include "Player/HGPlayerController.h"

AHGGameModeBase::AHGGameModeBase()
{
	DefaultPawnClass = AHGPlayerCharacter::StaticClass();
	PlayerControllerClass = AHGPlayerController::StaticClass();
}