// Copyright Hunter Black, 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MechDroid.generated.h"

UCLASS()
class MECHBOT_API AMechDroid : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMechDroid();

protected:

	int32 Health;
	int32 MaxHealth;
	bool bCanBeDamaged;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Getters
	bool CanBeDamaged() const { return bCanBeDamaged; }

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SpawnDroid();
	void CreateAttack();
	virtual void UpdateHealth(const int32 Damage);
	void Heal(const int32 HealAmount) { UpdateHealth(-HealAmount); }

	virtual void StartDeath();

};
