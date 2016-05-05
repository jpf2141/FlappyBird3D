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
// Vuforia.EyewearDevice
struct EyewearDevice_t_1667579282_0;

#include "Vuforia_UnityExtensions_Vuforia_BaseCameraConfigu_1448557560.h"

// Vuforia.DedicatedEyewearCameraConfiguration
struct  DedicatedEyewearCameraConfiguration_t422674584_0  : public BaseCameraConfiguration_t_1448557560_0
{
	// UnityEngine.Camera Vuforia.DedicatedEyewearCameraConfiguration::mPrimaryCamera
	Camera_t814710830_0 * ___mPrimaryCamera_12;
	// UnityEngine.Camera Vuforia.DedicatedEyewearCameraConfiguration::mSecondaryCamera
	Camera_t814710830_0 * ___mSecondaryCamera_13;
	// System.Int32 Vuforia.DedicatedEyewearCameraConfiguration::mScreenWidth
	int32_t ___mScreenWidth_14;
	// System.Int32 Vuforia.DedicatedEyewearCameraConfiguration::mScreenHeight
	int32_t ___mScreenHeight_15;
	// System.Boolean Vuforia.DedicatedEyewearCameraConfiguration::mNeedToCheckStereo
	bool ___mNeedToCheckStereo_16;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mLastAppliedNearClipPlane
	float ___mLastAppliedNearClipPlane_17;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mLastAppliedFarClipPlane
	float ___mLastAppliedFarClipPlane_18;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mLastAppliedVirtualFoV
	float ___mLastAppliedVirtualFoV_19;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mNewNearClipPlane
	float ___mNewNearClipPlane_20;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mNewFarClipPlane
	float ___mNewFarClipPlane_21;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mNewVirtualFoV
	float ___mNewVirtualFoV_22;
	// Vuforia.EyewearDevice Vuforia.DedicatedEyewearCameraConfiguration::mEyewearDevice
	EyewearDevice_t_1667579282_0 * ___mEyewearDevice_23;
};
