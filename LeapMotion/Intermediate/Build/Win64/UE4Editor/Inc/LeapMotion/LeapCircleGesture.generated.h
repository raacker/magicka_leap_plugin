// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapPointable;
#ifdef LEAPMOTION_LeapCircleGesture_generated_h
#error "LeapCircleGesture.generated.h already included, missing '#pragma once' in LeapCircleGesture.h"
#endif
#define LEAPMOTION_LeapCircleGesture_generated_h

#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPointable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointable**)Z_Param__Result=this->Pointable(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPointable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointable**)Z_Param__Result=this->Pointable(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_18_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULeapCircleGesture(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapCircleGesture(); \
	public: \
	DECLARE_CLASS(ULeapCircleGesture, ULeapGesture, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapCircleGesture) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_18_INCLASS \
	private: \
	static void StaticRegisterNativesULeapCircleGesture(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapCircleGesture(); \
	public: \
	DECLARE_CLASS(ULeapCircleGesture, ULeapGesture, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapCircleGesture) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapCircleGesture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapCircleGesture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapCircleGesture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapCircleGesture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapCircleGesture(ULeapCircleGesture&&); \
	NO_API ULeapCircleGesture(const ULeapCircleGesture&); \
public:


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapCircleGesture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapCircleGesture(ULeapCircleGesture&&); \
	NO_API ULeapCircleGesture(const ULeapCircleGesture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapCircleGesture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapCircleGesture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapCircleGesture)


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PPointable() { return STRUCT_OFFSET(ULeapCircleGesture, PPointable); }


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_15_PROLOG
#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_18_RPC_WRAPPERS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_18_INCLASS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapCircleGesture."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapCircleGesture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
