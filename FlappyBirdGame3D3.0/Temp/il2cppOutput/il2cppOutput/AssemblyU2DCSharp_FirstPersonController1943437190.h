#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t719917725_0;
// UnityEngine.AudioSource
struct AudioSource_t812398632_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// FirstPersonController
struct  FirstPersonController_t1943437190_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.AudioClip FirstPersonController::cloudSound
	AudioClip_t719917725_0 * ___cloudSound_2;
	// UnityEngine.AudioSource FirstPersonController::source
	AudioSource_t812398632_0 * ___source_3;
	// UnityEngine.GameObject FirstPersonController::flappybird
	GameObject_t_184308134_0 * ___flappybird_4;
	// System.Single FirstPersonController::delay
	float ___delay_5;
};
