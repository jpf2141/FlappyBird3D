#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t814710830_0;
// Vuforia.HideExcessAreaAbstractBehaviour
struct HideExcessAreaAbstractBehaviour_t_1564941985_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"

// VRIntegrationHelper
struct  VRIntegrationHelper_t992970891_0  : public MonoBehaviour_t_92453903_0
{
	// System.Boolean VRIntegrationHelper::IsLeft
	bool ___IsLeft_12;
	// UnityEngine.Transform VRIntegrationHelper::TrackableParent
	Transform_t1584899523_0 * ___TrackableParent_13;
};
struct VRIntegrationHelper_t992970891_0_StaticFields{
	// UnityEngine.Matrix4x4 VRIntegrationHelper::mLeftCameraMatrixOriginal
	Matrix4x4_t1577636070_0  ___mLeftCameraMatrixOriginal_2;
	// UnityEngine.Matrix4x4 VRIntegrationHelper::mRightCameraMatrixOriginal
	Matrix4x4_t1577636070_0  ___mRightCameraMatrixOriginal_3;
	// UnityEngine.Camera VRIntegrationHelper::mLeftCamera
	Camera_t814710830_0 * ___mLeftCamera_4;
	// UnityEngine.Camera VRIntegrationHelper::mRightCamera
	Camera_t814710830_0 * ___mRightCamera_5;
	// Vuforia.HideExcessAreaAbstractBehaviour VRIntegrationHelper::mLeftExcessAreaBehaviour
	HideExcessAreaAbstractBehaviour_t_1564941985_0 * ___mLeftExcessAreaBehaviour_6;
	// Vuforia.HideExcessAreaAbstractBehaviour VRIntegrationHelper::mRightExcessAreaBehaviour
	HideExcessAreaAbstractBehaviour_t_1564941985_0 * ___mRightExcessAreaBehaviour_7;
	// UnityEngine.Rect VRIntegrationHelper::mLeftCameraPixelRect
	Rect_t_981940947_0  ___mLeftCameraPixelRect_8;
	// UnityEngine.Rect VRIntegrationHelper::mRightCameraPixelRect
	Rect_t_981940947_0  ___mRightCameraPixelRect_9;
	// System.Boolean VRIntegrationHelper::mLeftCameraDataAcquired
	bool ___mLeftCameraDataAcquired_10;
	// System.Boolean VRIntegrationHelper::mRightCameraDataAcquired
	bool ___mRightCameraDataAcquired_11;
};
