#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// FlappyBirdPilot
struct FlappyBirdPilot_t2014773894_0;
// UnityEngine.Collider
struct Collider_t770782909_0;
// UnityEngine.Rigidbody
struct Rigidbody_t_1022613340_0;

#include "codegen/il2cpp-codegen.h"

// System.Void FlappyBirdPilot::.ctor()
extern "C"  void FlappyBirdPilot__ctor_m1204845002_0 (FlappyBirdPilot_t2014773894_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlappyBirdPilot::.cctor()
extern "C"  void FlappyBirdPilot__cctor_m_1786606813_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlappyBirdPilot::Start()
extern "C"  void FlappyBirdPilot_Start_m151982794_0 (FlappyBirdPilot_t2014773894_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlappyBirdPilot::Update()
extern "C"  void FlappyBirdPilot_Update_m422351491_0 (FlappyBirdPilot_t2014773894_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlappyBirdPilot::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void FlappyBirdPilot_OnTriggerEnter_m_718701074_0 (FlappyBirdPilot_t2014773894_0 * __this, Collider_t770782909_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlappyBirdPilot::subHealth(System.Single)
extern "C"  void FlappyBirdPilot_subHealth_m_927824153_0 (FlappyBirdPilot_t2014773894_0 * __this, float ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlappyBirdPilot::addScore(System.Single)
extern "C"  void FlappyBirdPilot_addScore_m932435904_0 (FlappyBirdPilot_t2014773894_0 * __this, float ___increase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlappyBirdPilot::levelUp()
extern "C"  void FlappyBirdPilot_levelUp_m_1502911801_0 (FlappyBirdPilot_t2014773894_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlappyBirdPilot::checkHealth()
extern "C"  void FlappyBirdPilot_checkHealth_m371720780_0 (FlappyBirdPilot_t2014773894_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlappyBirdPilot::setSpeed()
extern "C"  void FlappyBirdPilot_setSpeed_m1421952351_0 (FlappyBirdPilot_t2014773894_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlappyBirdPilot::scaleBird()
extern "C"  void FlappyBirdPilot_scaleBird_m_44098581_0 (FlappyBirdPilot_t2014773894_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlappyBirdPilot::fly_y_axis(System.Single)
extern "C"  void FlappyBirdPilot_fly_y_axis_m934236990_0 (FlappyBirdPilot_t2014773894_0 * __this, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlappyBirdPilot::fly_z_axis(System.Single)
extern "C"  void FlappyBirdPilot_fly_z_axis_m1145587903_0 (FlappyBirdPilot_t2014773894_0 * __this, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FlappyBirdPilot::fly_x_axis(System.Single)
extern "C"  void FlappyBirdPilot_fly_x_axis_m722886077_0 (FlappyBirdPilot_t2014773894_0 * __this, float ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody FlappyBirdPilot::getRigidbody()
extern "C"  Rigidbody_t_1022613340_0 * FlappyBirdPilot_getRigidbody_m550276532_0 (FlappyBirdPilot_t2014773894_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
