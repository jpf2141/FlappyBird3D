#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.LineRenderer
struct LineRenderer_t305781060;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LaserScript
struct  LaserScript_t2082381654  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.LineRenderer LaserScript::line
	LineRenderer_t305781060 * ___line_2;

public:
	inline static int32_t get_offset_of_line_2() { return static_cast<int32_t>(offsetof(LaserScript_t2082381654, ___line_2)); }
	inline LineRenderer_t305781060 * get_line_2() const { return ___line_2; }
	inline LineRenderer_t305781060 ** get_address_of_line_2() { return &___line_2; }
	inline void set_line_2(LineRenderer_t305781060 * value)
	{
		___line_2 = value;
		Il2CppCodeGenWriteBarrier(&___line_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
