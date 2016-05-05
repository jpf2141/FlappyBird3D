#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t2132293834_0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>
struct Dictionary_2_t_2008277439_0;
// Vuforia.VideoBackgroundManagerAbstractBehaviour
struct VideoBackgroundManagerAbstractBehaviour_t1685190783_0;
// Vuforia.BackgroundPlaneAbstractBehaviour
struct BackgroundPlaneAbstractBehaviour_t253889221_0;

#include "mscorlib_System_Object_887538054.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Came_1518894406.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_V_2015634094.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"

// Vuforia.BaseCameraConfiguration
struct  BaseCameraConfiguration_t_1448557560_0  : public Object_t
{
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.BaseCameraConfiguration::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_0;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.BaseCameraConfiguration::mLastVideoBackGroundMirroredFromSDK
	int32_t ___mLastVideoBackGroundMirroredFromSDK_1;
	// System.Action Vuforia.BaseCameraConfiguration::mOnVideoBackgroundConfigChanged
	Action_t2132293834_0 * ___mOnVideoBackgroundConfigChanged_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour> Vuforia.BaseCameraConfiguration::mVideoBackgroundBehaviours
	Dictionary_2_t_2008277439_0 * ___mVideoBackgroundBehaviours_3;
	// UnityEngine.Rect Vuforia.BaseCameraConfiguration::mVideoBackgroundViewportRect
	Rect_t_981940947_0  ___mVideoBackgroundViewportRect_4;
	// System.Boolean Vuforia.BaseCameraConfiguration::mRenderVideoBackground
	bool ___mRenderVideoBackground_5;
	// UnityEngine.ScreenOrientation Vuforia.BaseCameraConfiguration::mProjectionOrientation
	int32_t ___mProjectionOrientation_6;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.BaseCameraConfiguration::mInitialReflection
	int32_t ___mInitialReflection_7;
	// Vuforia.VideoBackgroundManagerAbstractBehaviour Vuforia.BaseCameraConfiguration::mVideoBgMgr
	VideoBackgroundManagerAbstractBehaviour_t1685190783_0 * ___mVideoBgMgr_8;
	// Vuforia.BackgroundPlaneAbstractBehaviour Vuforia.BaseCameraConfiguration::mBackgroundPlaneBehaviour
	BackgroundPlaneAbstractBehaviour_t253889221_0 * ___mBackgroundPlaneBehaviour_9;
	// System.Boolean Vuforia.BaseCameraConfiguration::mCameraParameterChanged
	bool ___mCameraParameterChanged_10;
};
