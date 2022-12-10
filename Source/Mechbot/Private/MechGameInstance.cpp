// Copyright Hunter Black, 2022. All Rights Reserved.

#include "MechGameInstance.h"
#include <Kismet/GameplayStatics.h>
#include <SaveData/MechSaveData.h>

UMechGameInstance::UMechGameInstance()
{
	Lives = 3;
	TotalCheckpoints = 0;
	ActiveCheckpoint = 0;
}

void UMechGameInstance::StartDeath()
{
	Lives--;

	// Save our new Lives count
	UMechSaveData* SaveData = Cast<UMechSaveData>(UGameplayStatics::CreateSaveGameObject(UMechSaveData::StaticClass()));
	if (!SaveData)
	{
		UE_LOG(LogTemp, Error, TEXT("UMechGameInstance::StartDeath() - Could not create save object."));
		return;
	}

	SaveData->SaveDataAfterDeath(GetWorld(), Lives);
}