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

// CardboardPostRender
struct CardboardPostRender_t2005367980;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"

// System.Void CardboardPostRender::.ctor()
extern "C"  void CardboardPostRender__ctor_m1721374783 (CardboardPostRender_t2005367980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::.cctor()
extern "C"  void CardboardPostRender__cctor_m1340914510 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CardboardPostRender::get_cam()
extern "C"  Camera_t3533968274 * CardboardPostRender_get_cam_m3883106180 (CardboardPostRender_t2005367980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::set_cam(UnityEngine.Camera)
extern "C"  void CardboardPostRender_set_cam_m311501651 (CardboardPostRender_t2005367980 * __this, Camera_t3533968274 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::Reset()
extern "C"  void CardboardPostRender_Reset_m3662775020 (CardboardPostRender_t2005367980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::Awake()
extern "C"  void CardboardPostRender_Awake_m1958980002 (CardboardPostRender_t2005367980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::OnRenderObject()
extern "C"  void CardboardPostRender_OnRenderObject_m515791641 (CardboardPostRender_t2005367980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::RebuildDistortionMesh()
extern "C"  void CardboardPostRender_RebuildDistortionMesh_m383685954 (CardboardPostRender_t2005367980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::ComputeMeshPoints(System.Int32,System.Int32,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector2[]&)
extern "C"  void CardboardPostRender_ComputeMeshPoints_m2937191642 (Il2CppObject * __this /* static, unused */, int32_t ___width, int32_t ___height, bool ___distortVertices, Vector3U5BU5D_t3227571696** ___vertices, Vector2U5BU5D_t2741383957** ___tex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] CardboardPostRender::ComputeMeshColors(System.Int32,System.Int32,UnityEngine.Vector2[],System.Int32[],System.Boolean)
extern "C"  ColorU5BU5D_t3477081137* CardboardPostRender_ComputeMeshColors_m1050881162 (Il2CppObject * __this /* static, unused */, int32_t ___width, int32_t ___height, Vector2U5BU5D_t2741383957* ___tex, Int32U5BU5D_t1809983122* ___indices, bool ___distortVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] CardboardPostRender::ComputeMeshIndices(System.Int32,System.Int32,System.Boolean)
extern "C"  Int32U5BU5D_t1809983122* CardboardPostRender_ComputeMeshIndices_m1035625811 (Il2CppObject * __this /* static, unused */, int32_t ___width, int32_t ___height, bool ___distortVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawUILayer()
extern "C"  void CardboardPostRender_DrawUILayer_m762137462 (CardboardPostRender_t2005367980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::ComputeUIMatrix()
extern "C"  void CardboardPostRender_ComputeUIMatrix_m2498686985 (CardboardPostRender_t2005367980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawSettingsButton()
extern "C"  void CardboardPostRender_DrawSettingsButton_m129227646 (CardboardPostRender_t2005367980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawAlignmentMarker()
extern "C"  void CardboardPostRender_DrawAlignmentMarker_m2486849590 (CardboardPostRender_t2005367980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawVRBackButton()
extern "C"  void CardboardPostRender_DrawVRBackButton_m1542617854 (CardboardPostRender_t2005367980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
