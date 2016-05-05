#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProgressBar.ProgressBarBehaviour
struct ProgressBarBehaviour_t2517727609;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlappyBirdPilot
struct  FlappyBirdPilot_t1182160577  : public MonoBehaviour_t3012272455
{
public:
	// System.Single FlappyBirdPilot::score
	float ___score_5;
	// System.Single FlappyBirdPilot::health
	float ___health_6;
	// ProgressBar.ProgressBarBehaviour FlappyBirdPilot::healthBar
	ProgressBarBehaviour_t2517727609 * ___healthBar_7;
	// ProgressBar.ProgressBarBehaviour FlappyBirdPilot::scoreBar
	ProgressBarBehaviour_t2517727609 * ___scoreBar_8;
	// UnityEngine.UI.Text FlappyBirdPilot::levelText
	Text_t3286458198 * ___levelText_9;
	// UnityEngine.AudioClip FlappyBirdPilot::coinSound
	AudioClip_t3714538611 * ___coinSound_10;
	// UnityEngine.AudioClip FlappyBirdPilot::cloudSound
	AudioClip_t3714538611 * ___cloudSound_11;
	// UnityEngine.AudioClip FlappyBirdPilot::endGame
	AudioClip_t3714538611 * ___endGame_12;
	// UnityEngine.AudioClip FlappyBirdPilot::startGame
	AudioClip_t3714538611 * ___startGame_13;
	// UnityEngine.AudioSource FlappyBirdPilot::source
	AudioSource_t3628549054 * ___source_14;
	// UnityEngine.GameObject FlappyBirdPilot::joystick
	GameObject_t4012695102 * ___joystick_15;
	// System.Single FlappyBirdPilot::y_force
	float ___y_force_16;
	// System.Single FlappyBirdPilot::z_force
	float ___z_force_17;
	// System.Single FlappyBirdPilot::tilt
	float ___tilt_18;
	// System.Single FlappyBirdPilot::tiltNerfer
	float ___tiltNerfer_19;
	// System.Single FlappyBirdPilot::birdSpeed
	float ___birdSpeed_20;
	// System.Single FlappyBirdPilot::scaleMultiplier
	float ___scaleMultiplier_21;
	// System.Single FlappyBirdPilot::distanceScore
	float ___distanceScore_22;
	// System.Single FlappyBirdPilot::difficulty
	float ___difficulty_23;
	// UnityEngine.GameObject FlappyBirdPilot::stadium
	GameObject_t4012695102 * ___stadium_24;
	// System.Single FlappyBirdPilot::initial_x
	float ___initial_x_25;
	// System.Single FlappyBirdPilot::initial_y
	float ___initial_y_26;
	// System.Single FlappyBirdPilot::initial_z
	float ___initial_z_27;
	// System.Boolean FlappyBirdPilot::initial_x_set
	bool ___initial_x_set_28;
	// System.Boolean FlappyBirdPilot::initial_y_set
	bool ___initial_y_set_29;
	// System.Boolean FlappyBirdPilot::initial_z_set
	bool ___initial_z_set_30;
	// System.Single FlappyBirdPilot::y_steering_sensitivity
	float ___y_steering_sensitivity_31;
	// System.Single FlappyBirdPilot::z_steering_sensitivity
	float ___z_steering_sensitivity_32;
	// System.Single FlappyBirdPilot::x_steering_sensitivity
	float ___x_steering_sensitivity_33;

public:
	inline static int32_t get_offset_of_score_5() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___score_5)); }
	inline float get_score_5() const { return ___score_5; }
	inline float* get_address_of_score_5() { return &___score_5; }
	inline void set_score_5(float value)
	{
		___score_5 = value;
	}

	inline static int32_t get_offset_of_health_6() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___health_6)); }
	inline float get_health_6() const { return ___health_6; }
	inline float* get_address_of_health_6() { return &___health_6; }
	inline void set_health_6(float value)
	{
		___health_6 = value;
	}

	inline static int32_t get_offset_of_healthBar_7() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___healthBar_7)); }
	inline ProgressBarBehaviour_t2517727609 * get_healthBar_7() const { return ___healthBar_7; }
	inline ProgressBarBehaviour_t2517727609 ** get_address_of_healthBar_7() { return &___healthBar_7; }
	inline void set_healthBar_7(ProgressBarBehaviour_t2517727609 * value)
	{
		___healthBar_7 = value;
		Il2CppCodeGenWriteBarrier(&___healthBar_7, value);
	}

	inline static int32_t get_offset_of_scoreBar_8() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___scoreBar_8)); }
	inline ProgressBarBehaviour_t2517727609 * get_scoreBar_8() const { return ___scoreBar_8; }
	inline ProgressBarBehaviour_t2517727609 ** get_address_of_scoreBar_8() { return &___scoreBar_8; }
	inline void set_scoreBar_8(ProgressBarBehaviour_t2517727609 * value)
	{
		___scoreBar_8 = value;
		Il2CppCodeGenWriteBarrier(&___scoreBar_8, value);
	}

	inline static int32_t get_offset_of_levelText_9() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___levelText_9)); }
	inline Text_t3286458198 * get_levelText_9() const { return ___levelText_9; }
	inline Text_t3286458198 ** get_address_of_levelText_9() { return &___levelText_9; }
	inline void set_levelText_9(Text_t3286458198 * value)
	{
		___levelText_9 = value;
		Il2CppCodeGenWriteBarrier(&___levelText_9, value);
	}

	inline static int32_t get_offset_of_coinSound_10() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___coinSound_10)); }
	inline AudioClip_t3714538611 * get_coinSound_10() const { return ___coinSound_10; }
	inline AudioClip_t3714538611 ** get_address_of_coinSound_10() { return &___coinSound_10; }
	inline void set_coinSound_10(AudioClip_t3714538611 * value)
	{
		___coinSound_10 = value;
		Il2CppCodeGenWriteBarrier(&___coinSound_10, value);
	}

	inline static int32_t get_offset_of_cloudSound_11() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___cloudSound_11)); }
	inline AudioClip_t3714538611 * get_cloudSound_11() const { return ___cloudSound_11; }
	inline AudioClip_t3714538611 ** get_address_of_cloudSound_11() { return &___cloudSound_11; }
	inline void set_cloudSound_11(AudioClip_t3714538611 * value)
	{
		___cloudSound_11 = value;
		Il2CppCodeGenWriteBarrier(&___cloudSound_11, value);
	}

	inline static int32_t get_offset_of_endGame_12() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___endGame_12)); }
	inline AudioClip_t3714538611 * get_endGame_12() const { return ___endGame_12; }
	inline AudioClip_t3714538611 ** get_address_of_endGame_12() { return &___endGame_12; }
	inline void set_endGame_12(AudioClip_t3714538611 * value)
	{
		___endGame_12 = value;
		Il2CppCodeGenWriteBarrier(&___endGame_12, value);
	}

	inline static int32_t get_offset_of_startGame_13() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___startGame_13)); }
	inline AudioClip_t3714538611 * get_startGame_13() const { return ___startGame_13; }
	inline AudioClip_t3714538611 ** get_address_of_startGame_13() { return &___startGame_13; }
	inline void set_startGame_13(AudioClip_t3714538611 * value)
	{
		___startGame_13 = value;
		Il2CppCodeGenWriteBarrier(&___startGame_13, value);
	}

	inline static int32_t get_offset_of_source_14() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___source_14)); }
	inline AudioSource_t3628549054 * get_source_14() const { return ___source_14; }
	inline AudioSource_t3628549054 ** get_address_of_source_14() { return &___source_14; }
	inline void set_source_14(AudioSource_t3628549054 * value)
	{
		___source_14 = value;
		Il2CppCodeGenWriteBarrier(&___source_14, value);
	}

	inline static int32_t get_offset_of_joystick_15() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___joystick_15)); }
	inline GameObject_t4012695102 * get_joystick_15() const { return ___joystick_15; }
	inline GameObject_t4012695102 ** get_address_of_joystick_15() { return &___joystick_15; }
	inline void set_joystick_15(GameObject_t4012695102 * value)
	{
		___joystick_15 = value;
		Il2CppCodeGenWriteBarrier(&___joystick_15, value);
	}

	inline static int32_t get_offset_of_y_force_16() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___y_force_16)); }
	inline float get_y_force_16() const { return ___y_force_16; }
	inline float* get_address_of_y_force_16() { return &___y_force_16; }
	inline void set_y_force_16(float value)
	{
		___y_force_16 = value;
	}

	inline static int32_t get_offset_of_z_force_17() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___z_force_17)); }
	inline float get_z_force_17() const { return ___z_force_17; }
	inline float* get_address_of_z_force_17() { return &___z_force_17; }
	inline void set_z_force_17(float value)
	{
		___z_force_17 = value;
	}

	inline static int32_t get_offset_of_tilt_18() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___tilt_18)); }
	inline float get_tilt_18() const { return ___tilt_18; }
	inline float* get_address_of_tilt_18() { return &___tilt_18; }
	inline void set_tilt_18(float value)
	{
		___tilt_18 = value;
	}

	inline static int32_t get_offset_of_tiltNerfer_19() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___tiltNerfer_19)); }
	inline float get_tiltNerfer_19() const { return ___tiltNerfer_19; }
	inline float* get_address_of_tiltNerfer_19() { return &___tiltNerfer_19; }
	inline void set_tiltNerfer_19(float value)
	{
		___tiltNerfer_19 = value;
	}

	inline static int32_t get_offset_of_birdSpeed_20() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___birdSpeed_20)); }
	inline float get_birdSpeed_20() const { return ___birdSpeed_20; }
	inline float* get_address_of_birdSpeed_20() { return &___birdSpeed_20; }
	inline void set_birdSpeed_20(float value)
	{
		___birdSpeed_20 = value;
	}

	inline static int32_t get_offset_of_scaleMultiplier_21() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___scaleMultiplier_21)); }
	inline float get_scaleMultiplier_21() const { return ___scaleMultiplier_21; }
	inline float* get_address_of_scaleMultiplier_21() { return &___scaleMultiplier_21; }
	inline void set_scaleMultiplier_21(float value)
	{
		___scaleMultiplier_21 = value;
	}

	inline static int32_t get_offset_of_distanceScore_22() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___distanceScore_22)); }
	inline float get_distanceScore_22() const { return ___distanceScore_22; }
	inline float* get_address_of_distanceScore_22() { return &___distanceScore_22; }
	inline void set_distanceScore_22(float value)
	{
		___distanceScore_22 = value;
	}

	inline static int32_t get_offset_of_difficulty_23() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___difficulty_23)); }
	inline float get_difficulty_23() const { return ___difficulty_23; }
	inline float* get_address_of_difficulty_23() { return &___difficulty_23; }
	inline void set_difficulty_23(float value)
	{
		___difficulty_23 = value;
	}

	inline static int32_t get_offset_of_stadium_24() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___stadium_24)); }
	inline GameObject_t4012695102 * get_stadium_24() const { return ___stadium_24; }
	inline GameObject_t4012695102 ** get_address_of_stadium_24() { return &___stadium_24; }
	inline void set_stadium_24(GameObject_t4012695102 * value)
	{
		___stadium_24 = value;
		Il2CppCodeGenWriteBarrier(&___stadium_24, value);
	}

	inline static int32_t get_offset_of_initial_x_25() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___initial_x_25)); }
	inline float get_initial_x_25() const { return ___initial_x_25; }
	inline float* get_address_of_initial_x_25() { return &___initial_x_25; }
	inline void set_initial_x_25(float value)
	{
		___initial_x_25 = value;
	}

	inline static int32_t get_offset_of_initial_y_26() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___initial_y_26)); }
	inline float get_initial_y_26() const { return ___initial_y_26; }
	inline float* get_address_of_initial_y_26() { return &___initial_y_26; }
	inline void set_initial_y_26(float value)
	{
		___initial_y_26 = value;
	}

	inline static int32_t get_offset_of_initial_z_27() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___initial_z_27)); }
	inline float get_initial_z_27() const { return ___initial_z_27; }
	inline float* get_address_of_initial_z_27() { return &___initial_z_27; }
	inline void set_initial_z_27(float value)
	{
		___initial_z_27 = value;
	}

	inline static int32_t get_offset_of_initial_x_set_28() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___initial_x_set_28)); }
	inline bool get_initial_x_set_28() const { return ___initial_x_set_28; }
	inline bool* get_address_of_initial_x_set_28() { return &___initial_x_set_28; }
	inline void set_initial_x_set_28(bool value)
	{
		___initial_x_set_28 = value;
	}

	inline static int32_t get_offset_of_initial_y_set_29() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___initial_y_set_29)); }
	inline bool get_initial_y_set_29() const { return ___initial_y_set_29; }
	inline bool* get_address_of_initial_y_set_29() { return &___initial_y_set_29; }
	inline void set_initial_y_set_29(bool value)
	{
		___initial_y_set_29 = value;
	}

	inline static int32_t get_offset_of_initial_z_set_30() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___initial_z_set_30)); }
	inline bool get_initial_z_set_30() const { return ___initial_z_set_30; }
	inline bool* get_address_of_initial_z_set_30() { return &___initial_z_set_30; }
	inline void set_initial_z_set_30(bool value)
	{
		___initial_z_set_30 = value;
	}

	inline static int32_t get_offset_of_y_steering_sensitivity_31() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___y_steering_sensitivity_31)); }
	inline float get_y_steering_sensitivity_31() const { return ___y_steering_sensitivity_31; }
	inline float* get_address_of_y_steering_sensitivity_31() { return &___y_steering_sensitivity_31; }
	inline void set_y_steering_sensitivity_31(float value)
	{
		___y_steering_sensitivity_31 = value;
	}

	inline static int32_t get_offset_of_z_steering_sensitivity_32() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___z_steering_sensitivity_32)); }
	inline float get_z_steering_sensitivity_32() const { return ___z_steering_sensitivity_32; }
	inline float* get_address_of_z_steering_sensitivity_32() { return &___z_steering_sensitivity_32; }
	inline void set_z_steering_sensitivity_32(float value)
	{
		___z_steering_sensitivity_32 = value;
	}

	inline static int32_t get_offset_of_x_steering_sensitivity_33() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___x_steering_sensitivity_33)); }
	inline float get_x_steering_sensitivity_33() const { return ___x_steering_sensitivity_33; }
	inline float* get_address_of_x_steering_sensitivity_33() { return &___x_steering_sensitivity_33; }
	inline void set_x_steering_sensitivity_33(float value)
	{
		___x_steering_sensitivity_33 = value;
	}
};

