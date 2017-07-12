// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapPointable;
class ULeapPointableList;
class ULeapToolList;
class ULeapFingerList;
#ifdef LEAPMOTION_LeapPointableList_generated_h
#error "LeapPointableList.generated.h already included, missing '#pragma once' in LeapPointableList.h"
#endif
#define LEAPMOTION_LeapPointableList_generated_h

#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRightmost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointable**)Z_Param__Result=this->Rightmost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointableByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointable**)Z_Param__Result=this->GetPointableByIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeftmost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointable**)Z_Param__Result=this->Leftmost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFrontmost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointable**)Z_Param__Result=this->Frontmost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExtended) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointableList**)Z_Param__Result=this->Extended(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAppendTools) \
	{ \
		P_GET_OBJECT(ULeapToolList,Z_Param_List); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointableList**)Z_Param__Result=this->AppendTools(Z_Param_List); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAppendFingers) \
	{ \
		P_GET_OBJECT(ULeapFingerList,Z_Param_List); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointableList**)Z_Param__Result=this->AppendFingers(Z_Param_List); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAppend) \
	{ \
		P_GET_OBJECT(ULeapPointableList,Z_Param_List); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointableList**)Z_Param__Result=this->Append(Z_Param_List); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRightmost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointable**)Z_Param__Result=this->Rightmost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointableByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointable**)Z_Param__Result=this->GetPointableByIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLeftmost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointable**)Z_Param__Result=this->Leftmost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFrontmost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointable**)Z_Param__Result=this->Frontmost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExtended) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointableList**)Z_Param__Result=this->Extended(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAppendTools) \
	{ \
		P_GET_OBJECT(ULeapToolList,Z_Param_List); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointableList**)Z_Param__Result=this->AppendTools(Z_Param_List); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAppendFingers) \
	{ \
		P_GET_OBJECT(ULeapFingerList,Z_Param_List); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointableList**)Z_Param__Result=this->AppendFingers(Z_Param_List); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAppend) \
	{ \
		P_GET_OBJECT(ULeapPointableList,Z_Param_List); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapPointableList**)Z_Param__Result=this->Append(Z_Param_List); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_15_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULeapPointableList(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapPointableList(); \
	public: \
	DECLARE_CLASS(ULeapPointableList, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapPointableList) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_15_INCLASS \
	private: \
	static void StaticRegisterNativesULeapPointableList(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapPointableList(); \
	public: \
	DECLARE_CLASS(ULeapPointableList, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapPointableList) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapPointableList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapPointableList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapPointableList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapPointableList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapPointableList(ULeapPointableList&&); \
	NO_API ULeapPointableList(const ULeapPointableList&); \
public:


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapPointableList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapPointableList(ULeapPointableList&&); \
	NO_API ULeapPointableList(const ULeapPointableList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapPointableList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapPointableList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapPointableList)


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PLeftmost() { return STRUCT_OFFSET(ULeapPointableList, PLeftmost); } \
	FORCEINLINE static uint32 __PPO__PRightmost() { return STRUCT_OFFSET(ULeapPointableList, PRightmost); } \
	FORCEINLINE static uint32 __PPO__PFrontmost() { return STRUCT_OFFSET(ULeapPointableList, PFrontmost); } \
	FORCEINLINE static uint32 __PPO__PPointableByIndex() { return STRUCT_OFFSET(ULeapPointableList, PPointableByIndex); } \
	FORCEINLINE static uint32 __PPO__PAppendedList() { return STRUCT_OFFSET(ULeapPointableList, PAppendedList); } \
	FORCEINLINE static uint32 __PPO__PExtendedList() { return STRUCT_OFFSET(ULeapPointableList, PExtendedList); }


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_12_PROLOG
#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_15_RPC_WRAPPERS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_15_INCLASS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapPointableList."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapPointableList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
