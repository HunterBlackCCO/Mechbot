// Copyright Hunter Black, 2022. All Rights Reserved.

#include "SaveData/MechCheckpoint.h"
#include <MechGameInstance.h>
#include <SaveData/MechSaveData.h>
#include <Kismet/GameplayStatics.h>

AMechCheckpoint::AMechCheckpoint()
{
	// Initialize variables with default values
	Id = 0;
	PrimaryActorTick.bCanEverTick = true;
}

void AMechCheckpoint::BeginPlay()
{
	Super::BeginPlay();
	
	// Assign the Id based on how many Checkpoints are currently in the World
	if (UMechGameInstance* GameInstance = Cast<UMechGameInstance>(GetGameInstance()))
	{
		Id = GameInstance->GetTotalCheckpoints() + 1;
		GameInstance->AddCheckpoint();
	}

	// Notify others that the checkpoint has been created
	OnCreated.Broadcast();
}

bool AMechCheckpoint::IsCheckpointActive() const
{
	if (const UMechGameInstance* GameInstance = Cast<UMechGameInstance>(GetGameInstance()))
	{
		return Id == GameInstance->GetActiveCheckpoint();
	}

	return false;
}

void AMechCheckpoint::SaveProgress(AMechPaperPlayer* Player)
{
	// Ensure Player is valid
	if (!Player)
	{
		return;
	}

	// Create the SaveData object
	UMechSaveData* SaveData = Cast<UMechSaveData>(UGameplayStatics::CreateSaveGameObject(UMechSaveData::StaticClass()));
	if (!SaveData)
	{
		UE_LOG(LogTemp, Error, TEXT("AMechCheckpoint::SaveProgress() - Could not create save object."));
		return;
	}

	// Notify others when we Save the data
	if (SaveData->SaveData(GetWorld(), this, Player))
	{
		OnSave.Broadcast();
	}
}