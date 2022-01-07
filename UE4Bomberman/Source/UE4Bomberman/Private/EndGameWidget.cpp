// Fill out your copyright notice in the Description page of Project Settings.


#include "EndGameWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UEndGameWidget::NativeConstruct()
{
	if (RestartButton)
	{
		RestartButton->OnClicked.AddDynamic(this, &UEndGameWidget::OnRestartClicked);
	}

	if (QuitButton)
	{
		QuitButton->OnClicked.AddDynamic(this, &UEndGameWidget::OnQuitClicked);
	}
}

void UEndGameWidget::DeclareWinner(FString winner)
{
	WinnerText->SetText(FText::FromString(winner));
}

void UEndGameWidget::OnRestartClicked()
{
	UGameplayStatics::OpenLevel(GetWorld(), "MainLevel");
}

void UEndGameWidget::OnQuitClicked()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);
}