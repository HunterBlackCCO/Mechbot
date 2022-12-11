// Copyright Hunter Black, 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include <Components/CapsuleComponent.h>
#include "GameFramework/Actor.h"
#include <GameFramework/ProjectileMovementComponent.h>
#include "PaperFlipbookComponent.h"
#include "MechBullet.generated.h"

UCLASS()
class MECHBOT_API AMechBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMechBullet();

	// Commented out due to unexpected behaviors
	// The below is currently set up in Blueprints but should be nativized at a future time
	// Components
	/*
	UPROPERTY(VisibleAnywhere, Category = "Component")
	USceneComponent* BaseComponent;

	UPROPERTY(EditAnywhere, Category = "Component")
	UPaperFlipbookComponent* PaperFlipbookComponent;

	UPROPERTY(EditAnywhere, Category = "Component")
	UCapsuleComponent* CapsuleComponent;

	UPROPERTY(EditAnywhere, Category = "Component")
	UProjectileMovementComponent* ProjectileMovementComponent;
	*/

protected:

	// Object Configuration Settings
	UPROPERTY(EditAnywhere, Category = "MechBullet")
	bool bCanPierceEnemies;

	UPROPERTY(EditAnywhere, Category = "MechBullet")
	bool bCanPierceEnvironment;

	UPROPERTY(EditAnywhere, Category = "MechBullet")
	uint8 Damage;

public:

	// Event Functions
	UFUNCTION(BlueprintCallable)
	void OnBeginOverlap(AActor* OtherActor);
};
