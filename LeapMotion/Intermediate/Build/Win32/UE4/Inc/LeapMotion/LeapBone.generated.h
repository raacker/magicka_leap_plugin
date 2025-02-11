// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapBone;
struct FRotator;
#ifdef LEAPMOTION_LeapBone_generated_h
#error "LeapBone.generated.h already included, missing '#pragma once' in LeapBone.h"
#endif
#define LEAPMOTION_LeapBone_generated_h

#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEqual) \
	{ \
		P_GET_OBJECT(ULeapBone,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Equal(Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDifferent) \
	{ \
		P_GET_OBJECT(ULeapBone,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Different(Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOrientation) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_handType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetOrientation(LeapHandType(Z_Param_handType)); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEqual) \
	{ \
		P_GET_OBJECT(ULeapBone,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Equal(Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDifferent) \
	{ \
		P_GET_OBJECT(ULeapBone,Z_Param_other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Different(Z_Param_other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOrientation) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_handType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetOrientation(LeapHandType(Z_Param_handType)); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_18_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULeapBone(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapBone(); \
	public: \
	DECLARE_CLASS(ULeapBone, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapBone) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_18_INCLASS \
	private: \
	static void StaticRegisterNativesULeapBone(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapBone(); \
	public: \
	DECLARE_CLASS(ULeapBone, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapBone) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapBone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapBone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapBone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapBone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapBone(ULeapBone&&); \
	NO_API ULeapBone(const ULeapBone&); \
public:


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapBone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapBone(ULeapBone&&); \
	NO_API ULeapBone(const ULeapBone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapBone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapBone); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapBone)


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_15_PROLOG
#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_18_RPC_WRAPPERS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_18_INCLASS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapBone."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapBone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
