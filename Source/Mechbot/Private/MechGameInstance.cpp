// Copyright Hunter Black, 2022. All Rights Reserved.

#include "MechGameInstance.h"
#include <Kismet/GameplayStatics.h>
#include <SaveData/MechSaveData.h>

UMechGameInstance::UMechGameInstance()
{
	// Initialize variables with default values
	Lives = 3;
	TotalCheckpoints = 0;
	ActiveCheckpoint = 0;
}

void UMechGameInstance::StartDeath()
{
	// Update Player life count
	Lives--;

	// Commit and save the change
	UMechSaveData* SaveData = Cast<UMechSaveData>(UGameplayStatics::CreateSaveGameObject(UMechSaveData::StaticClass()));
	if (!SaveData)
	{
		UE_LOG(LogTemp, Error, TEXT("UMechGameInstance::StartDeath() - Could not create save object."));
		return;
	}

	SaveData->SaveDataAfterDeath(GetWorld(), Lives);
}