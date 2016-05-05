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

// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t_884277190_0;
// UnityEngine.Camera
struct Camera_t814710830_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
extern "C"  void CurveControlledBob__ctor_m127163612_0 (CurveControlledBob_t_884277190_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
extern "C"  void CurveControlledBob_Setup_m_585841216_0 (CurveControlledBob_t_884277190_0 * __this, Camera_t814710830_0 * ___camera, float ___bobBaseInterval, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
extern "C"  Vector3_t_725341337_0  CurveControlledBob_DoHeadBob_m_1641112575_0 (CurveControlledBob_t_884277190_0 * __this, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
