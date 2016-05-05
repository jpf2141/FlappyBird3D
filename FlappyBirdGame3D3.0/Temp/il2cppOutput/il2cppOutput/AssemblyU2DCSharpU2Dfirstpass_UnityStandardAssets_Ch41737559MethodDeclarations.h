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

// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t41737559_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::.ctor()
extern "C"  void MouseLook__ctor_m_1775245793_0 (MouseLook_t41737559_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::Init(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  void MouseLook_Init_m2111907455_0 (MouseLook_t41737559_0 * __this, Transform_t1584899523_0 * ___character, Transform_t1584899523_0 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::LookRotation(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  void MouseLook_LookRotation_m203295090_0 (MouseLook_t41737559_0 * __this, Transform_t1584899523_0 * ___character, Transform_t1584899523_0 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::SetCursorLock(System.Boolean)
extern "C"  void MouseLook_SetCursorLock_m1720985495_0 (MouseLook_t41737559_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::UpdateCursorLock()
extern "C"  void MouseLook_UpdateCursorLock_m_1990314481_0 (MouseLook_t41737559_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::InternalLockUpdate()
extern "C"  void MouseLook_InternalLockUpdate_m508797046_0 (MouseLook_t41737559_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::ClampRotationAroundXAxis(UnityEngine.Quaternion)
extern "C"  Quaternion_t1989680039_0  MouseLook_ClampRotationAroundXAxis_m668812179_0 (MouseLook_t41737559_0 * __this, Quaternion_t1989680039_0  ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
