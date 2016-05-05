#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t719917725_0;
// UnityEngine.AudioSource
struct AudioSource_t812398632_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_AudioRolloffMode1315349672.h"

// CardboardAudioSource
struct  CardboardAudioSource_t565918550_0  : public MonoBehaviour_t_92453903_0
{
	// System.Boolean CardboardAudioSource::bypassRoomEffects
	bool ___bypassRoomEffects_2;
	// System.Single CardboardAudioSource::directivityAlpha
	float ___directivityAlpha_3;
	// System.Single CardboardAudioSource::directivitySharpness
	float ___directivitySharpness_4;
	// System.Single CardboardAudioSource::gainDb
	float ___gainDb_5;
	// System.Boolean CardboardAudioSource::occlusionEnabled
	bool ___occlusionEnabled_6;
	// System.Boolean CardboardAudioSource::playOnAwake
	bool ___playOnAwake_7;
	// UnityEngine.AudioRolloffMode CardboardAudioSource::rolloffMode
	int32_t ___rolloffMode_8;
	// System.Single CardboardAudioSource::spread
	float ___spread_9;
	// UnityEngine.AudioClip CardboardAudioSource::sourceClip
	AudioClip_t719917725_0 * ___sourceClip_10;
	// System.Boolean CardboardAudioSource::sourceLoop
	bool ___sourceLoop_11;
	// System.Boolean CardboardAudioSource::sourceMute
	bool ___sourceMute_12;
	// System.Single CardboardAudioSource::sourcePitch
	float ___sourcePitch_13;
	// System.Single CardboardAudioSource::sourceVolume
	float ___sourceVolume_14;
	// System.Single CardboardAudioSource::sourceMaxDistance
	float ___sourceMaxDistance_15;
	// System.Single CardboardAudioSource::sourceMinDistance
	float ___sourceMinDistance_16;
	// System.Boolean CardboardAudioSource::hrtfEnabled
	bool ___hrtfEnabled_17;
	// System.Int32 CardboardAudioSource::id
	int32_t ___id_18;
	// System.Single CardboardAudioSource::currentOcclusion
	float ___currentOcclusion_19;
	// System.Single CardboardAudioSource::nextOcclusionUpdate
	float ___nextOcclusionUpdate_20;
	// UnityEngine.AudioSource CardboardAudioSource::audioSource
	AudioSource_t812398632_0 * ___audioSource_21;
	// System.Boolean CardboardAudioSource::isPaused
	bool ___isPaused_22;
};
