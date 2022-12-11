// Copyright Hunter Black, 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MechGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class MECHBOT_API UMechGameInstance : public UGameInstance
{
	GENERATED_BODY()

	UMechGameInstance();

private:

	// Data we want to store across level reloads

	uint8 Lives;
	uint8 TotalCheckpoints;
	uint8 ActiveCheckpoint;

public:
	
	// Public Read-only Getters for private data
	UFUNCTION(BlueprintPure, Category = "MechData")
	uint8 GetLifeCount() const { return Lives; }

	UFUNCTION(BlueprintPure, Category = "MechData")
	uint8 GetActiveCheckpoint() const { return ActiveCheckpoint; }

	uint8 GetTotalCheckpoints() const { return TotalCheckpoints; }

	// Public Setters for private data
	UFUNCTION(BlueprintCallable, Category = "MechData")
	void SetLives(const uint8 NewLivesCount) { Lives = NewLivesCount; }

	UFUNCTION(BlueprintCallable, Category = "MechData")
	void SetActiveCheckpoint(const uint8 NewCheckpoint) { ActiveCheckpoint = NewCheckpoint; }

	void AddCheckpoint() { TotalCheckpoints++; }
	
	// Functions
	UFUNCTION(BlueprintCallable, Category = "MechData")
	void StartDeath();
};
