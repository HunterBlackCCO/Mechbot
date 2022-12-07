// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechbot_init() {}
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnDeath__DelegateSignature();
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature();
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnHealthUpdated__DelegateSignature();
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnRevive__DelegateSignature();
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnToolAdded__DelegateSignature();
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature();
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnWeaponAdded__DelegateSignature();
	MECHBOT_API UFunction* Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Mechbot;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Mechbot()
	{
		if (!Z_Registration_Info_UPackage__Script_Mechbot.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Mechbot_OnDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Mechbot_OnEnergyUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Mechbot_OnHealthUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Mechbot_OnRevive__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Mechbot_OnToolAdded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Mechbot_OnToolEquipped__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Mechbot_OnWeaponAdded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Mechbot_OnWeaponEquipped__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Mechbot",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x23F954FC,
				0xC09C3A7F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Mechbot.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Mechbot.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Mechbot(Z_Construct_UPackage__Script_Mechbot, TEXT("/Script/Mechbot"), Z_Registration_Info_UPackage__Script_Mechbot, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x23F954FC, 0xC09C3A7F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
