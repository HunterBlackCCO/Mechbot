// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MECHBOT_MechPaperDroid_generated_h
#error "MechPaperDroid.generated.h already included, missing '#pragma once' in MechPaperDroid.h"
#endif
#define MECHBOT_MechPaperDroid_generated_h

#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_10_DELEGATE \
struct _Script_Mechbot_eventOnHealthUpdated_Parms \
{ \
	float NewPercent; \
}; \
static inline void FOnHealthUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnHealthUpdated, float NewPercent) \
{ \
	_Script_Mechbot_eventOnHealthUpdated_Parms Parms; \
	Parms.NewPercent=NewPercent; \
	OnHealthUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_11_DELEGATE \
static inline void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath) \
{ \
	OnDeath.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_19_SPARSE_DATA
#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetPercentHealth); \
	DECLARE_FUNCTION(execCanBeDamaged);


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetPercentHealth); \
	DECLARE_FUNCTION(execCanBeDamaged);


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMechPaperDroid(); \
	friend struct Z_Construct_UClass_AMechPaperDroid_Statics; \
public: \
	DECLARE_CLASS(AMechPaperDroid, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechbot"), NO_API) \
	DECLARE_SERIALIZER(AMechPaperDroid)


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAMechPaperDroid(); \
	friend struct Z_Construct_UClass_AMechPaperDroid_Statics; \
public: \
	DECLARE_CLASS(AMechPaperDroid, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechbot"), NO_API) \
	DECLARE_SERIALIZER(AMechPaperDroid)


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMechPaperDroid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMechPaperDroid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechPaperDroid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechPaperDroid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechPaperDroid(AMechPaperDroid&&); \
	NO_API AMechPaperDroid(const AMechPaperDroid&); \
public:


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechPaperDroid(AMechPaperDroid&&); \
	NO_API AMechPaperDroid(const AMechPaperDroid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechPaperDroid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechPaperDroid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMechPaperDroid)


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_16_PROLOG
#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_19_SPARSE_DATA \
	FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_19_RPC_WRAPPERS \
	FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_19_INCLASS \
	FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_19_SPARSE_DATA \
	FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_19_INCLASS_NO_PURE_DECLS \
	FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHBOT_API UClass* StaticClass<class AMechPaperDroid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperDroid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
