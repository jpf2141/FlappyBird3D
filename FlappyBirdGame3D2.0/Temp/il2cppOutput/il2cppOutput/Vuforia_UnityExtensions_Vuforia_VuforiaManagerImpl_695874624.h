#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType_103494864.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1014981767.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_203018319.h"

// Vuforia.VuforiaManagerImpl/TrackableResultData
struct  TrackableResultData_t695874624_0 
{
	// Vuforia.VuforiaManagerImpl/PoseData Vuforia.VuforiaManagerImpl/TrackableResultData::pose
	PoseData_t1014981767_0  ___pose_0;
	// System.Double Vuforia.VuforiaManagerImpl/TrackableResultData::timeStamp
	double ___timeStamp_1;
	// Vuforia.TrackableBehaviour/Status Vuforia.VuforiaManagerImpl/TrackableResultData::status
	int32_t ___status_2;
	// System.Int32 Vuforia.VuforiaManagerImpl/TrackableResultData::id
	int32_t ___id_3;
};
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/TrackableResultData
#pragma pack(push, tp, 1)
struct TrackableResultData_t695874624_0_marshaled
{
	PoseData_t1014981767_0  ___pose_0;
	double ___timeStamp_1;
	int32_t ___status_2;
	int32_t ___id_3;
};
#pragma pack(pop, tp)
