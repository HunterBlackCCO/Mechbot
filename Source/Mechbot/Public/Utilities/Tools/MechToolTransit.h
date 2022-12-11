// Copyright Hunter Black, 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MechToolTransit.generated.h"

UCLASS()
class MECHBOT_API AMechToolTransit : public AActor
{
	GENERATED_BODY()
	
	// NOT YET IMPLEMENTED - Kept for future use

public:	
	// Sets default values for this actor's properties
	AMechToolTransit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
