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

// UnityStandardAssets.Utility.CameraRefocus
struct CameraRefocus_t_629711682_0;
// UnityEngine.Camera
struct Camera_t814710830_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void UnityStandardAssets.Utility.CameraRefocus::.ctor(UnityEngine.Camera,UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void CameraRefocus__ctor_m352762240_0 (CameraRefocus_t_629711682_0 * __this, Camera_t814710830_0 * ___camera, Transform_t1584899523_0 * ___parent, Vector3_t_725341337_0  ___origCameraPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeCamera(UnityEngine.Camera)
extern "C"  void CameraRefocus_ChangeCamera_m_44903861_0 (CameraRefocus_t_629711682_0 * __this, Camera_t814710830_0 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeParent(UnityEngine.Transform)
extern "C"  void CameraRefocus_ChangeParent_m1964577041_0 (CameraRefocus_t_629711682_0 * __this, Transform_t1584899523_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::GetFocusPoint()
extern "C"  void CameraRefocus_GetFocusPoint_m2103529598_0 (CameraRefocus_t_629711682_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::SetFocusPoint()
extern "C"  void CameraRefocus_SetFocusPoint_m_1280685174_0 (CameraRefocus_t_629711682_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
