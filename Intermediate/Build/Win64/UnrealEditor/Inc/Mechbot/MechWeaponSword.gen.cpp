// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/Utilities/Weapons/MechWeaponSword.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechWeaponSword() {}
// Cross Module References
	MECHBOT_API UClass* Z_Construct_UClass_AMechWeaponSword_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechWeaponSword();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
// End Cross Module References
	void AMechWeaponSword::StaticRegisterNativesAMechWeaponSword()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechWeaponSword);
	UClass* Z_Construct_UClass_AMechWeaponSword_NoRegister()
	{
		return AMechWeaponSword::StaticClass();
	}
	struct Z_Construct_UClass_AMechWeaponSword_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechWeaponSword_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechWeaponSword_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/Weapons/MechWeaponSword.h" },
		{ "ModuleRelativePath", "Public/Utilities/Weapons/MechWeaponSword.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechWeaponSword_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechWeaponSword>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechWeaponSword_Statics::ClassParams = {
		&AMechWeaponSword::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMechWeaponSword_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechWeaponSword_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechWeaponSword()
	{
		if (!Z_Registration_Info_UClass_AMechWeaponSword.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechWeaponSword.OuterSingleton, Z_Construct_UClass_AMechWeaponSword_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechWeaponSword.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<AMechWeaponSword>()
	{
		return AMechWeaponSword::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechWeaponSword);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponSword_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponSword_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechWeaponSword, AMechWeaponSword::StaticClass, TEXT("AMechWeaponSword"), &Z_Registration_Info_UClass_AMechWeaponSword, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechWeaponSword), 491908455U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponSword_h_2754766476(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponSword_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponSword_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
