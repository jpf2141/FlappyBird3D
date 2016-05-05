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

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "Vuforia_UnityExtensions_Vuforia_RotationalDeviceT_1440122816.h"

// Vuforia.DeviceTrackerAbstractBehaviour
struct  DeviceTrackerAbstractBehaviour_t372565265_0  : public MonoBehaviour_t_92453903_0
{
	// System.Boolean Vuforia.DeviceTrackerAbstractBehaviour::mAutoInitTracker
	bool ___mAutoInitTracker_4;
	// System.Boolean Vuforia.DeviceTrackerAbstractBehaviour::mAutoStartTracker
	bool ___mAutoStartTracker_5;
	// System.Boolean Vuforia.DeviceTrackerAbstractBehaviour::mPosePrediction
	bool ___mPosePrediction_6;
	// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.DeviceTrackerAbstractBehaviour::mModelCorrectionMode
	int32_t ___mModelCorrectionMode_7;
	// System.Boolean Vuforia.DeviceTrackerAbstractBehaviour::mModelTransformEnabled
	bool ___mModelTransformEnabled_8;
	// UnityEngine.Vector3 Vuforia.DeviceTrackerAbstractBehaviour::mModelTransform
	Vector3_t_725341337_0  ___mModelTransform_9;
	// System.Action Vuforia.DeviceTrackerAbstractBehaviour::mTrackerStarted
	Action_t2132293834_0 * ___mTrackerStarted_10;
	// System.Boolean Vuforia.DeviceTrackerAbstractBehaviour::mTrackerWasActiveBeforePause
	bool ___mTrackerWasActiveBeforePause_11;
	// System.Boolean Vuforia.DeviceTrackerAbstractBehaviour::mTrackerWasActiveBeforeDisabling
	bool ___mTrackerWasActiveBeforeDisabling_12;
};
struct DeviceTrackerAbstractBehaviour_t372565265_0_StaticFields{
	// UnityEngine.Vector3 Vuforia.DeviceTrackerAbstractBehaviour::DEFAULT_HEAD_PIVOT
	Vector3_t_725341337_0  ___DEFAULT_HEAD_PIVOT_2;
	// UnityEngine.Vector3 Vuforia.DeviceTrackerAbstractBehaviour::DEFAULT_HANDHELD_PIVOT
	Vector3_t_725341337_0  ___DEFAULT_HANDHELD_PIVOT_3;
};
