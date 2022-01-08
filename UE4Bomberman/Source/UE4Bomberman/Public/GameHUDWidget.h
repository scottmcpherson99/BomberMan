// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "GameHUDWidget.generated.h"
/**
 * 
 */
UCLASS()
class UE4BOMBERMAN_API UGameHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	//player ones current powerup
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* CurrentPowerup;

	//player ones bombs remaining
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* BombsRemaining;

	//player twos bombs remaining
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* CurrentPowerup2;

	//player twos bombs remaining
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* BombsRemaining2;

	//game time remaining
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* TimeRemaining;

public:
	// Called every frame
	virtual void Tick(float DeltaTime);

	void UpdateTimer(float timer_);




};
