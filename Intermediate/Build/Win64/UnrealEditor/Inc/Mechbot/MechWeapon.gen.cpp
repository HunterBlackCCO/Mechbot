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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainBullet_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MainBullet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialBullet_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpecialBullet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechWeapon_Statics::NewProp_MainBullet_MetaData[] = {
		{ "Category", "MechWeapon" },
		{ "Comment", "// Object Configuration Settings\n" },
		{ "ModuleRelativePath", "Public/Utilities/Weapons/MechWeapon.h" },
		{ "ToolTip", "Object Configuration Settings" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMechWeapon_Statics::NewProp_MainBullet = { "MainBullet", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechWeapon, MainBullet), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMechWeapon_Statics::NewProp_MainBullet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechWeapon_Statics::NewProp_MainBullet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechWeapon_Statics::NewProp_SpecialBullet_MetaData[] = {
		{ "Category", "MechWeapon" },
		{ "ModuleRelativePath", "Public/Utilities/Weapons/MechWeapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMechWeapon_Statics::NewProp_SpecialBullet = { "SpecialBullet", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechWeapon, SpecialBullet), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMechWeapon_Statics::NewProp_SpecialBullet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechWeapon_Statics::NewProp_SpecialBullet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMechWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechWeapon_Statics::NewProp_MainBullet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechWeapon_Statics::NewProp_SpecialBullet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechWeapon_Statics::ClassParams = {
		&AMechWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMechWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMechWeapon_Statics::PropPointers),
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
		{ Z_Construct_UClass_AMechWeapon, AMechWeapon::StaticClass, TEXT("AMechWeapon"), &Z_Registration_Info_UClass_AMechWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechWeapon), 1165232147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeapon_h_318739786(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Weapons_MechWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
