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

// Vuforia.StencilHideExcessAreaClipping
struct StencilHideExcessAreaClipping_t970709770_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t1278883054_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// UnityEngine.GameObject Vuforia.StencilHideExcessAreaClipping::CreateQuad(UnityEngine.GameObject,System.String,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Int32)
extern "C"  GameObject_t_184308134_0 * StencilHideExcessAreaClipping_CreateQuad_m1357798536_0 (StencilHideExcessAreaClipping_t970709770_0 * __this, GameObject_t_184308134_0 * ___parent, String_t* ___name, Vector3_t_725341337_0  ___position, Quaternion_t1989680039_0  ___rotation, Vector3_t_725341337_0  ___scale, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StencilHideExcessAreaClipping::HasCalculationDataChanged()
extern "C"  bool StencilHideExcessAreaClipping_HasCalculationDataChanged_m797995377_0 (StencilHideExcessAreaClipping_t970709770_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::.ctor(UnityEngine.GameObject,UnityEngine.Shader)
extern "C"  void StencilHideExcessAreaClipping__ctor_m88523436_0 (StencilHideExcessAreaClipping_t970709770_0 * __this, GameObject_t_184308134_0 * ___gameObject, Shader_t1278883054_0 * ___matteShader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::SetPlanesRenderingActive(System.Boolean)
extern "C"  void StencilHideExcessAreaClipping_SetPlanesRenderingActive_m825268558_0 (StencilHideExcessAreaClipping_t970709770_0 * __this, bool ___activeflag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StencilHideExcessAreaClipping::IsPlanesRenderingActive()
extern "C"  bool StencilHideExcessAreaClipping_IsPlanesRenderingActive_m303678439_0 (StencilHideExcessAreaClipping_t970709770_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnPreCull()
extern "C"  void StencilHideExcessAreaClipping_OnPreCull_m_1102029190_0 (StencilHideExcessAreaClipping_t970709770_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnPostRender()
extern "C"  void StencilHideExcessAreaClipping_OnPostRender_m1775310675_0 (StencilHideExcessAreaClipping_t970709770_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::Start()
extern "C"  void StencilHideExcessAreaClipping_Start_m654464390_0 (StencilHideExcessAreaClipping_t970709770_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::OnDestroy()
extern "C"  void StencilHideExcessAreaClipping_OnDestroy_m_1128800641_0 (StencilHideExcessAreaClipping_t970709770_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StencilHideExcessAreaClipping::Update(UnityEngine.Vector3)
extern "C"  void StencilHideExcessAreaClipping_Update_m449879346_0 (StencilHideExcessAreaClipping_t970709770_0 * __this, Vector3_t_725341337_0  ___planeOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
