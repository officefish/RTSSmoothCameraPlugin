// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
#ifdef RTSSMOOTHCAMERA_RTSSmoothCameraComponent_generated_h
#error "RTSSmoothCameraComponent.generated.h already included, missing '#pragma once' in RTSSmoothCameraComponent.h"
#endif
#define RTSSMOOTHCAMERA_RTSSmoothCameraComponent_generated_h

#define MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_SPARSE_DATA
#define MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWorldSize); \
	DECLARE_FUNCTION(execPitchCamera); \
	DECLARE_FUNCTION(execPanCamera); \
	DECLARE_FUNCTION(execZoomCamera); \
	DECLARE_FUNCTION(execRotateCameraReleased); \
	DECLARE_FUNCTION(execRotateCameraPressed); \
	DECLARE_FUNCTION(execMoveCameraLeftRightPerUnit); \
	DECLARE_FUNCTION(execMoveCameraUpDownPerUnit); \
	DECLARE_FUNCTION(execMoveCameraUpDown); \
	DECLARE_FUNCTION(execMoveCameraLeftRight);


#define MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWorldSize); \
	DECLARE_FUNCTION(execPitchCamera); \
	DECLARE_FUNCTION(execPanCamera); \
	DECLARE_FUNCTION(execZoomCamera); \
	DECLARE_FUNCTION(execRotateCameraReleased); \
	DECLARE_FUNCTION(execRotateCameraPressed); \
	DECLARE_FUNCTION(execMoveCameraLeftRightPerUnit); \
	DECLARE_FUNCTION(execMoveCameraUpDownPerUnit); \
	DECLARE_FUNCTION(execMoveCameraUpDown); \
	DECLARE_FUNCTION(execMoveCameraLeftRight);


#define MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTSSmoothCameraComponent(); \
	friend struct Z_Construct_UClass_URTSSmoothCameraComponent_Statics; \
public: \
	DECLARE_CLASS(URTSSmoothCameraComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTSSmoothCamera"), NO_API) \
	DECLARE_SERIALIZER(URTSSmoothCameraComponent)


#define MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURTSSmoothCameraComponent(); \
	friend struct Z_Construct_UClass_URTSSmoothCameraComponent_Statics; \
public: \
	DECLARE_CLASS(URTSSmoothCameraComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTSSmoothCamera"), NO_API) \
	DECLARE_SERIALIZER(URTSSmoothCameraComponent)


#define MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URTSSmoothCameraComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTSSmoothCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSSmoothCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSSmoothCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URTSSmoothCameraComponent(URTSSmoothCameraComponent&&); \
	NO_API URTSSmoothCameraComponent(const URTSSmoothCameraComponent&); \
public:


#define MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URTSSmoothCameraComponent(URTSSmoothCameraComponent&&); \
	NO_API URTSSmoothCameraComponent(const URTSSmoothCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTSSmoothCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTSSmoothCameraComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URTSSmoothCameraComponent)


#define MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(URTSSmoothCameraComponent, Camera); } \
	FORCEINLINE static uint32 __PPO__CameraSpringArm() { return STRUCT_OFFSET(URTSSmoothCameraComponent, CameraSpringArm); } \
	FORCEINLINE static uint32 __PPO__CameraSpeed() { return STRUCT_OFFSET(URTSSmoothCameraComponent, CameraSpeed); } \
	FORCEINLINE static uint32 __PPO__CameraPanPerUnit() { return STRUCT_OFFSET(URTSSmoothCameraComponent, CameraPanPerUnit); } \
	FORCEINLINE static uint32 __PPO__CameraPitchPerUnit() { return STRUCT_OFFSET(URTSSmoothCameraComponent, CameraPitchPerUnit); } \
	FORCEINLINE static uint32 __PPO__CameraZoomSpeed() { return STRUCT_OFFSET(URTSSmoothCameraComponent, CameraZoomSpeed); } \
	FORCEINLINE static uint32 __PPO__CameraZoomPerUnit() { return STRUCT_OFFSET(URTSSmoothCameraComponent, CameraZoomPerUnit); } \
	FORCEINLINE static uint32 __PPO__CameraMaximumPitch() { return STRUCT_OFFSET(URTSSmoothCameraComponent, CameraMaximumPitch); } \
	FORCEINLINE static uint32 __PPO__CameraMinimumPitch() { return STRUCT_OFFSET(URTSSmoothCameraComponent, CameraMinimumPitch); } \
	FORCEINLINE static uint32 __PPO__MinCameraDistance() { return STRUCT_OFFSET(URTSSmoothCameraComponent, MinCameraDistance); } \
	FORCEINLINE static uint32 __PPO__MaxCameraDistance() { return STRUCT_OFFSET(URTSSmoothCameraComponent, MaxCameraDistance); } \
	FORCEINLINE static uint32 __PPO__bCheckBoundsWithWorldSize() { return STRUCT_OFFSET(URTSSmoothCameraComponent, bCheckBoundsWithWorldSize); }


#define MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_14_PROLOG
#define MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_SPARSE_DATA \
	MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_RPC_WRAPPERS \
	MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_INCLASS \
	MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_SPARSE_DATA \
	MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTSSMOOTHCAMERA_API UClass* StaticClass<class URTSSmoothCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_RTSSmoothCamera_Source_RTSSmoothCamera_Public_RTSSmoothCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
