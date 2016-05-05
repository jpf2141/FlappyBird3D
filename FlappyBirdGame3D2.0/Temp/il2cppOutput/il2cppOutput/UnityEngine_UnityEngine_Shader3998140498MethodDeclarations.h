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

// UnityEngine.Shader
struct Shader_t3998140498;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C"  Shader_t3998140498 * Shader_Find_m4048047578 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::EnableKeyword(System.String)
extern "C"  void Shader_EnableKeyword_m944528214 (Il2CppObject * __this /* static, unused */, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::DisableKeyword(System.String)
extern "C"  void Shader_DisableKeyword_m2163321765 (Il2CppObject * __this /* static, unused */, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalFloat(System.String,System.Single)
extern "C"  void Shader_SetGlobalFloat_m2785620148 (Il2CppObject * __this /* static, unused */, String_t* ___propertyName, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalFloat(System.Int32,System.Single)
extern "C"  void Shader_SetGlobalFloat_m3553472137 (Il2CppObject * __this /* static, unused */, int32_t ___nameID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalMatrix(System.String,UnityEngine.Matrix4x4)
extern "C"  void Shader_SetGlobalMatrix_m3693328362 (Il2CppObject * __this /* static, unused */, String_t* ___propertyName, Matrix4x4_t277289660  ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalMatrix(System.Int32,UnityEngine.Matrix4x4)
extern "C"  void Shader_SetGlobalMatrix_m4125037841 (Il2CppObject * __this /* static, unused */, int32_t ___nameID, Matrix4x4_t277289660  ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::INTERNAL_CALL_SetGlobalMatrix(System.Int32,UnityEngine.Matrix4x4&)
extern "C"  void Shader_INTERNAL_CALL_SetGlobalMatrix_m1567336922 (Il2CppObject * __this /* static, unused */, int32_t ___nameID, Matrix4x4_t277289660 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C"  int32_t Shader_PropertyToID_m3019342011 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
