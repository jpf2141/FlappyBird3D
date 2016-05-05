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

// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
struct ThirdPersonCharacter_t945841027_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::.ctor()
extern "C"  void ThirdPersonCharacter__ctor_m1684399469_0 (ThirdPersonCharacter_t945841027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::Start()
extern "C"  void ThirdPersonCharacter_Start_m631537261_0 (ThirdPersonCharacter_t945841027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::Move(UnityEngine.Vector3,System.Boolean,System.Boolean)
extern "C"  void ThirdPersonCharacter_Move_m805116849_0 (ThirdPersonCharacter_t945841027_0 * __this, Vector3_t_725341337_0  ___move, bool ___crouch, bool ___jump, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::ScaleCapsuleForCrouching(System.Boolean)
extern "C"  void ThirdPersonCharacter_ScaleCapsuleForCrouching_m_1559950672_0 (ThirdPersonCharacter_t945841027_0 * __this, bool ___crouch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::PreventStandingInLowHeadroom()
extern "C"  void ThirdPersonCharacter_PreventStandingInLowHeadroom_m_1061071203_0 (ThirdPersonCharacter_t945841027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::UpdateAnimator(UnityEngine.Vector3)
extern "C"  void ThirdPersonCharacter_UpdateAnimator_m1125795570_0 (ThirdPersonCharacter_t945841027_0 * __this, Vector3_t_725341337_0  ___move, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::HandleAirborneMovement()
extern "C"  void ThirdPersonCharacter_HandleAirborneMovement_m1006812864_0 (ThirdPersonCharacter_t945841027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::HandleGroundedMovement(System.Boolean,System.Boolean)
extern "C"  void ThirdPersonCharacter_HandleGroundedMovement_m_921273678_0 (ThirdPersonCharacter_t945841027_0 * __this, bool ___crouch, bool ___jump, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::ApplyExtraTurnRotation()
extern "C"  void ThirdPersonCharacter_ApplyExtraTurnRotation_m194746100_0 (ThirdPersonCharacter_t945841027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::OnAnimatorMove()
extern "C"  void ThirdPersonCharacter_OnAnimatorMove_m328440782_0 (ThirdPersonCharacter_t945841027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::CheckGroundStatus()
extern "C"  void ThirdPersonCharacter_CheckGroundStatus_m_1609830196_0 (ThirdPersonCharacter_t945841027_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
