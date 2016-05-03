#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnScript_Coin
struct  SpawnScript_Coin_t2230869834  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] SpawnScript_Coin::obj
	GameObjectU5BU5D_t3499186955* ___obj_2;
	// System.Single SpawnScript_Coin::spawnMin
	float ___spawnMin_3;
	// System.Single SpawnScript_Coin::spawnMax
	float ___spawnMax_4;

public:
	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(SpawnScript_Coin_t2230869834, ___obj_2)); }
	inline GameObjectU5BU5D_t3499186955* get_obj_2() const { return ___obj_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(GameObjectU5BU5D_t3499186955* value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier(&___obj_2, value);
	}

	inline static int32_t get_offset_of_spawnMin_3() { return static_cast<int32_t>(offsetof(SpawnScript_Coin_t2230869834, ___spawnMin_3)); }
	inline float get_spawnMin_3() const { return ___spawnMin_3; }
	inline float* get_address_of_spawnMin_3() { return &___spawnMin_3; }
	inline void set_spawnMin_3(float value)
	{
		___spawnMin_3 = value;
	}

	inline static int32_t get_offset_of_spawnMax_4() { return static_cast<int32_t>(offsetof(SpawnScript_Coin_t2230869834, ___spawnMax_4)); }
	inline float get_spawnMax_4() const { return ___spawnMax_4; }
	inline float* get_address_of_spawnMax_4() { return &___spawnMax_4; }
	inline void set_spawnMax_4(float value)
	{
		___spawnMax_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
