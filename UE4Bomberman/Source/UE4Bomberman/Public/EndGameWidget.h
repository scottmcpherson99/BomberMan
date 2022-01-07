// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "EndGameWidget.generated.h"

/**
 * 
 */
UCLASS()
class UE4BOMBERMAN_API UEndGameWidget : public UUserWidget
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* WinnerText;

public:
	void DeclareWinner(FString winner);
};
