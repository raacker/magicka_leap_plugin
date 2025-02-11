// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapBone;
#ifdef LEAPMOTION_LeapFinger_generated_h
#error "LeapFinger.generated.h already included, missing '#pragma once' in LeapFinger.h"
#endif
#define LEAPMOTION_LeapFinger_generated_h

#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBone) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapBone**)Z_Param__Result=this->Bone(LeapBoneType(Z_Param_Type)); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBone) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapBone**)Z_Param__Result=this->Bone(LeapBoneType(Z_Param_Type)); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_19_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULeapFinger(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapFinger(); \
	public: \
	DECLARE_CLASS(ULeapFinger, ULeapPointable, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapFinger) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_19_INCLASS \
	private: \
	static void StaticRegisterNativesULeapFinger(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapFinger(); \
	public: \
	DECLARE_CLASS(ULeapFinger, ULeapPointable, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapFinger) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapFinger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapFinger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapFinger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapFinger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapFinger(ULeapFinger&&); \
	NO_API ULeapFinger(const ULeapFinger&); \
public:


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapFinger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapFinger(ULeapFinger&&); \
	NO_API ULeapFinger(const ULeapFinger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapFinger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapFinger); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapFinger)


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_16_PROLOG
#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_19_RPC_WRAPPERS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_19_INCLASS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapFinger."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFinger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
