#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.IExcessAreaClipping
struct IExcessAreaClipping_t_1199736939_0;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t_1261093167_0;
// Vuforia.VideoBackgroundManagerAbstractBehaviour
struct VideoBackgroundManagerAbstractBehaviour_t1685190783_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "Vuforia_UnityExtensions_Vuforia_HideExcessAreaAbst1001863760.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// Vuforia.HideExcessAreaAbstractBehaviour
struct  HideExcessAreaAbstractBehaviour_t_1564941985_0  : public MonoBehaviour_t_92453903_0
{
	// Vuforia.IExcessAreaClipping Vuforia.HideExcessAreaAbstractBehaviour::mClippingImpl
	Object_t * ___mClippingImpl_2;
	// Vuforia.HideExcessAreaAbstractBehaviour/CLIPPING_MODE Vuforia.HideExcessAreaAbstractBehaviour::mClippingMode
	int32_t ___mClippingMode_3;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.HideExcessAreaAbstractBehaviour::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t_1261093167_0 * ___mVuforiaBehaviour_4;
	// Vuforia.VideoBackgroundManagerAbstractBehaviour Vuforia.HideExcessAreaAbstractBehaviour::mVideoBgMgr
	VideoBackgroundManagerAbstractBehaviour_t1685190783_0 * ___mVideoBgMgr_5;
	// UnityEngine.Vector3 Vuforia.HideExcessAreaAbstractBehaviour::mPlaneOffset
	Vector3_t_725341337_0  ___mPlaneOffset_6;
	// System.Boolean Vuforia.HideExcessAreaAbstractBehaviour::mSceneScaledDown
	bool ___mSceneScaledDown_7;
	// System.Boolean Vuforia.HideExcessAreaAbstractBehaviour::mStarted
	bool ___mStarted_8;
};
