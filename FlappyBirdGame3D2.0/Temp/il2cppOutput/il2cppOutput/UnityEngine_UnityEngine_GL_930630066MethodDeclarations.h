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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"

// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
extern "C"  void GL_Vertex3_m_603111712_0 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Vertex(UnityEngine.Vector3)
extern "C"  void GL_Vertex_m1061829497_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_Vertex(UnityEngine.Vector3&)
extern "C"  void GL_INTERNAL_CALL_Vertex_m1736463730_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0 * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C"  void GL_Begin_m_1205014496_0 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::End()
extern "C"  void GL_End_m2013837889_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadOrtho()
extern "C"  void GL_LoadOrtho_m1297524312_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadPixelMatrixArgs(System.Single,System.Single,System.Single,System.Single)
extern "C"  void GL_LoadPixelMatrixArgs_m1248760214_0 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadPixelMatrix(System.Single,System.Single,System.Single,System.Single)
extern "C"  void GL_LoadPixelMatrix_m_602773261_0 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::MultMatrix(UnityEngine.Matrix4x4)
extern "C"  void GL_MultMatrix_m1618741133_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_MultMatrix(UnityEngine.Matrix4x4&)
extern "C"  void GL_INTERNAL_CALL_MultMatrix_m1564496030_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PushMatrix()
extern "C"  void GL_PushMatrix_m626765559_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PopMatrix()
extern "C"  void GL_PopMatrix_m_1221644968_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::SetRevertBackfacing(System.Boolean)
extern "C"  void GL_SetRevertBackfacing_m2013077540_0 (Object_t * __this /* static, unused */, bool ___revertBackFaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
extern "C"  void GL_Clear_m_1313983565_0 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t_388944582_0  ___backgroundColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C"  void GL_Clear_m_1321285288_0 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t_388944582_0  ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C"  void GL_Internal_Clear_m_1266061404_0 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t_388944582_0  ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
extern "C"  void GL_INTERNAL_CALL_Internal_Clear_m_723374831_0 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t_388944582_0 * ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::IssuePluginEvent(System.Int32)
extern "C"  void GL_IssuePluginEvent_m_1990728357_0 (Object_t * __this /* static, unused */, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
