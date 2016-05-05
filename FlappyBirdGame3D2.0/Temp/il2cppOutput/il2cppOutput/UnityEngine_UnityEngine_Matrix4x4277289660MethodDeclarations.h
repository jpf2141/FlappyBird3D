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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C"  float Matrix4x4_get_Item_m2279862332 (Matrix4x4_t277289660 * __this, int32_t ___row, int32_t ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
extern "C"  void Matrix4x4_set_Item_m2343951137 (Matrix4x4_t277289660 * __this, int32_t ___row, int32_t ___column, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C"  float Matrix4x4_get_Item_m1280478331 (Matrix4x4_t277289660 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern "C"  void Matrix4x4_set_Item_m3979676448 (Matrix4x4_t277289660 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern "C"  int32_t Matrix4x4_GetHashCode_m4083477721 (Matrix4x4_t277289660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern "C"  bool Matrix4x4_Equals_m3534208385 (Matrix4x4_t277289660 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
extern "C"  Matrix4x4_t277289660  Matrix4x4_Inverse_m1483646919 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660  ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
extern "C"  void Matrix4x4_INTERNAL_CALL_Inverse_m362567117 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660 * ___m, Matrix4x4_t277289660 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern "C"  Matrix4x4_t277289660  Matrix4x4_get_inverse_m2596073482 (Matrix4x4_t277289660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C"  Vector4_t3525329790  Matrix4x4_GetColumn_m786071102 (Matrix4x4_t277289660 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Matrix4x4_MultiplyPoint3x4_m2198174902 (Matrix4x4_t277289660 * __this, Vector3_t3525329789  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
extern "C"  Matrix4x4_t277289660  Matrix4x4_Scale_m3563471884 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
extern "C"  Matrix4x4_t277289660  Matrix4x4_get_zero_m1808471152 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern "C"  Matrix4x4_t277289660  Matrix4x4_get_identity_m3946683782 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Matrix4x4_t277289660  Matrix4x4_TRS_m3596398659 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___pos, Quaternion_t1891715979  ___q, Vector3_t3525329789  ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Matrix4x4&)
extern "C"  void Matrix4x4_INTERNAL_CALL_TRS_m1769439979 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___pos, Quaternion_t1891715979 * ___q, Vector3_t3525329789 * ___s, Matrix4x4_t277289660 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString()
extern "C"  String_t* Matrix4x4_ToString_m294134723 (Matrix4x4_t277289660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  Matrix4x4_t277289660  Matrix4x4_Ortho_m3444991721 (Il2CppObject * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, float ___zNear, float ___zFar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::INTERNAL_CALL_Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,UnityEngine.Matrix4x4&)
extern "C"  void Matrix4x4_INTERNAL_CALL_Ortho_m2253237141 (Il2CppObject * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, float ___zNear, float ___zFar, Matrix4x4_t277289660 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C"  Matrix4x4_t277289660  Matrix4x4_op_Multiply_m4108203689 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660  ___lhs, Matrix4x4_t277289660  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C"  Vector4_t3525329790  Matrix4x4_op_Multiply_m314399977 (Il2CppObject * __this /* static, unused */, Matrix4x4_t277289660  ___lhs, Vector4_t3525329790  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Matrix4x4_t277289660;
struct Matrix4x4_t277289660_marshaled_pinvoke;

extern "C" void Matrix4x4_t277289660_marshal_pinvoke(const Matrix4x4_t277289660& unmarshaled, Matrix4x4_t277289660_marshaled_pinvoke& marshaled);
extern "C" void Matrix4x4_t277289660_marshal_pinvoke_back(const Matrix4x4_t277289660_marshaled_pinvoke& marshaled, Matrix4x4_t277289660& unmarshaled);
extern "C" void Matrix4x4_t277289660_marshal_pinvoke_cleanup(Matrix4x4_t277289660_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Matrix4x4_t277289660;
struct Matrix4x4_t277289660_marshaled_com;

extern "C" void Matrix4x4_t277289660_marshal_com(const Matrix4x4_t277289660& unmarshaled, Matrix4x4_t277289660_marshaled_com& marshaled);
extern "C" void Matrix4x4_t277289660_marshal_com_back(const Matrix4x4_t277289660_marshaled_com& marshaled, Matrix4x4_t277289660& unmarshaled);
extern "C" void Matrix4x4_t277289660_marshal_com_cleanup(Matrix4x4_t277289660_marshaled_com& marshaled);
