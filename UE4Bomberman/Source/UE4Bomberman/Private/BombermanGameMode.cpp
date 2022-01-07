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

	SetCurrentState(EBombermanPlayState::EPlaying);

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
	
	
}

void ABombermanGameMode::DecreaseTimer()
{
	//decrease the timer and update this on the UI
	timeRemaining--;
	gameWidget->UpdateTimer(timeRemaining);

	//if the timer has reached 0, exit the game
	if (timeRemaining <= 0)
	{
		SetCurrentState(EBombermanPlayState::EGameOver);
	}
}

EBombermanPlayState ABombermanGameMode::GetCurrentState() const
{
	return currentState;
}

void ABombermanGameMode::SetCurrentState(EBombermanPlayState newState_)
{
	//set the current state
	currentState = newState_;

	HandleNewState(currentState);
}

void ABombermanGameMode::HandleNewState(EBombermanPlayState newState)
{
	ACharacter* MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	//check for valid world
	UWorld* const world = GetWorld();

	switch (newState)
	{
		//if the game is playing
	case EBombermanPlayState::EPlaying:

		timeRemaining = gameTotalTime;

		if (world)
		{
			//decrease the timer by 1 every second
			world->GetTimerManager().SetTimer(gameTimer, this, &ABombermanGameMode::DecreaseTimer, 1.0f, true);
		}

		break;

		//if the game has finished
	case EBombermanPlayState::EGameOver:
		UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);
		break;
	}
}