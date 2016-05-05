#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1701708784_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// CardboardReticle
struct  CardboardReticle_t668035705_0  : public MonoBehaviour_t_92453903_0
{
	// System.Int32 CardboardReticle::reticleSegments
	int32_t ___reticleSegments_7;
	// System.Single CardboardReticle::reticleGrowthSpeed
	float ___reticleGrowthSpeed_8;
	// UnityEngine.Material CardboardReticle::materialComp
	Material_t1701708784_0 * ___materialComp_9;
	// UnityEngine.GameObject CardboardReticle::targetObj
	GameObject_t_184308134_0 * ___targetObj_10;
	// System.Single CardboardReticle::reticleInnerAngle
	float ___reticleInnerAngle_11;
	// System.Single CardboardReticle::reticleOuterAngle
	float ___reticleOuterAngle_12;
	// System.Single CardboardReticle::reticleDistanceInMeters
	float ___reticleDistanceInMeters_13;
	// System.Single CardboardReticle::reticleInnerDiameter
	float ___reticleInnerDiameter_14;
	// System.Single CardboardReticle::reticleOuterDiameter
	float ___reticleOuterDiameter_15;
};
