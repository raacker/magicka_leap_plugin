// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapFrame;
struct FVector;
struct FMatrix;
class ULeapFingerList;
#ifdef LEAPMOTION_LeapHand_generated_h
#error "LeapHand.generated.h already included, missing '#pragma once' in LeapHand.h"
#endif
#define LEAPMOTION_LeapHand_generated_h

#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTranslationProbability) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->TranslationProbability(Z_Param_OtherFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTranslation) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->Translation(Z_Param_OtherFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScaleProbability) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->ScaleProbability(Z_Param_OtherFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScaleFactor) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->ScaleFactor(Z_Param_OtherFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotationProbability) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->RotationProbability(Z_Param_OtherFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotationMatrix) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMatrix*)Z_Param__Result=this->RotationMatrix(Z_Param_OtherFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotationAxis) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->RotationAxis(Z_Param_OtherFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotationAngleWithAxis) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->RotationAngleWithAxis(Z_Param_OtherFrame,Z_Param_Out_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotationAngle) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->RotationAngle(Z_Param_OtherFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFrame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFrame**)Z_Param__Result=this->Frame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFingers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFingerList**)Z_Param__Result=this->Fingers(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTranslationProbability) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->TranslationProbability(Z_Param_OtherFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTranslation) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->Translation(Z_Param_OtherFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScaleProbability) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->ScaleProbability(Z_Param_OtherFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScaleFactor) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->ScaleFactor(Z_Param_OtherFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotationProbability) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->RotationProbability(Z_Param_OtherFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotationMatrix) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMatrix*)Z_Param__Result=this->RotationMatrix(Z_Param_OtherFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotationAxis) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->RotationAxis(Z_Param_OtherFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotationAngleWithAxis) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->RotationAngleWithAxis(Z_Param_OtherFrame,Z_Param_Out_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotationAngle) \
	{ \
		P_GET_OBJECT(ULeapFrame,Z_Param_OtherFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->RotationAngle(Z_Param_OtherFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFrame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFrame**)Z_Param__Result=this->Frame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFingers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULeapFingerList**)Z_Param__Result=this->Fingers(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_19_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULeapHand(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapHand(); \
	public: \
	DECLARE_CLASS(ULeapHand, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapHand) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_19_INCLASS \
	private: \
	static void StaticRegisterNativesULeapHand(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapHand(); \
	public: \
	DECLARE_CLASS(ULeapHand, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/LeapMotion"), NO_API) \
	DECLARE_SERIALIZER(ULeapHand) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapHand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapHand) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapHand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapHand); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapHand(ULeapHand&&); \
	NO_API ULeapHand(const ULeapHand&); \
public:


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapHand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeapHand(ULeapHand&&); \
	NO_API ULeapHand(const ULeapHand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapHand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapHand); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapHand)


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PFrame() { return STRUCT_OFFSET(ULeapHand, PFrame); } \
	FORCEINLINE static uint32 __PPO__PFingers() { return STRUCT_OFFSET(ULeapHand, PFingers); }


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_16_PROLOG
#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_19_RPC_WRAPPERS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_19_INCLASS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapHand."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_LeapMotion_Source_LeapMotion_Public_LeapHand_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
