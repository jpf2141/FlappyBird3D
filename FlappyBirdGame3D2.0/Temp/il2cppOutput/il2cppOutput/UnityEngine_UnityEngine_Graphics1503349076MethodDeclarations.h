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

// UnityEngine.Mesh
struct Mesh_t_982089418_0;
// UnityEngine.Texture
struct Texture_t1814018354_0;
// UnityEngine.Material
struct Material_t1701708784_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"
#include "UnityEngine_UnityEngine_InternalDrawTextureArgumen1216566917.h"
#include "UnityEngine_UnityEngine_RenderBuffer_1016476737.h"
#include "UnityEngine_UnityEngine_CubemapFace1077405851.h"

// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void Graphics_DrawMeshNow_m872452541_0 (Object_t * __this /* static, unused */, Mesh_t_982089418_0 * ___mesh, Vector3_t_725341337_0  ___position, Quaternion_t1989680039_0  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow1(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
extern "C"  void Graphics_Internal_DrawMeshNow1_m44339171_0 (Object_t * __this /* static, unused */, Mesh_t_982089418_0 * ___mesh, Vector3_t_725341337_0  ___position, Quaternion_t1989680039_0  ___rotation, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow1(UnityEngine.Mesh,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32)
extern "C"  void Graphics_INTERNAL_CALL_Internal_DrawMeshNow1_m_1809040850_0 (Object_t * __this /* static, unused */, Mesh_t_982089418_0 * ___mesh, Vector3_t_725341337_0 * ___position, Quaternion_t1989680039_0 * ___rotation, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color,UnityEngine.Material)
extern "C"  void Graphics_DrawTexture_m_1586988639_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___screenRect, Texture_t1814018354_0 * ___texture, Rect_t_981940947_0  ___sourceRect, int32_t ___leftBorder, int32_t ___rightBorder, int32_t ___topBorder, int32_t ___bottomBorder, Color_t_388944582_0  ___color, Material_t1701708784_0 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.InternalDrawTextureArguments&)
extern "C"  void Graphics_DrawTexture_m_1356916664_0 (Object_t * __this /* static, unused */, InternalDrawTextureArguments_t1216566917_0 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,UnityEngine.CubemapFace)
extern "C"  void Graphics_Internal_SetRTSimple_m_310903712_0 (Object_t * __this /* static, unused */, RenderBuffer_t_1016476737_0 * ___color, RenderBuffer_t_1016476737_0 * ___depth, int32_t ___mip, int32_t ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer,System.Int32,UnityEngine.CubemapFace)
extern "C"  void Graphics_SetRenderTargetImpl_m1430595897_0 (Object_t * __this /* static, unused */, RenderBuffer_t_1016476737_0  ___colorBuffer, RenderBuffer_t_1016476737_0  ___depthBuffer, int32_t ___mipLevel, int32_t ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer)
extern "C"  void Graphics_SetRenderTarget_m1691358557_0 (Object_t * __this /* static, unused */, RenderBuffer_t_1016476737_0  ___colorBuffer, RenderBuffer_t_1016476737_0  ___depthBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
