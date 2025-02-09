// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapPointableList;
class ULeapHandList;
class ULeapFrame;
#ifdef LEAPMOTION_LeapGesture_generated_h
#error "LeapGesture.generated.h already included, missing '#pragma once' in LeapGesture.h"
#endif
#define LEAPMOTION_LeapGesture_generated_h

#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPointables) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointableList**)Z_Param__Result=this->Pointables(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHands) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapHandList**)Z_Param__Result=this->Hands(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFrame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFrame**)Z_Param__Result=this->Frame(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPointables) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointableList**)Z_Param__Result=this->Pointables(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHands) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapHandList**)Z_Param__Result=this->Hands(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFrame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFrame**)Z_Param__Result=this->Frame(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_19_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULeapGesture(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapGesture(); \
	public: \
	DECLARE_CLASS(ULeapGesture, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapGesture) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_19_INCLASS \
	private: \
	static void StaticRegisterNativesULeapGesture(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapGesture(); \
	public: \
	DECLARE_CLASS(ULeapGesture, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapGesture) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapGesture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapGesture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapGesture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapGesture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapGesture(ULeapGesture&&); \
	NO_API ULeapGesture(const ULeapGesture&); \
public:


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapGesture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapGesture(ULeapGesture&&); \
	NO_API ULeapGesture(const ULeapGesture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapGesture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapGesture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapGesture)


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PFrame() { return STRUCT_OFFSET(ULeapGesture, PFrame); } \
	FORCEINLINE static uint32 __PPO__PHands() { return STRUCT_OFFSET(ULeapGesture, PHands); } \
	FORCEINLINE static uint32 __PPO__PPointables() { return STRUCT_OFFSET(ULeapGesture, PPointables); }


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_16_PROLOG
#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_19_RPC_WRAPPERS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_19_INCLASS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapGesture."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapGesture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
