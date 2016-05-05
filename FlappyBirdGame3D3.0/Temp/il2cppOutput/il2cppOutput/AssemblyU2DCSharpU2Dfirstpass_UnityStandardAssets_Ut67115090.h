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

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1955883606.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/Entry
struct  Entry_t67115091  : public Il2CppObject
{
public:
	// UnityEngine.GameObject UnityStandardAssets.Utility.TimedObjectActivator/Entry::target
	GameObject_t4012695102 * ___target_0;
	// UnityStandardAssets.Utility.TimedObjectActivator/Action UnityStandardAssets.Utility.TimedObjectActivator/Entry::action
	int32_t ___action_1;
	// System.Single UnityStandardAssets.Utility.TimedObjectActivator/Entry::delay
	float ___delay_2;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(Entry_t67115091, ___target_0)); }
	inline GameObject_t4012695102 * get_target_0() const { return ___target_0; }
	inline GameObject_t4012695102 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t4012695102 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier(&___target_0, value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Entry_t67115091, ___action_1)); }
	inline int32_t get_action_1() const { return ___action_1; }
	inline int32_t* get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(int32_t value)
	{
		___action_1 = value;
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(Entry_t67115091, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
