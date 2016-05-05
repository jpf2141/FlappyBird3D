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
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t516166480_0;
// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>
struct List_1_t175418601_0;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t_199494472_0;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t962847284_0;
// System.Action
struct Action_t2132293834_0;
// System.Action`1<System.Boolean>
struct Action_1_t_1180387379_0;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t1032042208_0;
// Vuforia.DigitalEyewearAbstractBehaviour
struct DigitalEyewearAbstractBehaviour_t756139627_0;
// Vuforia.VideoBackgroundManagerAbstractBehaviour
struct VideoBackgroundManagerAbstractBehaviour_t1685190783_0;
// UnityEngine.Material
struct Material_t1701708784_0;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t_1140530411_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Came_1518894406.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Came_1036780098.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_V_2015634094.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBe_1501798036.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitEr401330740.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"

// Vuforia.VuforiaAbstractBehaviour
struct  VuforiaAbstractBehaviour_t_1261093167_0  : public MonoBehaviour_t_92453903_0
{
	// System.String Vuforia.VuforiaAbstractBehaviour::VuforiaLicenseKey
	String_t* ___VuforiaLicenseKey_2;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaAbstractBehaviour::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_3;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_4;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_5;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_6;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaAbstractBehaviour::CameraDirection
	int32_t ___CameraDirection_7;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_8;
	// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaAbstractBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_9;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaAbstractBehaviour::mWorldCenter
	TrackableBehaviour_t516166480_0 * ___mWorldCenter_10;
	// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler> Vuforia.VuforiaAbstractBehaviour::mTrackerEventHandlers
	List_1_t175418601_0 * ___mTrackerEventHandlers_11;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaAbstractBehaviour::mVideoBgEventHandlers
	List_1_t_199494472_0 * ___mVideoBgEventHandlers_12;
	// System.Action`1<Vuforia.VuforiaUnity/InitError> Vuforia.VuforiaAbstractBehaviour::mOnVuforiaInitError
	Action_1_t962847284_0 * ___mOnVuforiaInitError_13;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnVuforiaInitialized
	Action_t2132293834_0 * ___mOnVuforiaInitialized_14;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnVuforiaStarted
	Action_t2132293834_0 * ___mOnVuforiaStarted_15;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnTrackablesUpdated
	Action_t2132293834_0 * ___mOnTrackablesUpdated_16;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mRenderOnUpdate
	Action_t2132293834_0 * ___mRenderOnUpdate_17;
	// System.Action`1<System.Boolean> Vuforia.VuforiaAbstractBehaviour::mOnPause
	Action_1_t_1180387379_0 * ___mOnPause_18;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnBackgroundTextureChanged
	Action_t2132293834_0 * ___mOnBackgroundTextureChanged_19;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_20;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mHasStarted
	bool ___mHasStarted_21;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mFailedToInitialize
	bool ___mFailedToInitialize_22;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_23;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaAbstractBehaviour::mInitError
	int32_t ___mInitError_24;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaAbstractBehaviour::mCameraConfiguration
	Object_t * ___mCameraConfiguration_25;
	// Vuforia.DigitalEyewearAbstractBehaviour Vuforia.VuforiaAbstractBehaviour::mEyewearBehaviour
	DigitalEyewearAbstractBehaviour_t756139627_0 * ___mEyewearBehaviour_26;
	// Vuforia.VideoBackgroundManagerAbstractBehaviour Vuforia.VuforiaAbstractBehaviour::mVideoBackgroundMgr
	VideoBackgroundManagerAbstractBehaviour_t1685190783_0 * ___mVideoBackgroundMgr_27;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mCheckStopCamera
	bool ___mCheckStopCamera_28;
	// UnityEngine.Material Vuforia.VuforiaAbstractBehaviour::mClearMaterial
	Material_t1701708784_0 * ___mClearMaterial_29;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMetalRendering
	bool ___mMetalRendering_30;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mHasStartedOnce
	bool ___mHasStartedOnce_31;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_32;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_33;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_34;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMarkerTrackerWasActiveBeforePause
	bool ___mMarkerTrackerWasActiveBeforePause_35;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMarkerTrackerWasActiveBeforeDisabling
	bool ___mMarkerTrackerWasActiveBeforeDisabling_36;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_37;
	// System.Collections.Generic.List`1<System.Type> Vuforia.VuforiaAbstractBehaviour::mTrackersRequestedToDeinit
	List_1_t_1140530411_0 * ___mTrackersRequestedToDeinit_38;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMissedToApplyLeftProjectionMatrix
	bool ___mMissedToApplyLeftProjectionMatrix_39;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMissedToApplyRightProjectionMatrix
	bool ___mMissedToApplyRightProjectionMatrix_40;
	// UnityEngine.Matrix4x4 Vuforia.VuforiaAbstractBehaviour::mLeftProjectMatrixToApply
	Matrix4x4_t1577636070_0  ___mLeftProjectMatrixToApply_41;
	// UnityEngine.Matrix4x4 Vuforia.VuforiaAbstractBehaviour::mRightProjectMatrixToApply
	Matrix4x4_t1577636070_0  ___mRightProjectMatrixToApply_42;
};
