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

// ProgressBar.Utils.FillerProperty
struct  FillerProperty_t2347308440  : public Il2CppObject
{
public:
	// System.Single ProgressBar.Utils.FillerProperty::MaxWidth
	float ___MaxWidth_0;
	// System.Single ProgressBar.Utils.FillerProperty::MinWidth
	float ___MinWidth_1;

public:
	inline static int32_t get_offset_of_MaxWidth_0() { return static_cast<int32_t>(offsetof(FillerProperty_t2347308440, ___MaxWidth_0)); }
	inline float get_MaxWidth_0() const { return ___MaxWidth_0; }
	inline float* get_address_of_MaxWidth_0() { return &___MaxWidth_0; }
	inline void set_MaxWidth_0(float value)
	{
		___MaxWidth_0 = value;
	}

	inline static int32_t get_offset_of_MinWidth_1() { return static_cast<int32_t>(offsetof(FillerProperty_t2347308440, ___MinWidth_1)); }
	inline float get_MinWidth_1() const { return ___MinWidth_1; }
	inline float* get_address_of_MinWidth_1() { return &___MinWidth_1; }
	inline void set_MinWidth_1(float value)
	{
		___MinWidth_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
