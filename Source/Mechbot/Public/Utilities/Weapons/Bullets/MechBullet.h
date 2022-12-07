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
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "MechBullet")
	bool bCanPierceEnemies;

	UPROPERTY(EditAnywhere, Category = "MechBullet")
	bool bCanPierceEnvironment;

	UPROPERTY(EditAnywhere, Category = "MechBullet")
	uint8 Damage;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void OnBeginOverlap(AActor* OtherActor);
};
