// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMechWeapon;
class AMechTool;
#ifdef MECHBOT_MechPaperPlayer_generated_h
#error "MechPaperPlayer.generated.h already included, missing '#pragma once' in MechPaperPlayer.h"
#endif
#define MECHBOT_MechPaperPlayer_generated_h

#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_13_DELEGATE \
struct _Script_Mechbot_eventOnEnergyUpdated_Parms \
{ \
	float NewPercent; \
}; \
static inline void FOnEnergyUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnEnergyUpdated, float NewPercent) \
{ \
	_Script_Mechbot_eventOnEnergyUpdated_Parms Parms; \
	Parms.NewPercent=NewPercent; \
	OnEnergyUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_14_DELEGATE \
struct _Script_Mechbot_eventOnWeaponEquipped_Parms \
{ \
	AMechWeapon* EquippedWeapon; \
}; \
static inline void FOnWeaponEquipped_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponEquipped, AMechWeapon* EquippedWeapon) \
{ \
	_Script_Mechbot_eventOnWeaponEquipped_Parms Parms; \
	Parms.EquippedWeapon=EquippedWeapon; \
	OnWeaponEquipped.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_15_DELEGATE \
struct _Script_Mechbot_eventOnWeaponAdded_Parms \
{ \
	AMechWeapon* NewWeapon; \
}; \
static inline void FOnWeaponAdded_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponAdded, AMechWeapon* NewWeapon) \
{ \
	_Script_Mechbot_eventOnWeaponAdded_Parms Parms; \
	Parms.NewWeapon=NewWeapon; \
	OnWeaponAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_16_DELEGATE \
struct _Script_Mechbot_eventOnToolEquipped_Parms \
{ \
	AMechTool* EquippedWeapon; \
}; \
static inline void FOnToolEquipped_DelegateWrapper(const FMulticastScriptDelegate& OnToolEquipped, AMechTool* EquippedWeapon) \
{ \
	_Script_Mechbot_eventOnToolEquipped_Parms Parms; \
	Parms.EquippedWeapon=EquippedWeapon; \
	OnToolEquipped.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_17_DELEGATE \
struct _Script_Mechbot_eventOnToolAdded_Parms \
{ \
	AMechTool* NewTool; \
}; \
static inline void FOnToolAdded_DelegateWrapper(const FMulticastScriptDelegate& OnToolAdded, AMechTool* NewTool) \
{ \
	_Script_Mechbot_eventOnToolAdded_Parms Parms; \
	Parms.NewTool=NewTool; \
	OnToolAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_18_DELEGATE \
static inline void FOnRevive_DelegateWrapper(const FMulticastScriptDelegate& OnRevive) \
{ \
	OnRevive.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_19_DELEGATE \
static inline void FOnLoad_DelegateWrapper(const FMulticastScriptDelegate& OnLoad) \
{ \
	OnLoad.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_27_SPARSE_DATA
#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveOnWin); \
	DECLARE_FUNCTION(execActivateEquippedWeaponSpecial); \
	DECLARE_FUNCTION(execActivateEquippedWeaponMain); \
	DECLARE_FUNCTION(execSwapEquippedWeapon); \
	DECLARE_FUNCTION(execAddWeapon); \
	DECLARE_FUNCTION(execRegainEnergy); \
	DECLARE_FUNCTION(execGetPercentEnergy); \
	DECLARE_FUNCTION(execHasAnyWeapons); \
	DECLARE_FUNCTION(execGetEquippedWeaponSlot); \
	DECLARE_FUNCTION(execGetEquippedWeaponCooldown); \
	DECLARE_FUNCTION(execGetEquippedWeapon); \
	DECLARE_FUNCTION(execGetObtainedWeapons);


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveOnWin); \
	DECLARE_FUNCTION(execActivateEquippedWeaponSpecial); \
	DECLARE_FUNCTION(execActivateEquippedWeaponMain); \
	DECLARE_FUNCTION(execSwapEquippedWeapon); \
	DECLARE_FUNCTION(execAddWeapon); \
	DECLARE_FUNCTION(execRegainEnergy); \
	DECLARE_FUNCTION(execGetPercentEnergy); \
	DECLARE_FUNCTION(execHasAnyWeapons); \
	DECLARE_FUNCTION(execGetEquippedWeaponSlot); \
	DECLARE_FUNCTION(execGetEquippedWeaponCooldown); \
	DECLARE_FUNCTION(execGetEquippedWeapon); \
	DECLARE_FUNCTION(execGetObtainedWeapons);


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMechPaperPlayer(); \
	friend struct Z_Construct_UClass_AMechPaperPlayer_Statics; \
public: \
	DECLARE_CLASS(AMechPaperPlayer, AMechPaperDroid, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechbot"), NO_API) \
	DECLARE_SERIALIZER(AMechPaperPlayer)


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAMechPaperPlayer(); \
	friend struct Z_Construct_UClass_AMechPaperPlayer_Statics; \
public: \
	DECLARE_CLASS(AMechPaperPlayer, AMechPaperDroid, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mechbot"), NO_API) \
	DECLARE_SERIALIZER(AMechPaperPlayer)


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMechPaperPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMechPaperPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechPaperPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechPaperPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechPaperPlayer(AMechPaperPlayer&&); \
	NO_API AMechPaperPlayer(const AMechPaperPlayer&); \
public:


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechPaperPlayer(AMechPaperPlayer&&); \
	NO_API AMechPaperPlayer(const AMechPaperPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechPaperPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechPaperPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMechPaperPlayer)


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_24_PROLOG
#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_27_SPARSE_DATA \
	FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_27_RPC_WRAPPERS \
	FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_27_INCLASS \
	FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_27_SPARSE_DATA \
	FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_27_INCLASS_NO_PURE_DECLS \
	FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHBOT_API UClass* StaticClass<class AMechPaperPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Mechbot_Source_Mechbot_Public_Droids_MechPaperPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
