// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MECHBOT_MechUtility_generated_h
#error "MechUtility.generated.h already included, missing '#pragma once' in MechUtility.h"
#endif
#define MECHBOT_MechUtility_generated_h

#define FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_14_SPARSE_DATA
#define FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivateSpecialAbility); \
	DECLARE_FUNCTION(execActivateMainAbility); \
	DECLARE_FUNCTION(execGiveToPlayer); \
	DECLARE_FUNCTION(execGetCooldownTimer); \
	DECLARE_FUNCTION(execGetSpecialEnergyCost); \
	DECLARE_FUNCTION(execCanUseSpecialAbility);


#define FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateSpecialAbility); \
	DECLARE_FUNCTION(execActivateMainAbility); \
	DECLARE_FUNCTION(execGiveToPlayer); \
	DECLARE_FUNCTION(execGetCooldownTimer); \
	DECLARE_FUNCTION(execGetSpecialEnergyCost); \
	DECLARE_FUNCTION(execCanUseSpecialAbility);


#define FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMechUtility(); \
	friend struct Z_Construct_UClass_AMechUtility_Statics; \
public: \
	DECLARE_CLASS(AMechUtility, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechbot"), NO_API) \
	DECLARE_SERIALIZER(AMechUtility)


#define FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMechUtility(); \
	friend struct Z_Construct_UClass_AMechUtility_Statics; \
public: \
	DECLARE_CLASS(AMechUtility, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechbot"), NO_API) \
	DECLARE_SERIALIZER(AMechUtility)


#define FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMechUtility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMechUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechUtility(AMechUtility&&); \
	NO_API AMechUtility(const AMechUtility&); \
public:


#define FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechUtility(AMechUtility&&); \
	NO_API AMechUtility(const AMechUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMechUtility)


#define FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_11_PROLOG
#define FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_14_SPARSE_DATA \
	FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_14_RPC_WRAPPERS \
	FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_14_INCLASS \
	FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_14_SPARSE_DATA \
	FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_14_INCLASS_NO_PURE_DECLS \
	FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHBOT_API UClass* StaticClass<class AMechUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Mechbot_Source_Mechbot_Public_Utilities_MechUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
