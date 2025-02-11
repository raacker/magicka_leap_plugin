// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapHand;
struct FRotator;
struct FVector;
#ifdef LEAPMOTION_AnimHand_generated_h
#error "AnimHand.generated.h already included, missing '#pragma once' in AnimHand.h"
#endif
#define LEAPMOTION_AnimHand_generated_h

#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFromLeapHand) \
	{ \
		P_GET_OBJECT(ULeapHand,Z_Param_LeapHand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFromLeapHand(Z_Param_LeapHand); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeBasis) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_PreBase); \
		P_GET_STRUCT(FRotator,Z_Param_PostBase); \
		P_GET_UBOOL(Z_Param_AdjustVectors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeBasis(Z_Param_PreBase,Z_Param_PostBase,Z_Param_AdjustVectors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTranslateHand) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Shift); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TranslateHand(Z_Param_Shift); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEnabled(Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Enabled(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFromLeapHand) \
	{ \
		P_GET_OBJECT(ULeapHand,Z_Param_LeapHand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFromLeapHand(Z_Param_LeapHand); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeBasis) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_PreBase); \
		P_GET_STRUCT(FRotator,Z_Param_PostBase); \
		P_GET_UBOOL(Z_Param_AdjustVectors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeBasis(Z_Param_PreBase,Z_Param_PostBase,Z_Param_AdjustVectors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTranslateHand) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Shift); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TranslateHand(Z_Param_Shift); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEnabled(Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Enabled(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_12_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAnimHand(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_UAnimHand(); \
	public: \
	DECLARE_CLASS(UAnimHand, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(UAnimHand) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_12_INCLASS \
	private: \
	static void StaticRegisterNativesUAnimHand(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_UAnimHand(); \
	public: \
	DECLARE_CLASS(UAnimHand, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(UAnimHand) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimHand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimHand) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimHand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimHand); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimHand(UAnimHand&&); \
	NO_API UAnimHand(const UAnimHand&); \
public:


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimHand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimHand(UAnimHand&&); \
	NO_API UAnimHand(const UAnimHand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimHand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimHand); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimHand)


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_12_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_9_PROLOG
#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_12_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_12_RPC_WRAPPERS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_12_INCLASS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_12_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_12_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimHand."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_AnimBody_AnimHand_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
