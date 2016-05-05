#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProgressBar.ProgressBarBehaviour
struct ProgressBarBehaviour_t_897665510_0;
// UnityEngine.UI.Text
struct Text_t_204341102_0;
// UnityEngine.AudioClip
struct AudioClip_t719917725_0;
// UnityEngine.AudioSource
struct AudioSource_t812398632_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// FlappyBirdPilot
struct  FlappyBirdPilot_t2014773894_0  : public MonoBehaviour_t_92453903_0
{
	// System.Single FlappyBirdPilot::score
	float ___score_5;
	// System.Single FlappyBirdPilot::health
	float ___health_6;
	// ProgressBar.ProgressBarBehaviour FlappyBirdPilot::healthBar
	ProgressBarBehaviour_t_897665510_0 * ___healthBar_7;
	// ProgressBar.ProgressBarBehaviour FlappyBirdPilot::scoreBar
	ProgressBarBehaviour_t_897665510_0 * ___scoreBar_8;
	// UnityEngine.UI.Text FlappyBirdPilot::levelText
	Text_t_204341102_0 * ___levelText_9;
	// UnityEngine.AudioClip FlappyBirdPilot::coinSound
	AudioClip_t719917725_0 * ___coinSound_10;
	// UnityEngine.AudioClip FlappyBirdPilot::cloudSound
	AudioClip_t719917725_0 * ___cloudSound_11;
	// UnityEngine.AudioSource FlappyBirdPilot::source
	AudioSource_t812398632_0 * ___source_12;
	// UnityEngine.GameObject FlappyBirdPilot::joystick
	GameObject_t_184308134_0 * ___joystick_13;
	// System.Single FlappyBirdPilot::y_force
	float ___y_force_14;
	// System.Single FlappyBirdPilot::z_force
	float ___z_force_15;
	// System.Single FlappyBirdPilot::tilt
	float ___tilt_16;
	// System.Single FlappyBirdPilot::tiltNerfer
	float ___tiltNerfer_17;
	// System.Single FlappyBirdPilot::scaleMultiplier
	float ___scaleMultiplier_18;
	// System.Single FlappyBirdPilot::distanceScore
	float ___distanceScore_19;
	// System.Single FlappyBirdPilot::difficulty
	float ___difficulty_20;
	// UnityEngine.GameObject FlappyBirdPilot::stadium
	GameObject_t_184308134_0 * ___stadium_21;
	// System.Single FlappyBirdPilot::initial_x
	float ___initial_x_22;
	// System.Single FlappyBirdPilot::initial_y
	float ___initial_y_23;
	// System.Single FlappyBirdPilot::initial_z
	float ___initial_z_24;
	// System.Boolean FlappyBirdPilot::initial_x_set
	bool ___initial_x_set_25;
	// System.Boolean FlappyBirdPilot::initial_y_set
	bool ___initial_y_set_26;
	// System.Boolean FlappyBirdPilot::initial_z_set
	bool ___initial_z_set_27;
	// System.Single FlappyBirdPilot::y_steering_sensitivity
	float ___y_steering_sensitivity_28;
	// System.Single FlappyBirdPilot::z_steering_sensitivity
	float ___z_steering_sensitivity_29;
	// System.Single FlappyBirdPilot::x_steering_sensitivity
	float ___x_steering_sensitivity_30;
};
struct FlappyBirdPilot_t2014773894_0_StaticFields{
	// System.Int32 FlappyBirdPilot::level
	int32_t ___level_2;
	// System.Boolean FlappyBirdPilot::easy
	bool ___easy_3;
	// System.Boolean FlappyBirdPilot::fromGame
	bool ___fromGame_4;
};
