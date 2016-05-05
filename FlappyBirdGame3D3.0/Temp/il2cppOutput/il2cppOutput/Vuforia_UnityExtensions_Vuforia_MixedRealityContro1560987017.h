#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.MixedRealityController
struct MixedRealityController_t1560987017_0;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t_1261093167_0;
// Vuforia.DigitalEyewearAbstractBehaviour
struct DigitalEyewearAbstractBehaviour_t756139627_0;
// Vuforia.VideoBackgroundManagerAbstractBehaviour
struct VideoBackgroundManagerAbstractBehaviour_t1685190783_0;
// Vuforia.IViewerParameters
struct IViewerParameters_t904938221_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.Camera
struct Camera_t814710830_0;

#include "mscorlib_System_Object_887538054.h"
#include "Vuforia_UnityExtensions_Vuforia_DigitalEyewearAbs_1324354270.h"

// Vuforia.MixedRealityController
struct  MixedRealityController_t1560987017_0  : public Object_t
{
	// Vuforia.VuforiaAbstractBehaviour Vuforia.MixedRealityController::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t_1261093167_0 * ___mVuforiaBehaviour_1;
	// Vuforia.DigitalEyewearAbstractBehaviour Vuforia.MixedRealityController::mDigitalEyewearBehaviour
	DigitalEyewearAbstractBehaviour_t756139627_0 * ___mDigitalEyewearBehaviour_2;
	// Vuforia.VideoBackgroundManagerAbstractBehaviour Vuforia.MixedRealityController::mVideoBackgroundManager
	VideoBackgroundManagerAbstractBehaviour_t1685190783_0 * ___mVideoBackgroundManager_3;
	// System.Boolean Vuforia.MixedRealityController::mViewerHasBeenSetExternally
	bool ___mViewerHasBeenSetExternally_4;
	// Vuforia.IViewerParameters Vuforia.MixedRealityController::mViewerParameters
	Object_t * ___mViewerParameters_5;
	// System.Boolean Vuforia.MixedRealityController::mFrameWorkHasBeenSetExternally
	bool ___mFrameWorkHasBeenSetExternally_6;
	// Vuforia.DigitalEyewearAbstractBehaviour/StereoFramework Vuforia.MixedRealityController::mStereoFramework
	int32_t ___mStereoFramework_7;
	// UnityEngine.Transform Vuforia.MixedRealityController::mCentralAnchorPoint
	Transform_t1584899523_0 * ___mCentralAnchorPoint_8;
	// UnityEngine.Camera Vuforia.MixedRealityController::mLeftCameraOfExternalSDK
	Camera_t814710830_0 * ___mLeftCameraOfExternalSDK_9;
	// UnityEngine.Camera Vuforia.MixedRealityController::mRightCameraOfExternalSDK
	Camera_t814710830_0 * ___mRightCameraOfExternalSDK_10;
	// System.Boolean Vuforia.MixedRealityController::mObjectTrackerStopped
	bool ___mObjectTrackerStopped_11;
	// System.Boolean Vuforia.MixedRealityController::mMarkerTrackerStopped
	bool ___mMarkerTrackerStopped_12;
	// System.Boolean Vuforia.MixedRealityController::mAutoStopCameraIfNotRequired
	bool ___mAutoStopCameraIfNotRequired_13;
};
struct MixedRealityController_t1560987017_0_StaticFields{
	// Vuforia.MixedRealityController Vuforia.MixedRealityController::mInstance
	MixedRealityController_t1560987017_0 * ___mInstance_0;
};
