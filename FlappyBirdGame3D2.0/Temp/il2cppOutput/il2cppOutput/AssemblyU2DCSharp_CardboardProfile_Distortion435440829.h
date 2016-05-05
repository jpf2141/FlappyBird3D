#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardProfile/Distortion
struct  Distortion_t435440829 
{
public:
	// System.Single[] CardboardProfile/Distortion::coef
	SingleU5BU5D_t1219431280* ___coef_0;

public:
	inline static int32_t get_offset_of_coef_0() { return static_cast<int32_t>(offsetof(Distortion_t435440829, ___coef_0)); }
	inline SingleU5BU5D_t1219431280* get_coef_0() const { return ___coef_0; }
	inline SingleU5BU5D_t1219431280** get_address_of_coef_0() { return &___coef_0; }
	inline void set_coef_0(SingleU5BU5D_t1219431280* value)
	{
		___coef_0 = value;
		Il2CppCodeGenWriteBarrier(&___coef_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: CardboardProfile/Distortion
struct Distortion_t435440829_marshaled_pinvoke
{
	float* ___coef_0;
};
// Native definition for marshalling of: CardboardProfile/Distortion
struct Distortion_t435440829_marshaled_com
{
	float* ___coef_0;
};
