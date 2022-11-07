// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/Utilities/Tools/MechTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechTool() {}
// Cross Module References
	MECHBOT_API UClass* Z_Construct_UClass_AMechTool_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechTool();
	MECHBOT_API UClass* Z_Construct_UClass_AMechUtility();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
// End Cross Module References
	void AMechTool::StaticRegisterNativesAMechTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechTool);
	UClass* Z_Construct_UClass_AMechTool_NoRegister()
	{
		return AMechTool::StaticClass();
	}
	struct Z_Construct_UClass_AMechTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownTimer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMechUtility,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Utilities/Tools/MechTool.h" },
		{ "ModuleRelativePath", "Public/Utilities/Tools/MechTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechTool_Statics::NewProp_CooldownTimer_MetaData[] = {
		{ "Category", "MechTool" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Utilities/Tools/MechTool.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMechTool_Statics::NewProp_CooldownTimer = { "CooldownTimer", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechTool, CooldownTimer), METADATA_PARAMS(Z_Construct_UClass_AMechTool_Statics::NewProp_CooldownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechTool_Statics::NewProp_CooldownTimer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMechTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechTool_Statics::NewProp_CooldownTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechTool_Statics::ClassParams = {
		&AMechTool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMechTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMechTool_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMechTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechTool()
	{
		if (!Z_Registration_Info_UClass_AMechTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechTool.OuterSingleton, Z_Construct_UClass_AMechTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechTool.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<AMechTool>()
	{
		return AMechTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechTool);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechTool, AMechTool::StaticClass, TEXT("AMechTool"), &Z_Registration_Info_UClass_AMechTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechTool), 1039618957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechTool_h_1014359334(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Utilities_Tools_MechTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
