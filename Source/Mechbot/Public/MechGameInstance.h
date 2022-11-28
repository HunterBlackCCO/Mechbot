// Copyright Hunter Black, 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include <Utilities/Tools/MechTool.h>
#include <Utilities/Weapons/MechWeapon.h>
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

	uint8 Lives;

	// Utilities
	TArray<AMechTool*> ObtainedTools;
	TArray<AMechWeapon*> ObtainedWeapons;

public:
	
	UFUNCTION(BlueprintPure, Category = "MechDroid|Player")
	uint8 GetLifeCount() const { return Lives; }

	const TArray<AMechTool*>& GetObtainedTools() const { return ObtainedTools; }
	const TArray<AMechWeapon*>& GetObtainedWeapons() const { return ObtainedWeapons; }

	void AddTool(AMechTool* Tool);
	void AddWeapon(AMechWeapon* Weapon);

	UFUNCTION(BlueprintCallable)
	void SetLives(const uint8 NewLivesCount) { Lives = NewLivesCount; }

	UFUNCTION(BlueprintCallable)
	void StartDeath();
};
