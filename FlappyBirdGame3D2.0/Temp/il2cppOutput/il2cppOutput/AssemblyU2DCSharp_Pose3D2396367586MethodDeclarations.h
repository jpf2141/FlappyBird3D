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

// Pose3D
struct Pose3D_t2396367586;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Void Pose3D::.ctor()
extern "C"  void Pose3D__ctor_m184997881 (Pose3D_t2396367586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void Pose3D__ctor_m2222637201 (Pose3D_t2396367586 * __this, Vector3_t3525329789  ___position, Quaternion_t1891715979  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.ctor(UnityEngine.Matrix4x4)
extern "C"  void Pose3D__ctor_m3211564577 (Pose3D_t2396367586 * __this, Matrix4x4_t277289660  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.cctor()
extern "C"  void Pose3D__cctor_m957870804 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pose3D::get_Position()
extern "C"  Vector3_t3525329789  Pose3D_get_Position_m3008028055 (Pose3D_t2396367586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Position(UnityEngine.Vector3)
extern "C"  void Pose3D_set_Position_m868383016 (Pose3D_t2396367586 * __this, Vector3_t3525329789  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Pose3D::get_Orientation()
extern "C"  Quaternion_t1891715979  Pose3D_get_Orientation_m114671670 (Pose3D_t2396367586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Orientation(UnityEngine.Quaternion)
extern "C"  void Pose3D_set_Orientation_m1189478037 (Pose3D_t2396367586 * __this, Quaternion_t1891715979  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Pose3D::get_Matrix()
extern "C"  Matrix4x4_t277289660  Pose3D_get_Matrix_m490356496 (Pose3D_t2396367586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Matrix(UnityEngine.Matrix4x4)
extern "C"  void Pose3D_set_Matrix_m2538359473 (Pose3D_t2396367586 * __this, Matrix4x4_t277289660  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Pose3D::get_RightHandedMatrix()
extern "C"  Matrix4x4_t277289660  Pose3D_get_RightHandedMatrix_m3929304542 (Pose3D_t2396367586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void Pose3D_Set_m1511997201 (Pose3D_t2396367586 * __this, Vector3_t3525329789  ___position, Quaternion_t1891715979  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::Set(UnityEngine.Matrix4x4)
extern "C"  void Pose3D_Set_m27658145 (Pose3D_t2396367586 * __this, Matrix4x4_t277289660  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
