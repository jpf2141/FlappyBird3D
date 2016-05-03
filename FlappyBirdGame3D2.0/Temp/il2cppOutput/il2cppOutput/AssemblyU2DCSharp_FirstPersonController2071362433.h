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

// FirstPersonController
struct  FirstPersonController_t2071362433  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject FirstPersonController::flappybird
	GameObject_t4012695102 * ___flappybird_2;

public:
	inline static int32_t get_offset_of_flappybird_2() { return static_cast<int32_t>(offsetof(FirstPersonController_t2071362433, ___flappybird_2)); }
	inline GameObject_t4012695102 * get_flappybird_2() const { return ___flappybird_2; }
	inline GameObject_t4012695102 ** get_address_of_flappybird_2() { return &___flappybird_2; }
	inline void set_flappybird_2(GameObject_t4012695102 * value)
	{
		___flappybird_2 = value;
		Il2CppCodeGenWriteBarrier(&___flappybird_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
