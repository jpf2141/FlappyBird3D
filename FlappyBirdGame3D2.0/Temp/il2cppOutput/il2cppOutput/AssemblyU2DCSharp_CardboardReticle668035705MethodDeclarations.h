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

// CardboardReticle
struct CardboardReticle_t668035705_0;
// UnityEngine.Camera
struct Camera_t814710830_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void CardboardReticle::.ctor()
extern "C"  void CardboardReticle__ctor_m_634586435_0 (CardboardReticle_t668035705_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::Start()
extern "C"  void CardboardReticle_Start_m_1687448643_0 (CardboardReticle_t668035705_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnEnable()
extern "C"  void CardboardReticle_OnEnable_m_741836887_0 (CardboardReticle_t668035705_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnDisable()
extern "C"  void CardboardReticle_OnDisable_m_1081169756_0 (CardboardReticle_t668035705_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::Update()
extern "C"  void CardboardReticle_Update_m_765448208_0 (CardboardReticle_t668035705_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeEnabled()
extern "C"  void CardboardReticle_OnGazeEnabled_m_1717190344_0 (CardboardReticle_t668035705_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeDisabled()
extern "C"  void CardboardReticle_OnGazeDisabled_m_910870009_0 (CardboardReticle_t668035705_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeStart(UnityEngine.Camera,UnityEngine.GameObject,UnityEngine.Vector3,System.Boolean)
extern "C"  void CardboardReticle_OnGazeStart_m_737725687_0 (CardboardReticle_t668035705_0 * __this, Camera_t814710830_0 * ___camera, GameObject_t_184308134_0 * ___targetObject, Vector3_t_725341337_0  ___intersectionPosition, bool ___isInteractive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeStay(UnityEngine.Camera,UnityEngine.GameObject,UnityEngine.Vector3,System.Boolean)
extern "C"  void CardboardReticle_OnGazeStay_m1122725524_0 (CardboardReticle_t668035705_0 * __this, Camera_t814710830_0 * ___camera, GameObject_t_184308134_0 * ___targetObject, Vector3_t_725341337_0  ___intersectionPosition, bool ___isInteractive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeExit(UnityEngine.Camera,UnityEngine.GameObject)
extern "C"  void CardboardReticle_OnGazeExit_m_750424239_0 (CardboardReticle_t668035705_0 * __this, Camera_t814710830_0 * ___camera, GameObject_t_184308134_0 * ___targetObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeTriggerStart(UnityEngine.Camera)
extern "C"  void CardboardReticle_OnGazeTriggerStart_m_694793735_0 (CardboardReticle_t668035705_0 * __this, Camera_t814710830_0 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::OnGazeTriggerEnd(UnityEngine.Camera)
extern "C"  void CardboardReticle_OnGazeTriggerEnd_m428162162_0 (CardboardReticle_t668035705_0 * __this, Camera_t814710830_0 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::GetPointerRadius(System.Single&,System.Single&)
extern "C"  void CardboardReticle_GetPointerRadius_m_1306531130_0 (CardboardReticle_t668035705_0 * __this, float* ___innerRadius, float* ___outerRadius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::CreateReticleVertices()
extern "C"  void CardboardReticle_CreateReticleVertices_m1990317900_0 (CardboardReticle_t668035705_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::UpdateDiameters()
extern "C"  void CardboardReticle_UpdateDiameters_m_923200808_0 (CardboardReticle_t668035705_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardReticle::SetGazeTarget(UnityEngine.Vector3,System.Boolean)
extern "C"  void CardboardReticle_SetGazeTarget_m_1491836137_0 (CardboardReticle_t668035705_0 * __this, Vector3_t_725341337_0  ___target, bool ___interactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
