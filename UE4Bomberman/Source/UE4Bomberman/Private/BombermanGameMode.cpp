// Fill out your copyright notice in the Description page of Project Settings.


#include "BombermanGameMode.h"
#include "PlayerCharacter.h"
#include "Blueprint/UserWidget.h"
#include "GameHUDWidget.h"

ABombermanGameMode::ABombermanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/BP_PlayerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	
}

void ABombermanGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(HUDWidgetClass))
	{
		gameWidget = Cast<UGameHUDWidget>(CreateWidget(GetWorld(), HUDWidgetClass));
	}

	if (gameWidget != nullptr)
	{
		gameWidget->AddToViewport();
		UE_LOG(LogTemp, Warning, TEXT("gameWidget found!"));

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("gameWidget not found!"));
	}
	/*

	if (HUDWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);

		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}*/
}

void ABombermanGameMode::Tick(float DeltaTime)
{

}