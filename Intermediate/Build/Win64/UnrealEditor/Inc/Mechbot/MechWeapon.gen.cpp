// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/Utilities/Weapons/MechWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechWeapon() {}
// Cross Module References
	MECHBOT_API UClass* Z_Construct_UClass_AMechWeapon_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechWeapon();
	MECHBOT_API UClass* Z_Construct_UClass_AMechUtility();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
// End Cross Module References
	void AMechWeapon::StaticRegisterNativesAMechWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechWeapon);
	UClass* Z_Construct_UClass_AMechWeapon_NoRegister()
	{
		return AMechWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AMechWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMechUtility,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Utilities/Weapons/MechWeapon.h" },
		{ "ModuleRelativePath", "Public/Utilities/Weapons/MechWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechWeapon_Statics::ClassParams = {
		&AMechWeapon::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMechWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechWeapon()
	{
		if (!Z_Registration_Info_UClass_AMechWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechWeapon.OuterSingleton, Z_Construct_UClass_AMechWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechWeapon.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<AMechWeapon>()
	{
		return AMechWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechWeapon);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechWeapon, AMechWeapon::StaticClass, TEXT("AMechWeapon"), &Z_Registration_Info_UClass_AMechWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechWeapon), 445658304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeapon_h_1812005487(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