struct FlappyBirdPilot_t1182160577_StaticFields
{
public:
	// System.Int32 FlappyBirdPilot::level
	int32_t ___level_2;
	// System.Boolean FlappyBirdPilot::easy
	bool ___easy_3;
	// System.Boolean FlappyBirdPilot::fromGame
	bool ___fromGame_4;

public:
	inline static int32_t get_offset_of_level_2() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577_StaticFields, ___level_2)); }
	inline int32_t get_level_2() const { return ___level_2; }
	inline int32_t* get_address_of_level_2() { return &___level_2; }
	inline void set_level_2(int32_t value)
	{
		___level_2 = value;
	}

	inline static int32_t get_offset_of_easy_3() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577_StaticFields, ___easy_3)); }
	inline bool get_easy_3() const { return ___easy_3; }
	inline bool* get_address_of_easy_3() { return &___easy_3; }
	inline void set_easy_3(bool value)
	{
		___easy_3 = value;
	}

	inline static int32_t get_offset_of_fromGame_4() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577_StaticFields, ___fromGame_4)); }
	inline bool get_fromGame_4() const { return ___fromGame_4; }
	inline bool* get_address_of_fromGame_4() { return &___fromGame_4; }
	inline void set_fromGame_4(bool value)
	{
		___fromGame_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
