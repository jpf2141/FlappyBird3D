#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Vuforia.WebCamImpl
struct WebCamImpl_t_1429766445_0;
// UnityEngine.Camera
struct Camera_t814710830_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// Vuforia.WebCamAbstractBehaviour
struct  WebCamAbstractBehaviour_t1328164072_0  : public MonoBehaviour_t_92453903_0
{
	// System.Int32 Vuforia.WebCamAbstractBehaviour::RenderTextureLayer
	int32_t ___RenderTextureLayer_2;
	// System.String Vuforia.WebCamAbstractBehaviour::mDeviceNameSetInEditor
	String_t* ___mDeviceNameSetInEditor_3;
	// System.Boolean Vuforia.WebCamAbstractBehaviour::mFlipHorizontally
	bool ___mFlipHorizontally_4;
	// System.Boolean Vuforia.WebCamAbstractBehaviour::mTurnOffWebCam
	bool ___mTurnOffWebCam_5;
	// Vuforia.WebCamImpl Vuforia.WebCamAbstractBehaviour::mWebCamImpl
	WebCamImpl_t_1429766445_0 * ___mWebCamImpl_6;
	// UnityEngine.Camera Vuforia.WebCamAbstractBehaviour::mBackgroundCameraInstance
	Camera_t814710830_0 * ___mBackgroundCameraInstance_7;
};
