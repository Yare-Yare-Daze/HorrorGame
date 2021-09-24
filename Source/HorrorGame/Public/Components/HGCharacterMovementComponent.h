// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HGCharacterMovementComponent.generated.h"

UCLASS()
class HORRORGAME_API UHGCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Movement", meta = (ClampMin = "1.5", ClampMax = "5.0"))
	float SpeedModifier = 2.0f;
	
	virtual float GetMaxSpeed() const override;
};
