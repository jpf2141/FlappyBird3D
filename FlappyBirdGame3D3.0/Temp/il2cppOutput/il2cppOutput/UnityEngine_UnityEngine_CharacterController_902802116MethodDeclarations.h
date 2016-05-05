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

// UnityEngine.CharacterController
struct CharacterController_t_902802116_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_CollisionFlags1145113214.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
extern "C"  int32_t CharacterController_Move_m_1251946565_0 (CharacterController_t_902802116_0 * __this, Vector3_t_725341337_0  ___motion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::INTERNAL_CALL_Move(UnityEngine.CharacterController,UnityEngine.Vector3&)
extern "C"  int32_t CharacterController_INTERNAL_CALL_Move_m985801042_0 (Object_t * __this /* static, unused */, CharacterController_t_902802116_0 * ___self, Vector3_t_725341337_0 * ___motion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
extern "C"  bool CharacterController_get_isGrounded_m1739295843_0 (CharacterController_t_902802116_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.CharacterController::get_velocity()
extern "C"  Vector3_t_725341337_0  CharacterController_get_velocity_m1414499516_0 (CharacterController_t_902802116_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CharacterController::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C"  void CharacterController_INTERNAL_get_velocity_m257673357_0 (CharacterController_t_902802116_0 * __this, Vector3_t_725341337_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.CharacterController::get_radius()
extern "C"  float CharacterController_get_radius_m_1364935841_0 (CharacterController_t_902802116_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.CharacterController::get_height()
extern "C"  float CharacterController_get_height_m2077757108_0 (CharacterController_t_902802116_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
