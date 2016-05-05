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

// MutablePose3D
struct MutablePose3D_t1273683304;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Void MutablePose3D::.ctor()
extern "C"  void MutablePose3D__ctor_m109975811 (MutablePose3D_t1273683304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void MutablePose3D_Set_m735260187 (MutablePose3D_t1273683304 * __this, Vector3_t3525329789  ___position, Quaternion_t1891715979  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::Set(UnityEngine.Matrix4x4)
extern "C"  void MutablePose3D_Set_m1451198039 (MutablePose3D_t1273683304 * __this, Matrix4x4_t277289660  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::SetRightHanded(UnityEngine.Matrix4x4)
extern "C"  void MutablePose3D_SetRightHanded_m1198386545 (MutablePose3D_t1273683304 * __this, Matrix4x4_t277289660  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
