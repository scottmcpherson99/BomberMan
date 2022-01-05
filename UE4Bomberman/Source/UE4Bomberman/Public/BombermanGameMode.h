// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BombermanGameMode.generated.h"

/**
 * 
 */
UCLASS()
class UE4BOMBERMAN_API ABombermanGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ABombermanGameMode();

	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;


protected:

	//widget class to use for our hud screen
	UPROPERTY(EditAnywhere, Category = "Class Types")
	TSubclassOf<UUserWidget> HUDWidgetClass;

	UPROPERTY(VisibleInstanceOnly, Category = "Runtime")
		class UGameHUDWidget* gameWidget;


	//the instance of the hud
	//UPROPERTY()
	//class UUserWidget* CurrentWidget;

};
