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

#include "Vuforia_UnityExtensions_Vuforia_BaseCameraConfigu_1448557560.h"

// Vuforia.BaseStereoViewerCameraConfiguration
struct  BaseStereoViewerCameraConfiguration_t_137772802_0  : public BaseCameraConfiguration_t_1448557560_0
{
	// UnityEngine.Camera Vuforia.BaseStereoViewerCameraConfiguration::mPrimaryCamera
	Camera_t814710830_0 * ___mPrimaryCamera_11;
	// UnityEngine.Camera Vuforia.BaseStereoViewerCameraConfiguration::mSecondaryCamera
	Camera_t814710830_0 * ___mSecondaryCamera_12;
	// System.Boolean Vuforia.BaseStereoViewerCameraConfiguration::mSkewFrustum
	bool ___mSkewFrustum_13;
	// System.Int32 Vuforia.BaseStereoViewerCameraConfiguration::mScreenWidth
	int32_t ___mScreenWidth_14;
	// System.Int32 Vuforia.BaseStereoViewerCameraConfiguration::mScreenHeight
	int32_t ___mScreenHeight_15;
};
