#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CloudFieldCreator
struct  CloudFieldCreator_t4033025159  : public MonoBehaviour_t3012272455
{
public:
	// System.Single CloudFieldCreator::start
	float ___start_2;
	// System.Single CloudFieldCreator::middle
	float ___middle_3;
	// System.Single CloudFieldCreator::end
	float ___end_4;
	// System.Single CloudFieldCreator::y_limit_low
	float ___y_limit_low_5;
	// System.Single CloudFieldCreator::y_limit_high
	float ___y_limit_high_6;
	// System.Single CloudFieldCreator::z_limit_low
	float ___z_limit_low_7;
	// System.Single CloudFieldCreator::z_limit_high
	float ___z_limit_high_8;
	// UnityEngine.GameObject CloudFieldCreator::track
	GameObject_t4012695102 * ___track_9;
	// System.Single CloudFieldCreator::difficulty
	float ___difficulty_11;
	// System.Boolean CloudFieldCreator::hasDuplicated
	bool ___hasDuplicated_12;

public:
	inline static int32_t get_offset_of_start_2() { return static_cast<int32_t>(offsetof(CloudFieldCreator_t4033025159, ___start_2)); }
	inline float get_start_2() const { return ___start_2; }
	inline float* get_address_of_start_2() { return &___start_2; }
	inline void set_start_2(float value)
	{
		___start_2 = value;
	}

	inline static int32_t get_offset_of_middle_3() { return static_cast<int32_t>(offsetof(CloudFieldCreator_t4033025159, ___middle_3)); }
	inline float get_middle_3() const { return ___middle_3; }
	inline float* get_address_of_middle_3() { return &___middle_3; }
	inline void set_middle_3(float value)
	{
		___middle_3 = value;
	}

	inline static int32_t get_offset_of_end_4() { return static_cast<int32_t>(offsetof(CloudFieldCreator_t4033025159, ___end_4)); }
	inline float get_end_4() const { return ___end_4; }
	inline float* get_address_of_end_4() { return &___end_4; }
	inline void set_end_4(float value)
	{
		___end_4 = value;
	}

	inline static int32_t get_offset_of_y_limit_low_5() { return static_cast<int32_t>(offsetof(CloudFieldCreator_t4033025159, ___y_limit_low_5)); }
	inline float get_y_limit_low_5() const { return ___y_limit_low_5; }
	inline float* get_address_of_y_limit_low_5() { return &___y_limit_low_5; }
	inline void set_y_limit_low_5(float value)
	{
		___y_limit_low_5 = value;
	}

	inline static int32_t get_offset_of_y_limit_high_6() { return static_cast<int32_t>(offsetof(CloudFieldCreator_t4033025159, ___y_limit_high_6)); }
	inline float get_y_limit_high_6() const { return ___y_limit_high_6; }
	inline float* get_address_of_y_limit_high_6() { return &___y_limit_high_6; }
	inline void set_y_limit_high_6(float value)
	{
		___y_limit_high_6 = value;
	}

	inline static int32_t get_offset_of_z_limit_low_7() { return static_cast<int32_t>(offsetof(CloudFieldCreator_t4033025159, ___z_limit_low_7)); }
	inline float get_z_limit_low_7() const { return ___z_limit_low_7; }
	inline float* get_address_of_z_limit_low_7() { return &___z_limit_low_7; }
	inline void set_z_limit_low_7(float value)
	{
		___z_limit_low_7 = value;
	}

	inline static int32_t get_offset_of_z_limit_high_8() { return static_cast<int32_t>(offsetof(CloudFieldCreator_t4033025159, ___z_limit_high_8)); }
	inline float get_z_limit_high_8() const { return ___z_limit_high_8; }
	inline float* get_address_of_z_limit_high_8() { return &___z_limit_high_8; }
	inline void set_z_limit_high_8(float value)
	{
		___z_limit_high_8 = value;
	}

	inline static int32_t get_offset_of_track_9() { return static_cast<int32_t>(offsetof(CloudFieldCreator_t4033025159, ___track_9)); }
	inline GameObject_t4012695102 * get_track_9() const { return ___track_9; }
	inline GameObject_t4012695102 ** get_address_of_track_9() { return &___track_9; }
	inline void set_track_9(GameObject_t4012695102 * value)
	{
		___track_9 = value;
		Il2CppCodeGenWriteBarrier(&___track_9, value);
	}

	inline static int32_t get_offset_of_difficulty_11() { return static_cast<int32_t>(offsetof(CloudFieldCreator_t4033025159, ___difficulty_11)); }
	inline float get_difficulty_11() const { return ___difficulty_11; }
	inline float* get_address_of_difficulty_11() { return &___difficulty_11; }
	inline void set_difficulty_11(float value)
	{
		___difficulty_11 = value;
	}

	inline static int32_t get_offset_of_hasDuplicated_12() { return static_cast<int32_t>(offsetof(CloudFieldCreator_t4033025159, ___hasDuplicated_12)); }
	inline bool get_hasDuplicated_12() const { return ___hasDuplicated_12; }
	inline bool* get_address_of_hasDuplicated_12() { return &___hasDuplicated_12; }
	inline void set_hasDuplicated_12(bool value)
	{
		___hasDuplicated_12 = value;
	}
};

struct CloudFieldCreator_t4033025159_StaticFields
{
public:
	// System.Single CloudFieldCreator::speedMultiplier
	float ___speedMultiplier_10;

public:
	inline static int32_t get_offset_of_speedMultiplier_10() { return static_cast<int32_t>(offsetof(CloudFieldCreator_t4033025159_StaticFields, ___speedMultiplier_10)); }
	inline float get_speedMultiplier_10() const { return ___speedMultiplier_10; }
	inline float* get_address_of_speedMultiplier_10() { return &___speedMultiplier_10; }
	inline void set_speedMultiplier_10(float value)
	{
		___speedMultiplier_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
