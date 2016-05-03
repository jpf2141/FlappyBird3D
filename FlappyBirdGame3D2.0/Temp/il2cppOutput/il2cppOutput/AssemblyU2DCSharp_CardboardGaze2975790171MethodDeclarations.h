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
struct CardboardGaze_t2975790171;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Camera
struct Camera_t3533968274;
// ICardboardGazeResponder
struct ICardboardGazeResponder_t4178628976;
// ICardboardGazePointer
struct ICardboardGazePointer_t396842795;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3012272455;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// System.Void CardboardGaze::.ctor()
extern "C"  void CardboardGaze__ctor_m3037274992 (CardboardGaze_t2975790171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject CardboardGaze::get_PointerObject()
extern "C"  GameObject_t4012695102 * CardboardGaze_get_PointerObject_m902076534 (CardboardGaze_t2975790171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardGaze::set_PointerObject(UnityEngine.GameObject)
extern "C"  void CardboardGaze_set_PointerObject_m3727013829 (CardboardGaze_t2975790171 * __this, GameObject_t4012695102 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CardboardGaze::get_cam()
extern "C"  Camera_t3533968274 * CardboardGaze_get_cam_m61648693 (CardboardGaze_t2975790171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardGaze::set_cam(UnityEngine.Camera)
extern "C"  void CardboardGaze_set_cam_m3478367236 (CardboardGaze_t2975790171 * __this, Camera_t3533968274 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardGaze::Awake()
extern "C"  void CardboardGaze_Awake_m3274880211 (CardboardGaze_t2975790171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardGaze::OnEnable()
extern "C"  void CardboardGaze_OnEnable_m3454840342 (CardboardGaze_t2975790171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardGaze::OnDisable()
extern "C"  void CardboardGaze_OnDisable_m166805463 (CardboardGaze_t2975790171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardGaze::LateUpdate()
extern "C"  void CardboardGaze_LateUpdate_m4196977891 (CardboardGaze_t2975790171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardGaze::HandleGaze()
extern "C"  void CardboardGaze_HandleGaze_m1799474721 (CardboardGaze_t2975790171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject CardboardGaze::FindGazeTarget(System.Single,ICardboardGazeResponder&,UnityEngine.Vector3&)
extern "C"  GameObject_t4012695102 * CardboardGaze_FindGazeTarget_m3553793958 (CardboardGaze_t2975790171 * __this, float ___radius, Il2CppObject ** ___responder, Vector3_t3525329789 * ___intersectPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardGaze::IsGazeNearObject(System.Single,UnityEngine.GameObject,UnityEngine.Vector3&)
extern "C"  bool CardboardGaze_IsGazeNearObject_m2578026352 (CardboardGaze_t2975790171 * __this, float ___radius, GameObject_t4012695102 * ___target, Vector3_t3525329789 * ___intersectPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardGaze::HandleTrigger()
extern "C"  void CardboardGaze_HandleTrigger_m2415170046 (CardboardGaze_t2975790171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ICardboardGazePointer CardboardGaze::<set_PointerObject>m__3(UnityEngine.MonoBehaviour)
extern "C"  Il2CppObject * CardboardGaze_U3Cset_PointerObjectU3Em__3_m4266074616 (Il2CppObject * __this /* static, unused */, MonoBehaviour_t3012272455 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardGaze::<set_PointerObject>m__4(ICardboardGazePointer)
extern "C"  bool CardboardGaze_U3Cset_PointerObjectU3Em__4_m3604060611 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
