// Fill out your copyright notice in the Description page of Project Settings.

#include <Components/SkeletalMeshComponent.h>
#include "PlayerCharacter.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//set the root component
	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Root Coponent"));
	MeshComp->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


//move the character forward
void APlayerCharacter::MoveForward(float value)
{
	if ((Controller) && (value != 0.0f))
	{
		if (value > 0)
		{
			MeshComp->SetWorldRotation(FRotator(0.0f, 270.0f, 0.0f));
		}
		else if (value < 0)
		{
			MeshComp->SetWorldRotation(FRotator(0.0f, 90.0f, 0.0f));
		}

		AddMovementInput(FVector(1.0 * value, 0.0f, 0.0f));

	}
}

//move the character forward
void APlayerCharacter::MoveRight(float value)
{
	if ((Controller) && (value != 0.0f))
	{
		if (value < 0)
		{
			MeshComp->SetWorldRotation(FRotator(0.0f, 180.0f, 0.0f));
		}
		else if (value > 0)
		{
			MeshComp->SetWorldRotation(FRotator(0.0f, 0.0f, 0.0f));
		}
	}
	AddMovementInput(FVector(0.0f, 1.0f * value, 0.0f));
}