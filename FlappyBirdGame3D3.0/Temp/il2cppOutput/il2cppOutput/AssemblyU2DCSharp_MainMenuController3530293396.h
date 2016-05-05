#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenuController
struct  MainMenuController_t3530293396  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioClip MainMenuController::birdSound
	AudioClip_t3714538611 * ___birdSound_2;
	// UnityEngine.AudioSource MainMenuController::source
	AudioSource_t3628549054 * ___source_3;
	// UnityEngine.UI.Text MainMenuController::levelText
	Text_t3286458198 * ___levelText_4;
	// System.Single MainMenuController::tilt
	float ___tilt_5;

public:
	inline static int32_t get_offset_of_birdSound_2() { return static_cast<int32_t>(offsetof(MainMenuController_t3530293396, ___birdSound_2)); }
	inline AudioClip_t3714538611 * get_birdSound_2() const { return ___birdSound_2; }
	inline AudioClip_t3714538611 ** get_address_of_birdSound_2() { return &___birdSound_2; }
	inline void set_birdSound_2(AudioClip_t3714538611 * value)
	{
		___birdSound_2 = value;
		Il2CppCodeGenWriteBarrier(&___birdSound_2, value);
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(MainMenuController_t3530293396, ___source_3)); }
	inline AudioSource_t3628549054 * get_source_3() const { return ___source_3; }
	inline AudioSource_t3628549054 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(AudioSource_t3628549054 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier(&___source_3, value);
	}

	inline static int32_t get_offset_of_levelText_4() { return static_cast<int32_t>(offsetof(MainMenuController_t3530293396, ___levelText_4)); }
	inline Text_t3286458198 * get_levelText_4() const { return ___levelText_4; }
	inline Text_t3286458198 ** get_address_of_levelText_4() { return &___levelText_4; }
	inline void set_levelText_4(Text_t3286458198 * value)
	{
		___levelText_4 = value;
		Il2CppCodeGenWriteBarrier(&___levelText_4, value);
	}

	inline static int32_t get_offset_of_tilt_5() { return static_cast<int32_t>(offsetof(MainMenuController_t3530293396, ___tilt_5)); }
	inline float get_tilt_5() const { return ___tilt_5; }
	inline float* get_address_of_tilt_5() { return &___tilt_5; }
	inline void set_tilt_5(float value)
	{
		___tilt_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
