#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "AssemblyU2DCSharp_CardboardAudio_Quality2315868383.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardAudioListener
struct  CardboardAudioListener_t1952397460  : public MonoBehaviour_t3012272455
{
public:
	// System.Single CardboardAudioListener::globalGainDb
	float ___globalGainDb_2;
	// System.Single CardboardAudioListener::worldScale
	float ___worldScale_3;
	// UnityEngine.LayerMask CardboardAudioListener::occlusionMask
	LayerMask_t1862190090  ___occlusionMask_4;
	// CardboardAudio/Quality CardboardAudioListener::quality
	int32_t ___quality_5;

public:
	inline static int32_t get_offset_of_globalGainDb_2() { return static_cast<int32_t>(offsetof(CardboardAudioListener_t1952397460, ___globalGainDb_2)); }
	inline float get_globalGainDb_2() const { return ___globalGainDb_2; }
	inline float* get_address_of_globalGainDb_2() { return &___globalGainDb_2; }
	inline void set_globalGainDb_2(float value)
	{
		___globalGainDb_2 = value;
	}

	inline static int32_t get_offset_of_worldScale_3() { return static_cast<int32_t>(offsetof(CardboardAudioListener_t1952397460, ___worldScale_3)); }
	inline float get_worldScale_3() const { return ___worldScale_3; }
	inline float* get_address_of_worldScale_3() { return &___worldScale_3; }
	inline void set_worldScale_3(float value)
	{
		___worldScale_3 = value;
	}

	inline static int32_t get_offset_of_occlusionMask_4() { return static_cast<int32_t>(offsetof(CardboardAudioListener_t1952397460, ___occlusionMask_4)); }
	inline LayerMask_t1862190090  get_occlusionMask_4() const { return ___occlusionMask_4; }
	inline LayerMask_t1862190090 * get_address_of_occlusionMask_4() { return &___occlusionMask_4; }
	inline void set_occlusionMask_4(LayerMask_t1862190090  value)
	{
		___occlusionMask_4 = value;
	}

	inline static int32_t get_offset_of_quality_5() { return static_cast<int32_t>(offsetof(CardboardAudioListener_t1952397460, ___quality_5)); }
	inline int32_t get_quality_5() const { return ___quality_5; }
	inline int32_t* get_address_of_quality_5() { return &___quality_5; }
	inline void set_quality_5(int32_t value)
	{
		___quality_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
