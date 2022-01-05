// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameHUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class UE4BOMBERMAN_API UGameHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* CurrentPowerup;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* BombsRemaining;
public:
	// Called every frame
	virtual void Tick(float DeltaTime);

};
