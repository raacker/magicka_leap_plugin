// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapFinger;
class ULeapFingerList;
#ifdef LEAPMOTION_LeapFingerList_generated_h
#error "LeapFingerList.generated.h already included, missing '#pragma once' in LeapFingerList.h"
#endif
#define LEAPMOTION_LeapFingerList_generated_h

#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRightmost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFinger**)Z_Param__Result=this->Rightmost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointableById) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFinger**)Z_Param__Result=this->GetPointableById(Z_Param_Id); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeftmost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFinger**)Z_Param__Result=this->Leftmost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFrontmost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFinger**)Z_Param__Result=this->Frontmost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExtended) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFingerList**)Z_Param__Result=this->Extended(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAppend) \
	{ \
		P_GET_OBJECT(ULeapFingerList,Z_Param_List); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFingerList**)Z_Param__Result=this->Append(Z_Param_List); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRightmost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFinger**)Z_Param__Result=this->Rightmost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointableById) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFinger**)Z_Param__Result=this->GetPointableById(Z_Param_Id); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeftmost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFinger**)Z_Param__Result=this->Leftmost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFrontmost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFinger**)Z_Param__Result=this->Frontmost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExtended) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFingerList**)Z_Param__Result=this->Extended(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAppend) \
	{ \
		P_GET_OBJECT(ULeapFingerList,Z_Param_List); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFingerList**)Z_Param__Result=this->Append(Z_Param_List); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_15_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULeapFingerList(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapFingerList(); \
	public: \
	DECLARE_CLASS(ULeapFingerList, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapFingerList) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_15_INCLASS \
	private: \
	static void StaticRegisterNativesULeapFingerList(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapFingerList(); \
	public: \
	DECLARE_CLASS(ULeapFingerList, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapFingerList) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapFingerList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapFingerList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapFingerList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapFingerList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapFingerList(ULeapFingerList&&); \
	NO_API ULeapFingerList(const ULeapFingerList&); \
public:


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapFingerList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapFingerList(ULeapFingerList&&); \
	NO_API ULeapFingerList(const ULeapFingerList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapFingerList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapFingerList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapFingerList)


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PFrontmost() { return STRUCT_OFFSET(ULeapFingerList, PFrontmost); } \
	FORCEINLINE static uint32 __PPO__PLeftmost() { return STRUCT_OFFSET(ULeapFingerList, PLeftmost); } \
	FORCEINLINE static uint32 __PPO__PRightmost() { return STRUCT_OFFSET(ULeapFingerList, PRightmost); } \
	FORCEINLINE static uint32 __PPO__PPointableById() { return STRUCT_OFFSET(ULeapFingerList, PPointableById); } \
	FORCEINLINE static uint32 __PPO__PAppendedList() { return STRUCT_OFFSET(ULeapFingerList, PAppendedList); } \
	FORCEINLINE static uint32 __PPO__PExtendedList() { return STRUCT_OFFSET(ULeapFingerList, PExtendedList); }


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_12_PROLOG
#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_15_RPC_WRAPPERS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_15_INCLASS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapFingerList."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapFingerList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
