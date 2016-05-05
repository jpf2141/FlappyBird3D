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

// vbutton
struct  vbutton_t268531496  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.LineRenderer vbutton::line
	LineRenderer_t305781060 * ___line_2;
	// System.Boolean vbutton::fire
	bool ___fire_3;

public:
	inline static int32_t get_offset_of_line_2() { return static_cast<int32_t>(offsetof(vbutton_t268531496, ___line_2)); }
	inline LineRenderer_t305781060 * get_line_2() const { return ___line_2; }
	inline LineRenderer_t305781060 ** get_address_of_line_2() { return &___line_2; }
	inline void set_line_2(LineRenderer_t305781060 * value)
	{
		___line_2 = value;
		Il2CppCodeGenWriteBarrier(&___line_2, value);
	}

	inline static int32_t get_offset_of_fire_3() { return static_cast<int32_t>(offsetof(vbutton_t268531496, ___fire_3)); }
	inline bool get_fire_3() const { return ___fire_3; }
	inline bool* get_address_of_fire_3() { return &___fire_3; }
	inline void set_fire_3(bool value)
	{
		___fire_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
