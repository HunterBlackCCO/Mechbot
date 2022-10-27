// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/Utilities/Weapons/MechWeaponSpear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechWeaponSpear() {}
// Cross Module References
	MECHBOT_API UClass* Z_Construct_UClass_AMechWeaponSpear_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechWeaponSpear();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
// End Cross Module References
	void AMechWeaponSpear::StaticRegisterNativesAMechWeaponSpear()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechWeaponSpear);
	UClass* Z_Construct_UClass_AMechWeaponSpear_NoRegister()
	{
		return AMechWeaponSpear::StaticClass();
	}
	struct Z_Construct_UClass_AMechWeaponSpear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechWeaponSpear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechWeaponSpear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/Weapons/MechWeaponSpear.h" },
		{ "ModuleRelativePath", "Public/Utilities/Weapons/MechWeaponSpear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechWeaponSpear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechWeaponSpear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechWeaponSpear_Statics::ClassParams = {
		&AMechWeaponSpear::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMechWeaponSpear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechWeaponSpear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechWeaponSpear()
	{
		if (!Z_Registration_Info_UClass_AMechWeaponSpear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechWeaponSpear.OuterSingleton, Z_Construct_UClass_AMechWeaponSpear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechWeaponSpear.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<AMechWeaponSpear>()
	{
		return AMechWeaponSpear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechWeaponSpear);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponSpear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponSpear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechWeaponSpear, AMechWeaponSpear::StaticClass, TEXT("AMechWeaponSpear"), &Z_Registration_Info_UClass_AMechWeaponSpear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechWeaponSpear), 1408124139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponSpear_h_338816913(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponSpear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeaponSpear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
