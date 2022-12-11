// Copyright Hunter Black, 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MechCheckpoint.h"
#include <Utilities/Tools/MechTool.h>
#include <Utilities/Weapons/MechWeapon.h>
#include "MechSaveData.generated.h"

// The name of the Save file
#define SAVENAME "MechbotSave"

/**
 * 
 */
UCLASS()
class MECHBOT_API UMechSaveData : public USaveGame
{
	GENERATED_BODY()

public:

	// Data to save
	UPROPERTY(BlueprintReadWrite)
	uint8 Lives;

	UPROPERTY(BlueprintReadWrite)
	AMechCheckpoint* ActiveCheckpoint;

	UPROPERTY(BlueprintReadWrite)
	TArray<AMechTool*> ObtainedTools;

	UPROPERTY(BlueprintReadWrite)
	TArray<AMechWeapon*> ObtainedWeapons;

	// Save functions
	bool SaveData(const UWorld* World, AMechCheckpoint* Checkpoint, AMechPaperPlayer* Player);
	void SaveDataAfterDeath(const UWorld* World, const uint8 LifeCount);
	void SaveDataAfterGameWin(const UWorld* World, AMechPaperPlayer* Player);

	// Load functions
	bool LoadData(const UWorld* World, AMechPaperPlayer* Player);
};
