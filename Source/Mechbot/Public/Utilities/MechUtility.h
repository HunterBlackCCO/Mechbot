// Copyright Hunter Black, 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include <Components/BoxComponent.h>
#include "GameFramework/Actor.h"
#include <PaperSpriteComponent.h>
#include "MechUtility.generated.h"

UCLASS()
class MECHBOT_API AMechUtility : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMechUtility();

	// Components
	UPROPERTY(VisibleAnywhere, Category = "Component")
	USceneComponent* BaseComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Component")
	UPaperSpriteComponent* PaperSpriteComponent;

	UPROPERTY(EditAnywhere, Category = "Component")
	UBoxComponent* BoxComponent;

private:

	FString Id;

protected:

	UPROPERTY(EditDefaultsOnly, Category = "MechUtility", meta = (ClampMin = 0.0f))
	float CooldownTimer;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MechUtility|Sound")
	USoundBase* MainActivationSFX;

	UPROPERTY(EditDefaultsOnly, Category = "MechUtility|Sound", meta = (ClampMin=0.0f, ClampMax = 2.0f))
	float MainActivationSFXPitch;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MechUtility|Sound")
	USoundBase* SpecialActivationSFX;

	UPROPERTY(EditDefaultsOnly, Category = "MechUtility|Sound", meta = (ClampMin = 0.0f, ClampMax = 2.0f))
	float SpecialActivationSFXPitch;

	// The Energy cost to the player to use the Special Ability
	UPROPERTY(EditDefaultsOnly)
	uint8 SpecialEnergyCost;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Every Utility has a "Main Ability" and a "Special Ability"
	// "Main Abilities" are the Utility's primary function
	// "Special Abilities" will expend Player Energy to do something interesting
	UFUNCTION()
	virtual void ActivateMainAbility();
	UFUNCTION()
	virtual void ActivateSpecialAbility();

	// This should be called in the Player class
	UFUNCTION(BlueprintPure, Category = "MechUtility|Special")
	virtual bool CanUseSpecialAbility(const uint8 PlayerEnergy) const { return (PlayerEnergy >= SpecialEnergyCost); }

	UFUNCTION(BlueprintPure, Category = "MechUtility|Special")
	virtual uint8 GetSpecialEnergyCost() const { return SpecialEnergyCost; }

	UFUNCTION(BlueprintPure, Category = "MechUtility")
	float GetCooldownTimer() const { return CooldownTimer; }

	UFUNCTION(BlueprintCallable)
	virtual void GiveToPlayer(AActor* OtherActor);
};
