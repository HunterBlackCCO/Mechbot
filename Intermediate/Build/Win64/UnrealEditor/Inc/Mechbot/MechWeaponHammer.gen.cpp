// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/Utilities/Weapons/MechWeaponHammer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechWeaponHammer() {}
// Cross Module References
	MECHBOT_API UClass* Z_Construct_UClass_AMechWeaponHammer_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechWeaponHammer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
// End Cross Module References
	void AMechWeaponHammer::StaticRegisterNativesAMechWeaponHammer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechWeaponHammer);
	UClass* Z_Construct_UClass_AMechWeaponHammer_NoRegister()
	{
		return AMechWeaponHammer::StaticClass();
	}
	struct Z_Construct_UClass_AMechWeaponHammer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechWeaponHammer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechWeaponHammer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/Weapons/MechWeaponHammer.h" },
		{ "ModuleRelativePath", "Public/Utilities/Weapons/MechWeaponHammer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechWeaponHammer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechWeaponHammer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechWeaponHammer_Statics::ClassParams = {
		&AMechWeaponHammer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMechWeaponHammer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechWeaponHammer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechWeaponHammer()
	{
		if (!Z_Registration_Info_UClass_AMechWeaponHammer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechWeaponHammer.OuterSingleton, Z_Construct_UClass_AMechWeaponHammer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechWeaponHammer.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<AMechWeaponHammer>()
	{
		return AMechWeaponHammer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechWeaponHammer);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponHammer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponHammer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechWeaponHammer, AMechWeaponHammer::StaticClass, TEXT("AMechWeaponHammer"), &Z_Registration_Info_UClass_AMechWeaponHammer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechWeaponHammer), 791011333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponHammer_h_3357766318(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponHammer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponHammer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
