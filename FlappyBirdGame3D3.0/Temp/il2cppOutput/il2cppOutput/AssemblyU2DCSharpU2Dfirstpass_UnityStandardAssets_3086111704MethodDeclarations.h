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
struct ThirdPersonCharacter_t3086111704;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::.ctor()
extern "C"  void ThirdPersonCharacter__ctor_m1684399469 (ThirdPersonCharacter_t3086111704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::Start()
extern "C"  void ThirdPersonCharacter_Start_m631537261 (ThirdPersonCharacter_t3086111704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::Move(UnityEngine.Vector3,System.Boolean,System.Boolean)
extern "C"  void ThirdPersonCharacter_Move_m805116849 (ThirdPersonCharacter_t3086111704 * __this, Vector3_t3525329789  ___move, bool ___crouch, bool ___jump, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::ScaleCapsuleForCrouching(System.Boolean)
extern "C"  void ThirdPersonCharacter_ScaleCapsuleForCrouching_m2735016624 (ThirdPersonCharacter_t3086111704 * __this, bool ___crouch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::PreventStandingInLowHeadroom()
extern "C"  void ThirdPersonCharacter_PreventStandingInLowHeadroom_m3233896093 (ThirdPersonCharacter_t3086111704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::UpdateAnimator(UnityEngine.Vector3)
extern "C"  void ThirdPersonCharacter_UpdateAnimator_m1125795570 (ThirdPersonCharacter_t3086111704 * __this, Vector3_t3525329789  ___move, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::HandleAirborneMovement()
extern "C"  void ThirdPersonCharacter_HandleAirborneMovement_m1006812864 (ThirdPersonCharacter_t3086111704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::HandleGroundedMovement(System.Boolean,System.Boolean)
extern "C"  void ThirdPersonCharacter_HandleGroundedMovement_m3373693618 (ThirdPersonCharacter_t3086111704 * __this, bool ___crouch, bool ___jump, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::ApplyExtraTurnRotation()
extern "C"  void ThirdPersonCharacter_ApplyExtraTurnRotation_m194746100 (ThirdPersonCharacter_t3086111704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::OnAnimatorMove()
extern "C"  void ThirdPersonCharacter_OnAnimatorMove_m328440782 (ThirdPersonCharacter_t3086111704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::CheckGroundStatus()
extern "C"  void ThirdPersonCharacter_CheckGroundStatus_m2685137100 (ThirdPersonCharacter_t3086111704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
