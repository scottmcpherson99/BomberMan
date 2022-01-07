// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHUDWidget.h"
#include "PlayerCharacter.h"

void UGameHUDWidget::Tick(float DeltaTime)
{
	
}

void UGameHUDWidget::UpdateTimer(float timer_)
{
	TimeRemaining->SetText(FText::AsNumber(timer_));
}

