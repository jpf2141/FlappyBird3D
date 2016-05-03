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
	// System.Int32 FlappyBirdPilot::level
	int32_t ___level_2;
	// System.Single FlappyBirdPilot::score
	float ___score_3;
	// System.Single FlappyBirdPilot::health
	float ___health_4;
	// ProgressBar.ProgressBarBehaviour FlappyBirdPilot::healthBar
	ProgressBarBehaviour_t2517727609 * ___healthBar_5;
	// ProgressBar.ProgressBarBehaviour FlappyBirdPilot::scoreBar
	ProgressBarBehaviour_t2517727609 * ___scoreBar_6;
	// UnityEngine.UI.Text FlappyBirdPilot::levelText
	Text_t3286458198 * ___levelText_7;
	// UnityEngine.GameObject FlappyBirdPilot::joystick
	GameObject_t4012695102 * ___joystick_8;
	// System.Single FlappyBirdPilot::y_force
	float ___y_force_9;
	// System.Single FlappyBirdPilot::z_force
	float ___z_force_10;
	// System.Single FlappyBirdPilot::tilt
	float ___tilt_11;
	// System.Single FlappyBirdPilot::scaleMultiplier
	float ___scaleMultiplier_12;
	// System.Single FlappyBirdPilot::distanceScore
	float ___distanceScore_13;
	// System.Single FlappyBirdPilot::difficulty
	float ___difficulty_14;
	// UnityEngine.GameObject FlappyBirdPilot::stadium
	GameObject_t4012695102 * ___stadium_15;
	// System.Single FlappyBirdPilot::initial_x
	float ___initial_x_16;
	// System.Single FlappyBirdPilot::initial_y
	float ___initial_y_17;
	// System.Single FlappyBirdPilot::initial_z
	float ___initial_z_18;
	// System.Boolean FlappyBirdPilot::initial_x_set
	bool ___initial_x_set_19;
	// System.Boolean FlappyBirdPilot::initial_y_set
	bool ___initial_y_set_20;
	// System.Boolean FlappyBirdPilot::initial_z_set
	bool ___initial_z_set_21;
	// System.Single FlappyBirdPilot::y_steering_sensitivity
	float ___y_steering_sensitivity_22;
	// System.Single FlappyBirdPilot::z_steering_sensitivity
	float ___z_steering_sensitivity_23;
	// System.Single FlappyBirdPilot::x_steering_sensitivity
	float ___x_steering_sensitivity_24;

