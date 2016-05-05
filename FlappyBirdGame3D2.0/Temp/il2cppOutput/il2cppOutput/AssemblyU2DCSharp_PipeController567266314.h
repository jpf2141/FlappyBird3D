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

// PipeController
struct  PipeController_t567266314  : public MonoBehaviour_t3012272455
{
public:
	// System.Single PipeController::start
	float ___start_2;
	// System.Single PipeController::middle
	float ___middle_3;
	// System.Single PipeController::end
	float ___end_4;
	// UnityEngine.GameObject PipeController::track
	GameObject_t4012695102 * ___track_5;
	// System.Boolean PipeController::hasDuplicated
	bool ___hasDuplicated_7;

public:
	inline static int32_t get_offset_of_start_2() { return static_cast<int32_t>(offsetof(PipeController_t567266314, ___start_2)); }
	inline float get_start_2() const { return ___start_2; }
	inline float* get_address_of_start_2() { return &___start_2; }
	inline void set_start_2(float value)
	{
		___start_2 = value;
	}

	inline static int32_t get_offset_of_middle_3() { return static_cast<int32_t>(offsetof(PipeController_t567266314, ___middle_3)); }
	inline float get_middle_3() const { return ___middle_3; }
	inline float* get_address_of_middle_3() { return &___middle_3; }
	inline void set_middle_3(float value)
	{
		___middle_3 = value;
	}

	inline static int32_t get_offset_of_end_4() { return static_cast<int32_t>(offsetof(PipeController_t567266314, ___end_4)); }
	inline float get_end_4() const { return ___end_4; }
	inline float* get_address_of_end_4() { return &___end_4; }
	inline void set_end_4(float value)
	{
		___end_4 = value;
	}

	inline static int32_t get_offset_of_track_5() { return static_cast<int32_t>(offsetof(PipeController_t567266314, ___track_5)); }
	inline GameObject_t4012695102 * get_track_5() const { return ___track_5; }
	inline GameObject_t4012695102 ** get_address_of_track_5() { return &___track_5; }
	inline void set_track_5(GameObject_t4012695102 * value)
	{
		___track_5 = value;
		Il2CppCodeGenWriteBarrier(&___track_5, value);
	}

	inline static int32_t get_offset_of_hasDuplicated_7() { return static_cast<int32_t>(offsetof(PipeController_t567266314, ___hasDuplicated_7)); }
	inline bool get_hasDuplicated_7() const { return ___hasDuplicated_7; }
	inline bool* get_address_of_hasDuplicated_7() { return &___hasDuplicated_7; }
	inline void set_hasDuplicated_7(bool value)
	{
		___hasDuplicated_7 = value;
	}
};

struct PipeController_t567266314_StaticFields
{
public:
	// System.Single PipeController::speedMultiplier
	float ___speedMultiplier_6;

public:
	inline static int32_t get_offset_of_speedMultiplier_6() { return static_cast<int32_t>(offsetof(PipeController_t567266314_StaticFields, ___speedMultiplier_6)); }
	inline float get_speedMultiplier_6() const { return ___speedMultiplier_6; }
	inline float* get_address_of_speedMultiplier_6() { return &___speedMultiplier_6; }
	inline void set_speedMultiplier_6(float value)
	{
		___speedMultiplier_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
