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

// CoinController
struct  CoinController_t1187871021  : public MonoBehaviour_t3012272455
{
public:
	// System.Single CoinController::start
	float ___start_2;
	// System.Single CoinController::middle
	float ___middle_3;
	// System.Single CoinController::end
	float ___end_4;
	// System.Single CoinController::maxHeight
	float ___maxHeight_5;
	// System.Single CoinController::minHeight
	float ___minHeight_6;
	// UnityEngine.GameObject CoinController::track
	GameObject_t4012695102 * ___track_8;
	// System.Boolean CoinController::hasDuplicated
	bool ___hasDuplicated_9;

public:
	inline static int32_t get_offset_of_start_2() { return static_cast<int32_t>(offsetof(CoinController_t1187871021, ___start_2)); }
	inline float get_start_2() const { return ___start_2; }
	inline float* get_address_of_start_2() { return &___start_2; }
	inline void set_start_2(float value)
	{
		___start_2 = value;
	}

	inline static int32_t get_offset_of_middle_3() { return static_cast<int32_t>(offsetof(CoinController_t1187871021, ___middle_3)); }
	inline float get_middle_3() const { return ___middle_3; }
	inline float* get_address_of_middle_3() { return &___middle_3; }
	inline void set_middle_3(float value)
	{
		___middle_3 = value;
	}

	inline static int32_t get_offset_of_end_4() { return static_cast<int32_t>(offsetof(CoinController_t1187871021, ___end_4)); }
	inline float get_end_4() const { return ___end_4; }
	inline float* get_address_of_end_4() { return &___end_4; }
	inline void set_end_4(float value)
	{
		___end_4 = value;
	}

	inline static int32_t get_offset_of_maxHeight_5() { return static_cast<int32_t>(offsetof(CoinController_t1187871021, ___maxHeight_5)); }
	inline float get_maxHeight_5() const { return ___maxHeight_5; }
	inline float* get_address_of_maxHeight_5() { return &___maxHeight_5; }
	inline void set_maxHeight_5(float value)
	{
		___maxHeight_5 = value;
	}

	inline static int32_t get_offset_of_minHeight_6() { return static_cast<int32_t>(offsetof(CoinController_t1187871021, ___minHeight_6)); }
	inline float get_minHeight_6() const { return ___minHeight_6; }
	inline float* get_address_of_minHeight_6() { return &___minHeight_6; }
	inline void set_minHeight_6(float value)
	{
		___minHeight_6 = value;
	}

	inline static int32_t get_offset_of_track_8() { return static_cast<int32_t>(offsetof(CoinController_t1187871021, ___track_8)); }
	inline GameObject_t4012695102 * get_track_8() const { return ___track_8; }
	inline GameObject_t4012695102 ** get_address_of_track_8() { return &___track_8; }
	inline void set_track_8(GameObject_t4012695102 * value)
	{
		___track_8 = value;
		Il2CppCodeGenWriteBarrier(&___track_8, value);
	}

	inline static int32_t get_offset_of_hasDuplicated_9() { return static_cast<int32_t>(offsetof(CoinController_t1187871021, ___hasDuplicated_9)); }
	inline bool get_hasDuplicated_9() const { return ___hasDuplicated_9; }
	inline bool* get_address_of_hasDuplicated_9() { return &___hasDuplicated_9; }
	inline void set_hasDuplicated_9(bool value)
	{
		___hasDuplicated_9 = value;
	}
};

struct CoinController_t1187871021_StaticFields
{
public:
	// System.Single CoinController::speedMultiplier
	float ___speedMultiplier_7;

public:
	inline static int32_t get_offset_of_speedMultiplier_7() { return static_cast<int32_t>(offsetof(CoinController_t1187871021_StaticFields, ___speedMultiplier_7)); }
	inline float get_speedMultiplier_7() const { return ___speedMultiplier_7; }
	inline float* get_address_of_speedMultiplier_7() { return &___speedMultiplier_7; }
	inline void set_speedMultiplier_7(float value)
	{
		___speedMultiplier_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
