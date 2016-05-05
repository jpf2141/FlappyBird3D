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

// CardboardEye
struct CardboardEye_t2174202011;
// StereoController
struct StereoController_t1637909972;
// CardboardHead
struct CardboardHead_t2975823030;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "AssemblyU2DCSharp_StereoController1637909972.h"

// System.Void CardboardEye::.ctor()
extern "C"  void CardboardEye__ctor_m1179500640 (CardboardEye_t2174202011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StereoController CardboardEye::get_Controller()
extern "C"  StereoController_t1637909972 * CardboardEye_get_Controller_m2696069810 (CardboardEye_t2174202011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead CardboardEye::get_Head()
extern "C"  CardboardHead_t2975823030 * CardboardEye_get_Head_m1430956586 (CardboardEye_t2174202011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CardboardEye::get_cam()
extern "C"  Camera_t3533968274 * CardboardEye_get_cam_m2658150467 (CardboardEye_t2174202011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::set_cam(UnityEngine.Camera)
extern "C"  void CardboardEye_set_cam_m462975220 (CardboardEye_t2174202011 * __this, Camera_t3533968274 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Awake()
extern "C"  void CardboardEye_Awake_m1417105859 (CardboardEye_t2174202011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Start()
extern "C"  void CardboardEye_Start_m126638432 (CardboardEye_t2174202011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::FixProjection(UnityEngine.Matrix4x4&)
extern "C"  void CardboardEye_FixProjection_m4263222484 (CardboardEye_t2174202011 * __this, Matrix4x4_t277289660 * ___proj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect CardboardEye::FixViewport(UnityEngine.Rect)
extern "C"  Rect_t1525428817  CardboardEye_FixViewport_m2735437788 (CardboardEye_t2174202011 * __this, Rect_t1525428817  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::UpdateStereoValues()
extern "C"  void CardboardEye_UpdateStereoValues_m833300871 (CardboardEye_t2174202011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::SetupStereo()
extern "C"  void CardboardEye_SetupStereo_m3656146771 (CardboardEye_t2174202011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::OnPreCull()
extern "C"  void CardboardEye_OnPreCull_m2149639508 (CardboardEye_t2174202011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::OnPostRender()
extern "C"  void CardboardEye_OnPostRender_m3545098809 (CardboardEye_t2174202011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::CopyCameraAndMakeSideBySide(StereoController,System.Single,System.Single)
extern "C"  void CardboardEye_CopyCameraAndMakeSideBySide_m669497188 (CardboardEye_t2174202011 * __this, StereoController_t1637909972 * ___controller, float ___parx, float ___pary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
