// Fill out your copyright notice in the Description page of Project Settings.


#include "BombermanGameMode.h"
#include "PlayerCharacter.h"
#include "Blueprint/UserWidget.h"
#include "GameHUDWidget.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

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

	//create the widget
	if (IsValid(HUDWidgetClass))
	{
		gameWidget = Cast<UGameHUDWidget>(CreateWidget(GetWorld(), HUDWidgetClass));
	}

	if (gameWidget != nullptr)
	{
		//add the widget to the screen
		gameWidget->AddToViewport();
	}
	else
	{
		//widget wasn't found
		UE_LOG(LogTemp, Warning, TEXT("gameWidget not found!"));
	}
	
	timeRemaining = gameTotalTime;

	//check for valid world
	UWorld* const world = GetWorld();

	if (world)
	{
		//decrease the timer by 1 every second
		world->GetTimerManager().SetTimer(gameTimer, this, &ABombermanGameMode::DecreaseTimer, 1.0f, true);
	}
}

void ABombermanGameMode::DecreaseTimer()
{
	//decrease the timer and update this on the UI
	timeRemaining--;
	gameWidget->UpdateTimer(timeRemaining);

	//if the timer has reached 0, exit the game
	if (timeRemaining <= 0)
	{
		UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);
	}
}