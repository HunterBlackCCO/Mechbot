// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechbot/Public/Droids/MechPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechPlayer() {}
// Cross Module References
	MECHBOT_API UClass* Z_Construct_UClass_AMechPlayer_NoRegister();
	MECHBOT_API UClass* Z_Construct_UClass_AMechPlayer();
	MECHBOT_API UClass* Z_Construct_UClass_AMechDroid();
	UPackage* Z_Construct_UPackage__Script_Mechbot();
// End Cross Module References
	void AMechPlayer::StaticRegisterNativesAMechPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMechPlayer);
	UClass* Z_Construct_UClass_AMechPlayer_NoRegister()
	{
		return AMechPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AMechPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMechDroid,
		(UObject* (*)())Z_Construct_UPackage__Script_Mechbot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Droids/MechPlayer.h" },
		{ "ModuleRelativePath", "Public/Droids/MechPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMechPlayer_Statics::ClassParams = {
		&AMechPlayer::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AMechPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechPlayer()
	{
		if (!Z_Registration_Info_UClass_AMechPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMechPlayer.OuterSingleton, Z_Construct_UClass_AMechPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMechPlayer.OuterSingleton;
	}
	template<> MECHBOT_API UClass* StaticClass<AMechPlayer>()
	{
		return AMechPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechPlayer);
	struct Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMechPlayer, AMechPlayer::StaticClass, TEXT("AMechPlayer"), &Z_Registration_Info_UClass_AMechPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMechPlayer), 2080491071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPlayer_h_3627717336(TEXT("/Script/Mechbot"),
		Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mechbot_Source_Mechbot_Public_Droids_MechPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