public:
	inline static int32_t get_offset_of_level_2() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___level_2)); }
	inline int32_t get_level_2() const { return ___level_2; }
	inline int32_t* get_address_of_level_2() { return &___level_2; }
	inline void set_level_2(int32_t value)
	{
		___level_2 = value;
	}

	inline static int32_t get_offset_of_score_3() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___score_3)); }
	inline float get_score_3() const { return ___score_3; }
	inline float* get_address_of_score_3() { return &___score_3; }
	inline void set_score_3(float value)
	{
		___score_3 = value;
	}

	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___health_4)); }
	inline float get_health_4() const { return ___health_4; }
	inline float* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(float value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_healthBar_5() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___healthBar_5)); }
	inline ProgressBarBehaviour_t2517727609 * get_healthBar_5() const { return ___healthBar_5; }
	inline ProgressBarBehaviour_t2517727609 ** get_address_of_healthBar_5() { return &___healthBar_5; }
	inline void set_healthBar_5(ProgressBarBehaviour_t2517727609 * value)
	{
		___healthBar_5 = value;
		Il2CppCodeGenWriteBarrier(&___healthBar_5, value);
	}

	inline static int32_t get_offset_of_scoreBar_6() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___scoreBar_6)); }
	inline ProgressBarBehaviour_t2517727609 * get_scoreBar_6() const { return ___scoreBar_6; }
	inline ProgressBarBehaviour_t2517727609 ** get_address_of_scoreBar_6() { return &___scoreBar_6; }
	inline void set_scoreBar_6(ProgressBarBehaviour_t2517727609 * value)
	{
		___scoreBar_6 = value;
		Il2CppCodeGenWriteBarrier(&___scoreBar_6, value);
	}

	inline static int32_t get_offset_of_levelText_7() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___levelText_7)); }
	inline Text_t3286458198 * get_levelText_7() const { return ___levelText_7; }
	inline Text_t3286458198 ** get_address_of_levelText_7() { return &___levelText_7; }
	inline void set_levelText_7(Text_t3286458198 * value)
	{
		___levelText_7 = value;
		Il2CppCodeGenWriteBarrier(&___levelText_7, value);
	}

	inline static int32_t get_offset_of_joystick_8() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___joystick_8)); }
	inline GameObject_t4012695102 * get_joystick_8() const { return ___joystick_8; }
	inline GameObject_t4012695102 ** get_address_of_joystick_8() { return &___joystick_8; }
	inline void set_joystick_8(GameObject_t4012695102 * value)
	{
		___joystick_8 = value;
		Il2CppCodeGenWriteBarrier(&___joystick_8, value);
	}

	inline static int32_t get_offset_of_y_force_9() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___y_force_9)); }
	inline float get_y_force_9() const { return ___y_force_9; }
	inline float* get_address_of_y_force_9() { return &___y_force_9; }
	inline void set_y_force_9(float value)
	{
		___y_force_9 = value;
	}

	inline static int32_t get_offset_of_z_force_10() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___z_force_10)); }
	inline float get_z_force_10() const { return ___z_force_10; }
	inline float* get_address_of_z_force_10() { return &___z_force_10; }
	inline void set_z_force_10(float value)
	{
		___z_force_10 = value;
	}

	inline static int32_t get_offset_of_tilt_11() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___tilt_11)); }
	inline float get_tilt_11() const { return ___tilt_11; }
	inline float* get_address_of_tilt_11() { return &___tilt_11; }
	inline void set_tilt_11(float value)
	{
		___tilt_11 = value;
	}

	inline static int32_t get_offset_of_scaleMultiplier_12() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___scaleMultiplier_12)); }
	inline float get_scaleMultiplier_12() const { return ___scaleMultiplier_12; }
	inline float* get_address_of_scaleMultiplier_12() { return &___scaleMultiplier_12; }
	inline void set_scaleMultiplier_12(float value)
	{
		___scaleMultiplier_12 = value;
	}

	inline static int32_t get_offset_of_distanceScore_13() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___distanceScore_13)); }
	inline float get_distanceScore_13() const { return ___distanceScore_13; }
	inline float* get_address_of_distanceScore_13() { return &___distanceScore_13; }
	inline void set_distanceScore_13(float value)
	{
		___distanceScore_13 = value;
	}

	inline static int32_t get_offset_of_difficulty_14() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___difficulty_14)); }
	inline float get_difficulty_14() const { return ___difficulty_14; }
	inline float* get_address_of_difficulty_14() { return &___difficulty_14; }
	inline void set_difficulty_14(float value)
	{
		___difficulty_14 = value;
	}

	inline static int32_t get_offset_of_stadium_15() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___stadium_15)); }
	inline GameObject_t4012695102 * get_stadium_15() const { return ___stadium_15; }
	inline GameObject_t4012695102 ** get_address_of_stadium_15() { return &___stadium_15; }
	inline void set_stadium_15(GameObject_t4012695102 * value)
	{
		___stadium_15 = value;
		Il2CppCodeGenWriteBarrier(&___stadium_15, value);
	}

	inline static int32_t get_offset_of_initial_x_16() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___initial_x_16)); }
	inline float get_initial_x_16() const { return ___initial_x_16; }
	inline float* get_address_of_initial_x_16() { return &___initial_x_16; }
	inline void set_initial_x_16(float value)
	{
		___initial_x_16 = value;
	}

	inline static int32_t get_offset_of_initial_y_17() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___initial_y_17)); }
	inline float get_initial_y_17() const { return ___initial_y_17; }
	inline float* get_address_of_initial_y_17() { return &___initial_y_17; }
	inline void set_initial_y_17(float value)
	{
		___initial_y_17 = value;
	}

	inline static int32_t get_offset_of_initial_z_18() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___initial_z_18)); }
	inline float get_initial_z_18() const { return ___initial_z_18; }
	inline float* get_address_of_initial_z_18() { return &___initial_z_18; }
	inline void set_initial_z_18(float value)
	{
		___initial_z_18 = value;
	}

	inline static int32_t get_offset_of_initial_x_set_19() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___initial_x_set_19)); }
	inline bool get_initial_x_set_19() const { return ___initial_x_set_19; }
	inline bool* get_address_of_initial_x_set_19() { return &___initial_x_set_19; }
	inline void set_initial_x_set_19(bool value)
	{
		___initial_x_set_19 = value;
	}

	inline static int32_t get_offset_of_initial_y_set_20() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___initial_y_set_20)); }
	inline bool get_initial_y_set_20() const { return ___initial_y_set_20; }
	inline bool* get_address_of_initial_y_set_20() { return &___initial_y_set_20; }
	inline void set_initial_y_set_20(bool value)
	{
		___initial_y_set_20 = value;
	}

	inline static int32_t get_offset_of_initial_z_set_21() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___initial_z_set_21)); }
	inline bool get_initial_z_set_21() const { return ___initial_z_set_21; }
	inline bool* get_address_of_initial_z_set_21() { return &___initial_z_set_21; }
	inline void set_initial_z_set_21(bool value)
	{
		___initial_z_set_21 = value;
	}

	inline static int32_t get_offset_of_y_steering_sensitivity_22() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___y_steering_sensitivity_22)); }
	inline float get_y_steering_sensitivity_22() const { return ___y_steering_sensitivity_22; }
	inline float* get_address_of_y_steering_sensitivity_22() { return &___y_steering_sensitivity_22; }
	inline void set_y_steering_sensitivity_22(float value)
	{
		___y_steering_sensitivity_22 = value;
	}

	inline static int32_t get_offset_of_z_steering_sensitivity_23() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___z_steering_sensitivity_23)); }
	inline float get_z_steering_sensitivity_23() const { return ___z_steering_sensitivity_23; }
	inline float* get_address_of_z_steering_sensitivity_23() { return &___z_steering_sensitivity_23; }
	inline void set_z_steering_sensitivity_23(float value)
	{
		___z_steering_sensitivity_23 = value;
	}

	inline static int32_t get_offset_of_x_steering_sensitivity_24() { return static_cast<int32_t>(offsetof(FlappyBirdPilot_t1182160577, ___x_steering_sensitivity_24)); }
	inline float get_x_steering_sensitivity_24() const { return ___x_steering_sensitivity_24; }
	inline float* get_address_of_x_steering_sensitivity_24() { return &___x_steering_sensitivity_24; }
	inline void set_x_steering_sensitivity_24(float value)
	{
		___x_steering_sensitivity_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
