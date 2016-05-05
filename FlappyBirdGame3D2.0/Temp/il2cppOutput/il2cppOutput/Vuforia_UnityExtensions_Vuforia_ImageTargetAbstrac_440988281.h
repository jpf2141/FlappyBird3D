#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ImageTarget
struct ImageTarget_t_576971884_0;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
struct Dictionary_2_t2108650824_0;

#include "Vuforia_UnityExtensions_Vuforia_DataSetTrackableBe_432496040.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetType878982382.h"

// Vuforia.ImageTargetAbstractBehaviour
struct  ImageTargetAbstractBehaviour_t_440988281_0  : public DataSetTrackableBehaviour_t_432496040_0
{
	// System.Single Vuforia.ImageTargetAbstractBehaviour::mAspectRatio
	float ___mAspectRatio_21;
	// Vuforia.ImageTargetType Vuforia.ImageTargetAbstractBehaviour::mImageTargetType
	int32_t ___mImageTargetType_22;
	// Vuforia.ImageTarget Vuforia.ImageTargetAbstractBehaviour::mImageTarget
	Object_t * ___mImageTarget_23;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour> Vuforia.ImageTargetAbstractBehaviour::mVirtualButtonBehaviours
	Dictionary_2_t2108650824_0 * ___mVirtualButtonBehaviours_24;
};
