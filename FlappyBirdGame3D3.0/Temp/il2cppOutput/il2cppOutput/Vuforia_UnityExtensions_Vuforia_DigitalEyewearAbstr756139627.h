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
// UnityEngine.Transform
struct Transform_t1584899523_0;
// Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters
struct SerializableViewerParameters_t1012358655_0;
// UnityEngine.Camera
struct Camera_t814710830_0;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t_1261093167_0;
// Vuforia.DistortionRenderingBehaviour
struct DistortionRenderingBehaviour_t1001845574_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "Vuforia_UnityExtensions_Vuforia_DistortionRenderin_105534086.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearAbst2026510022.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearAbs_1324354270.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"

// Vuforia.DigitalEyewearAbstractBehaviour
struct  DigitalEyewearAbstractBehaviour_t756139627_0  : public MonoBehaviour_t_92453903_0
{
	// System.Single Vuforia.DigitalEyewearAbstractBehaviour::mCameraOffset
	float ___mCameraOffset_8;
	// UnityEngine.Transform Vuforia.DigitalEyewearAbstractBehaviour::mCentralAnchorPoint
	Transform_t1584899523_0 * ___mCentralAnchorPoint_9;
	// UnityEngine.Transform Vuforia.DigitalEyewearAbstractBehaviour::mParentAnchorPoint
	Transform_t1584899523_0 * ___mParentAnchorPoint_10;
	// Vuforia.DistortionRenderingMode Vuforia.DigitalEyewearAbstractBehaviour::mDistortionRenderingMode
	int32_t ___mDistortionRenderingMode_11;
	// System.Int32 Vuforia.DigitalEyewearAbstractBehaviour::mDistortionRenderingLayer
	int32_t ___mDistortionRenderingLayer_12;
	// Vuforia.DigitalEyewearAbstractBehaviour/EyewearType Vuforia.DigitalEyewearAbstractBehaviour::mEyewearType
	int32_t ___mEyewearType_13;
	// Vuforia.DigitalEyewearAbstractBehaviour/StereoFramework Vuforia.DigitalEyewearAbstractBehaviour::mStereoFramework
	int32_t ___mStereoFramework_14;
	// System.String Vuforia.DigitalEyewearAbstractBehaviour::mViewerName
	String_t* ___mViewerName_15;
	// System.String Vuforia.DigitalEyewearAbstractBehaviour::mViewerManufacturer
	String_t* ___mViewerManufacturer_16;
	// System.Boolean Vuforia.DigitalEyewearAbstractBehaviour::mUseCustomViewer
	bool ___mUseCustomViewer_17;
	// Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters Vuforia.DigitalEyewearAbstractBehaviour::mCustomViewer
	SerializableViewerParameters_t1012358655_0 * ___mCustomViewer_18;
	// UnityEngine.Camera Vuforia.DigitalEyewearAbstractBehaviour::mPrimaryCamera
	Camera_t814710830_0 * ___mPrimaryCamera_19;
	// UnityEngine.Rect Vuforia.DigitalEyewearAbstractBehaviour::mPrimaryCameraOriginalRect
	Rect_t_981940947_0  ___mPrimaryCameraOriginalRect_20;
	// UnityEngine.Camera Vuforia.DigitalEyewearAbstractBehaviour::mSecondaryCamera
	Camera_t814710830_0 * ___mSecondaryCamera_21;
	// UnityEngine.Rect Vuforia.DigitalEyewearAbstractBehaviour::mSecondaryCameraOriginalRect
	Rect_t_981940947_0  ___mSecondaryCameraOriginalRect_22;
	// System.Boolean Vuforia.DigitalEyewearAbstractBehaviour::mSecondaryCameraDisabledLocally
	bool ___mSecondaryCameraDisabledLocally_23;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.DigitalEyewearAbstractBehaviour::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t_1261093167_0 * ___mVuforiaBehaviour_24;
	// Vuforia.DistortionRenderingBehaviour Vuforia.DigitalEyewearAbstractBehaviour::mDistortionRenderingBhvr
	DistortionRenderingBehaviour_t1001845574_0 * ___mDistortionRenderingBhvr_25;
};
