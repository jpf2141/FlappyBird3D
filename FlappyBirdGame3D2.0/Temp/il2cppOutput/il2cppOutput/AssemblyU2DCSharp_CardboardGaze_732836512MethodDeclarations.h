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

// CardboardGaze
struct CardboardGaze_t_732836512_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.Camera
struct Camera_t814710830_0;
// ICardboardGazeResponder
struct ICardboardGazeResponder_t1501554741_0;
// ICardboardGazePointer
struct ICardboardGazePointer_t268917552_0;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t_92453903_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void CardboardGaze::.ctor()
extern "C"  void CardboardGaze__ctor_m_1257692304_0 (CardboardGaze_t_732836512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject CardboardGaze::get_PointerObject()
extern "C"  GameObject_t_184308134_0 * CardboardGaze_get_PointerObject_m902076534_0 (CardboardGaze_t_732836512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardGaze::set_PointerObject(UnityEngine.GameObject)
extern "C"  void CardboardGaze_set_PointerObject_m_567953467_0 (CardboardGaze_t_732836512_0 * __this, GameObject_t_184308134_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CardboardGaze::get_cam()
extern "C"  Camera_t814710830_0 * CardboardGaze_get_cam_m61648693_0 (CardboardGaze_t_732836512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardGaze::set_cam(UnityEngine.Camera)
extern "C"  void CardboardGaze_set_cam_m_816600060_0 (CardboardGaze_t_732836512_0 * __this, Camera_t814710830_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardGaze::Awake()
extern "C"  void CardboardGaze_Awake_m_1020087085_0 (CardboardGaze_t_732836512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardGaze::OnEnable()
extern "C"  void CardboardGaze_OnEnable_m_840126954_0 (CardboardGaze_t_732836512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardGaze::OnDisable()
extern "C"  void CardboardGaze_OnDisable_m166805463_0 (CardboardGaze_t_732836512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardGaze::LateUpdate()
extern "C"  void CardboardGaze_LateUpdate_m_97989405_0 (CardboardGaze_t_732836512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardGaze::HandleGaze()
extern "C"  void CardboardGaze_HandleGaze_m1799474721_0 (CardboardGaze_t_732836512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject CardboardGaze::FindGazeTarget(System.Single,ICardboardGazeResponder&,UnityEngine.Vector3&)
extern "C"  GameObject_t_184308134_0 * CardboardGaze_FindGazeTarget_m_741173338_0 (CardboardGaze_t_732836512_0 * __this, float ___radius, Object_t ** ___responder, Vector3_t_725341337_0 * ___intersectPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardGaze::IsGazeNearObject(System.Single,UnityEngine.GameObject,UnityEngine.Vector3&)
extern "C"  bool CardboardGaze_IsGazeNearObject_m_1716940944_0 (CardboardGaze_t_732836512_0 * __this, float ___radius, GameObject_t_184308134_0 * ___target, Vector3_t_725341337_0 * ___intersectPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardGaze::HandleTrigger()
extern "C"  void CardboardGaze_HandleTrigger_m_1879797250_0 (CardboardGaze_t_732836512_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICardboardGazePointer CardboardGaze::<set_PointerObject>m__3(UnityEngine.MonoBehaviour)
extern "C"  Object_t * CardboardGaze_U3Cset_PointerObjectU3Em__3_m_28892680_0 (Object_t * __this /* static, unused */, MonoBehaviour_t_92453903_0 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardGaze::<set_PointerObject>m__4(ICardboardGazePointer)
extern "C"  bool CardboardGaze_U3Cset_PointerObjectU3Em__4_m_690906685_0 (Object_t * __this /* static, unused */, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
