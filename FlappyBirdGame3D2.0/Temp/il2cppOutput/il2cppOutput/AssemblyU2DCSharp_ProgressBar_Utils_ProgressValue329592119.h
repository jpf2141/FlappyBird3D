#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProgressBar.Utils.ProgressValue
struct  ProgressValue_t329592119  : public Il2CppObject
{
public:
	// System.Single ProgressBar.Utils.ProgressValue::m_Value
	float ___m_Value_0;
	// System.Single ProgressBar.Utils.ProgressValue::m_MaxValue
	float ___m_MaxValue_1;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(ProgressValue_t329592119, ___m_Value_0)); }
	inline float get_m_Value_0() const { return ___m_Value_0; }
	inline float* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(float value)
	{
		___m_Value_0 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_1() { return static_cast<int32_t>(offsetof(ProgressValue_t329592119, ___m_MaxValue_1)); }
	inline float get_m_MaxValue_1() const { return ___m_MaxValue_1; }
	inline float* get_address_of_m_MaxValue_1() { return &___m_MaxValue_1; }
	inline void set_m_MaxValue_1(float value)
	{
		___m_MaxValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
