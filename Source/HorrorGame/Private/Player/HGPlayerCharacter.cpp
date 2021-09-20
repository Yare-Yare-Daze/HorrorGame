// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/HGPlayerCharacter.h"
#include "Camera/CameraComponent.h"

// Sets default values
AHGPlayerCharacter::AHGPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComponent->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void AHGPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHGPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHGPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AHGPlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AHGPlayerCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &AHGPlayerCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("TurnAround", this, &AHGPlayerCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AHGPlayerCharacter::Jump);

}

void AHGPlayerCharacter::MoveForward(float Axis)
{
	if(Axis == 0.0f) return;
	AddMovementInput(GetActorForwardVector(), Axis);
}
void AHGPlayerCharacter::MoveRight(float Axis)
{
	if(Axis == 0.0f) return;
	AddMovementInput(GetActorRightVector(), Axis);
}

