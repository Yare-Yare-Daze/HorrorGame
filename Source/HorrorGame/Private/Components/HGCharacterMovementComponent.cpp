// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/HGCharacterMovementComponent.h"
#include "Player/HGPlayerCharacter.h"

float UHGCharacterMovementComponent::GetMaxSpeed() const
{
	const auto MaxSpeed = Super::GetMaxSpeed();
	const auto Player = Cast<AHGPlayerCharacter>(GetPawnOwner());
	return Player && Player->IsRunning() ? MaxSpeed * SpeedModifier : MaxSpeed;
}
