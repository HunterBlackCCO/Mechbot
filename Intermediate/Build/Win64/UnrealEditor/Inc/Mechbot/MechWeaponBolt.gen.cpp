// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/Utilities/Weapons/MechWeaponBolt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechWeaponBolt() {}
// Cross Module References
	MECHBOT_API UClass* Z_Construct_UClass_AMechWeaponBolt_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechWeaponBolt();
	MECHBOT_API UClass* Z_Construct_UClass_AMechWeapon();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
// End Cross Module References
	void AMechWeaponBolt::StaticRegisterNativesAMechWeaponBolt()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechWeaponBolt);
	UClass* Z_Construct_UClass_AMechWeaponBolt_NoRegister()
	{
		return AMechWeaponBolt::StaticClass();
	}
	struct Z_Construct_UClass_AMechWeaponBolt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechWeaponBolt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMechWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechWeaponBolt_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Utilities/Weapons/MechWeaponBolt.h" },
		{ "ModuleRelativePath", "Public/Utilities/Weapons/MechWeaponBolt.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechWeaponBolt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechWeaponBolt>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechWeaponBolt_Statics::ClassParams = {
		&AMechWeaponBolt::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMechWeaponBolt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechWeaponBolt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechWeaponBolt()
	{
		if (!Z_Registration_Info_UClass_AMechWeaponBolt.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechWeaponBolt.OuterSingleton, Z_Construct_UClass_AMechWeaponBolt_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechWeaponBolt.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<AMechWeaponBolt>()
	{
		return AMechWeaponBolt::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechWeaponBolt);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponBolt_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponBolt_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechWeaponBolt, AMechWeaponBolt::StaticClass, TEXT("AMechWeaponBolt"), &Z_Registration_Info_UClass_AMechWeaponBolt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechWeaponBolt), 3715986867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponBolt_h_2313751683(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponBolt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponBolt_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
