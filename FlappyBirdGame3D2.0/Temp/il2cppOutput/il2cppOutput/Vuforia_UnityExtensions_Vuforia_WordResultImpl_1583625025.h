#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.Word
struct Word_t_1803922622_0;

#include "Vuforia_UnityExtensions_Vuforia_WordResult_1421996545.h"
#include "Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox786000907.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_203018319.h"

// Vuforia.WordResultImpl
struct  WordResultImpl_t_1583625025_0  : public WordResult_t_1421996545_0
{
	// Vuforia.OrientedBoundingBox Vuforia.WordResultImpl::mObb
	OrientedBoundingBox_t786000907_0  ___mObb_0;
	// UnityEngine.Vector3 Vuforia.WordResultImpl::mPosition
	Vector3_t_725341337_0  ___mPosition_1;
	// UnityEngine.Quaternion Vuforia.WordResultImpl::mOrientation
	Quaternion_t1989680039_0  ___mOrientation_2;
	// Vuforia.Word Vuforia.WordResultImpl::mWord
	Object_t * ___mWord_3;
	// Vuforia.TrackableBehaviour/Status Vuforia.WordResultImpl::mStatus
	int32_t ___mStatus_4;
};
