// Copyright Hunter Black, 2022. All Rights Reserved.

#include "Utilities/Tools/MechTool.h"

void AMechTool::ActivateMainAbility(/*const FVector& StartLocation, const FVector& EndLocation*/)
{
	Super::ActivateMainAbility();
}

void AMechTool::ActivateSpecialAbility()
{
	Super::ActivateSpecialAbility();
}

void AMechTool::StartCooldown()
{
	bOnCooldown = true;
	// TODO - Start Timer(CooldownTimer)
}

void AMechTool::EndCooldown()
{
	bOnCooldown = false;
	// TODO - End/Invalidate Timer?
}
