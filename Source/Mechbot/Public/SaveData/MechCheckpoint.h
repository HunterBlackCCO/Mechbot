// Copyright Hunter Black, 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Droids/MechPaperPlayer.h>
#include "MechCheckpoint.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCreated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSave);

UCLASS()
class MECHBOT_API AMechCheckpoint : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMechCheckpoint();

	UPROPERTY(BlueprintAssignable)
	FOnCreated OnCreated;

	UPROPERTY(BlueprintAssignable)
	FOnSave OnSave;

private:

	uint8 Id;

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MechCheckpoint")
	USoundBase* ActivationSFX;

public:

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintPure)
	uint8 GetId() const { return Id; }

	UFUNCTION(BlueprintPure)
	bool IsCheckpointActive() const;

	UFUNCTION(BlueprintCallable)
	void SaveProgress(AMechPaperPlayer* Player);

};
