// Copyright Hunter Black, 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MechbotGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MECHBOT_API AMechbotGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	void SpawnPlayer();
	void SpawnDroids();
	void SpawnBoss();
	void SpawnUtilities();

	void GeneratePlayerData();
};
