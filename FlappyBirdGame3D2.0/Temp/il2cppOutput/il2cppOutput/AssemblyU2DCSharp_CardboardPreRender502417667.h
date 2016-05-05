#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardPreRender
struct  CardboardPreRender_t502417667  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Camera CardboardPreRender::<cam>k__BackingField
	Camera_t3533968274 * ___U3CcamU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CcamU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CardboardPreRender_t502417667, ___U3CcamU3Ek__BackingField_2)); }
	inline Camera_t3533968274 * get_U3CcamU3Ek__BackingField_2() const { return ___U3CcamU3Ek__BackingField_2; }
	inline Camera_t3533968274 ** get_address_of_U3CcamU3Ek__BackingField_2() { return &___U3CcamU3Ek__BackingField_2; }
	inline void set_U3CcamU3Ek__BackingField_2(Camera_t3533968274 * value)
	{
		___U3CcamU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcamU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
