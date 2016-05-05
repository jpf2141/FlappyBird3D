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
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImp_2131117483.h"

// Vuforia.VuforiaManagerImpl/WordResultData
struct  WordResultData_t742890429_0 
{
	// Vuforia.VuforiaManagerImpl/PoseData Vuforia.VuforiaManagerImpl/WordResultData::pose
	PoseData_t1014981767_0  ___pose_0;
	// System.Double Vuforia.VuforiaManagerImpl/WordResultData::timeStamp
	double ___timeStamp_1;
	// Vuforia.TrackableBehaviour/Status Vuforia.VuforiaManagerImpl/WordResultData::status
	int32_t ___status_2;
	// System.Int32 Vuforia.VuforiaManagerImpl/WordResultData::id
	int32_t ___id_3;
	// Vuforia.VuforiaManagerImpl/Obb2D Vuforia.VuforiaManagerImpl/WordResultData::orientedBoundingBox
	Obb2D_t_2131117483_0  ___orientedBoundingBox_4;
};
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/WordResultData
#pragma pack(push, tp, 1)
struct WordResultData_t742890429_0_marshaled
{
	PoseData_t1014981767_0  ___pose_0;
	double ___timeStamp_1;
	int32_t ___status_2;
	int32_t ___id_3;
	Obb2D_t_2131117483_0  ___orientedBoundingBox_4;
};
#pragma pack(pop, tp)
