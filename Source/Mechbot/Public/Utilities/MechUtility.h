// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MechUtility.generated.h"

UCLASS()
class MECHBOT_API AMechUtility : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMechUtility();

private:

	FString Id;

protected:

	// The Energy cost to the player to use the Special Ability
	// UPROPERTY(BlueprintAssignable)
	int32 SpecialEnergyCost;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Every Utility has a "Main Ability" and a "Special Ability"
	// "Main Abilities" are the Utility's primary function
	// "Special Abilities" will expend Player Energy to do something interesting
	virtual void Activate();
	virtual void ActivateMainAbility();
	virtual void ActivateSpecialAbility();

	// This should be called in the Player class
	virtual bool CanUseSpecialAbility(const int32 PlayerEnergy) const { return (PlayerEnergy >= SpecialEnergyCost); }
	virtual int32 GetSpecialEnergyCost() const { return SpecialEnergyCost; }

	virtual void SpawnInWorld(FString UtilityId);

};
