// Copyright Hunter Black, 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "MechPaperDroid.generated.h"

// Delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthUpdated, float, NewPercent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);

/**
 * 
 */
UCLASS()
class MECHBOT_API AMechPaperDroid : public APaperCharacter
{
	GENERATED_BODY()
	
public:
	// Sets default values for this character's properties
	AMechPaperDroid();

	// Default Functions - may not need

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Delegates
	UPROPERTY(BlueprintAssignable)
	FOnHealthUpdated OnHealthUpdated;

	UPROPERTY(BlueprintAssignable)
	FOnDeath OnDeath;

protected:

	uint8 Health;
	bool bCanAttack;
	bool bCanBeDamaged;
	bool bCanMove;

	// Setup Specifiers

	UPROPERTY(EditDefaultsOnly, Category = "MechDroid", meta=(ClampMin=1))
	uint8 MaxHealth;

	UPROPERTY(EditDefaultsOnly, Category = "MechDroid")
	uint8 BaseDamage;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	// Health
	UFUNCTION(BlueprintPure, Category = "MechDroid|Health")
	bool CanBeDamaged() const { return bCanBeDamaged; }

	UFUNCTION(BlueprintCallable, Category = "MechDroid|Health")
	void SetCanBeDamaged(const bool bIsDamageable) { bCanBeDamaged = bIsDamageable; }

	UFUNCTION(BlueprintPure, Category = "MechDroid|Health")
	float GetPercentHealth() const { return (MaxHealth != 0) ? ((Health * 1.f) / MaxHealth) : 0.f; }

	UFUNCTION(BlueprintPure, Category = "MechDroid|Health")
	bool IsAlive() const { return Health > 0; }

	UFUNCTION(BlueprintCallable, Category = "MechDroid|Health")
	virtual void TakeDamage(const uint8 Amount);

	UFUNCTION(BlueprintCallable, Category = "MechDroid|Health")
	virtual void Heal(const uint8 Amount);

	void SignalHealthUpdated();

	// Other
	void SpawnDroid();
	void CreateAttack();

	virtual void StartDeath();
};
