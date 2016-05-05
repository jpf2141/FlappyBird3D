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
// MutablePose3D
struct MutablePose3D_t1860023917_0;

#include "mscorlib_System_Object_887538054.h"

// CardboardAudio
struct  CardboardAudio_t_1248061605_0  : public Object_t
{
};
struct CardboardAudio_t_1248061605_0_StaticFields{
	// System.Int32 CardboardAudio::sampleRate
	int32_t ___sampleRate_14;
	// System.Int32 CardboardAudio::numChannels
	int32_t ___numChannels_15;
	// System.Int32 CardboardAudio::framesPerBuffer
	int32_t ___framesPerBuffer_16;
	// System.Boolean CardboardAudio::initialized
	bool ___initialized_17;
	// UnityEngine.Transform CardboardAudio::listenerTransform
	Transform_t1584899523_0 * ___listenerTransform_18;
	// System.Int32 CardboardAudio::occlusionMaskValue
	int32_t ___occlusionMaskValue_19;
	// MutablePose3D CardboardAudio::pose
	MutablePose3D_t1860023917_0 * ___pose_20;
	// System.Single CardboardAudio::worldScaleInverse
	float ___worldScaleInverse_21;
};
