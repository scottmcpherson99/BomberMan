// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BombermanGameMode.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EBombermanPlayState : uint8
{
	EPlaying UMETA(DisplayName= "playing"),
	EGameOver UMETA(DisplayName = "game over"),
	EMainMenu UMETA(DisplayName = "main menu"),
	EUnknown UMETA(DisplayName = "Unknown")
};

UCLASS()
class UE4BOMBERMAN_API ABombermanGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ABombermanGameMode();


	virtual void BeginPlay() override;

	//returns the current playing state
	UFUNCTION(BlueprintPure, Category = "Game settings")
		EBombermanPlayState GetCurrentState() const;

	void SetCurrentState(EBombermanPlayState newState);

	void SetWinnerText(FString winner_);

protected:

	//widget class to use for our hud screen
	UPROPERTY(EditAnywhere, Category = "Class Types")
	TSubclassOf<UUserWidget> HUDWidgetClass;

	//widget class to use for our end screen
	UPROPERTY(EditAnywhere, Category = "Class Types")
		TSubclassOf<UUserWidget> GameOverWidgetClass;

	UPROPERTY(VisibleInstanceOnly, Category = "Runtime")
		class UGameHUDWidget* gameWidget;

	UPROPERTY(VisibleInstanceOnly, Category = "Runtime")
		class UEndGameWidget* gameOverWidget;

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Game Settings", Meta = (BlueprintProtected = "true"))
		float gameTotalTime;

	float timeRemaining;

	FTimerHandle gameTimer;
	FTimerHandle backgroundTimer;

	void DecreaseTimer();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
		USoundBase* backgroundSoundBase;
private:
	//keeps track of the current play state
	EBombermanPlayState currentState;

	//handle any function calls that rely upon changing the playing state
	void HandleNewState(EBombermanPlayState newState);

	void SetUpWidget();

	void PlayBackgroundMusic();

	//the text that will be displayed to indicate the winner
	FString winnertext;
};
