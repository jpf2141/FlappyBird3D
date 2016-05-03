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
struct Transform_t284553113;
// MutablePose3D
struct MutablePose3D_t1273683304;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardAudio
struct  CardboardAudio_t2050215872  : public Il2CppObject
{
public:

public:
};

struct CardboardAudio_t2050215872_StaticFields
{
public:
	// System.Int32 CardboardAudio::sampleRate
	int32_t ___sampleRate_14;
	// System.Int32 CardboardAudio::numChannels
	int32_t ___numChannels_15;
	// System.Int32 CardboardAudio::framesPerBuffer
	int32_t ___framesPerBuffer_16;
	// System.Boolean CardboardAudio::initialized
	bool ___initialized_17;
	// UnityEngine.Transform CardboardAudio::listenerTransform
	Transform_t284553113 * ___listenerTransform_18;
	// System.Int32 CardboardAudio::occlusionMaskValue
	int32_t ___occlusionMaskValue_19;
	// MutablePose3D CardboardAudio::pose
	MutablePose3D_t1273683304 * ___pose_20;
	// System.Single CardboardAudio::worldScaleInverse
	float ___worldScaleInverse_21;

public:
	inline static int32_t get_offset_of_sampleRate_14() { return static_cast<int32_t>(offsetof(CardboardAudio_t2050215872_StaticFields, ___sampleRate_14)); }
	inline int32_t get_sampleRate_14() const { return ___sampleRate_14; }
	inline int32_t* get_address_of_sampleRate_14() { return &___sampleRate_14; }
	inline void set_sampleRate_14(int32_t value)
	{
		___sampleRate_14 = value;
	}

	inline static int32_t get_offset_of_numChannels_15() { return static_cast<int32_t>(offsetof(CardboardAudio_t2050215872_StaticFields, ___numChannels_15)); }
	inline int32_t get_numChannels_15() const { return ___numChannels_15; }
	inline int32_t* get_address_of_numChannels_15() { return &___numChannels_15; }
	inline void set_numChannels_15(int32_t value)
	{
		___numChannels_15 = value;
	}

	inline static int32_t get_offset_of_framesPerBuffer_16() { return static_cast<int32_t>(offsetof(CardboardAudio_t2050215872_StaticFields, ___framesPerBuffer_16)); }
	inline int32_t get_framesPerBuffer_16() const { return ___framesPerBuffer_16; }
	inline int32_t* get_address_of_framesPerBuffer_16() { return &___framesPerBuffer_16; }
	inline void set_framesPerBuffer_16(int32_t value)
	{
		___framesPerBuffer_16 = value;
	}

	inline static int32_t get_offset_of_initialized_17() { return static_cast<int32_t>(offsetof(CardboardAudio_t2050215872_StaticFields, ___initialized_17)); }
	inline bool get_initialized_17() const { return ___initialized_17; }
	inline bool* get_address_of_initialized_17() { return &___initialized_17; }
	inline void set_initialized_17(bool value)
	{
		___initialized_17 = value;
	}

	inline static int32_t get_offset_of_listenerTransform_18() { return static_cast<int32_t>(offsetof(CardboardAudio_t2050215872_StaticFields, ___listenerTransform_18)); }
	inline Transform_t284553113 * get_listenerTransform_18() const { return ___listenerTransform_18; }
	inline Transform_t284553113 ** get_address_of_listenerTransform_18() { return &___listenerTransform_18; }
	inline void set_listenerTransform_18(Transform_t284553113 * value)
	{
		___listenerTransform_18 = value;
		Il2CppCodeGenWriteBarrier(&___listenerTransform_18, value);
	}

	inline static int32_t get_offset_of_occlusionMaskValue_19() { return static_cast<int32_t>(offsetof(CardboardAudio_t2050215872_StaticFields, ___occlusionMaskValue_19)); }
	inline int32_t get_occlusionMaskValue_19() const { return ___occlusionMaskValue_19; }
	inline int32_t* get_address_of_occlusionMaskValue_19() { return &___occlusionMaskValue_19; }
	inline void set_occlusionMaskValue_19(int32_t value)
	{
		___occlusionMaskValue_19 = value;
	}

	inline static int32_t get_offset_of_pose_20() { return static_cast<int32_t>(offsetof(CardboardAudio_t2050215872_StaticFields, ___pose_20)); }
	inline MutablePose3D_t1273683304 * get_pose_20() const { return ___pose_20; }
	inline MutablePose3D_t1273683304 ** get_address_of_pose_20() { return &___pose_20; }
	inline void set_pose_20(MutablePose3D_t1273683304 * value)
	{
		___pose_20 = value;
		Il2CppCodeGenWriteBarrier(&___pose_20, value);
	}

	inline static int32_t get_offset_of_worldScaleInverse_21() { return static_cast<int32_t>(offsetof(CardboardAudio_t2050215872_StaticFields, ___worldScaleInverse_21)); }
	inline float get_worldScaleInverse_21() const { return ___worldScaleInverse_21; }
	inline float* get_address_of_worldScaleInverse_21() { return &___worldScaleInverse_21; }
	inline void set_worldScaleInverse_21(float value)
	{
		___worldScaleInverse_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
