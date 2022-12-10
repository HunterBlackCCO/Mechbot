// Copyright Hunter Black, 2022. All Rights Reserved.

#include "SaveData/MechCheckpoint.h"
#include <MechGameInstance.h>
#include <SaveData/MechSaveData.h>
#include <Kismet/GameplayStatics.h>

// Sets default values
AMechCheckpoint::AMechCheckpoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Id = 0;
}

void AMechCheckpoint::BeginPlay()
{
	Super::BeginPlay();
	
	if (UMechGameInstance* GameInstance = Cast<UMechGameInstance>(GetGameInstance()))
	{
		Id = GameInstance->GetTotalCheckpoints() + 1;
		GameInstance->AddCheckpoint();
	}

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

	if (SaveData->SaveData(GetWorld(), this, Player))
	{
		OnSave.Broadcast();
	}
}