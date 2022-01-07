// Fill out your copyright notice in the Description page of Project Settings.


#include "EndGameWidget.h"

void UEndGameWidget::DeclareWinner(FString winner)
{
	WinnerText->SetText(FText::FromString(winner));
}