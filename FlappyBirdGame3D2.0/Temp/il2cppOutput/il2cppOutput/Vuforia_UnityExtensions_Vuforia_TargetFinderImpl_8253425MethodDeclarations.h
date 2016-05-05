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

// Vuforia.TargetFinderImpl
struct TargetFinderImpl_t_8253425_0;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult>
struct IEnumerable_1_t_932500327_0;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t_440988281_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget>
struct IEnumerable_1_t_179436485_0;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_InitSt107176065.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_Update_90460056.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_Filte1510709787.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_TargetS19459318.h"

// System.Void Vuforia.TargetFinderImpl::.ctor()
extern "C"  void TargetFinderImpl__ctor_m_468407193_0 (TargetFinderImpl_t_8253425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::Finalize()
extern "C"  void TargetFinderImpl_Finalize_m132564635_0 (TargetFinderImpl_t_8253425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::StartInit(System.String,System.String)
extern "C"  bool TargetFinderImpl_StartInit_m829099001_0 (TargetFinderImpl_t_8253425_0 * __this, String_t* ___userAuth, String_t* ___secretAuth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/InitState Vuforia.TargetFinderImpl::GetInitState()
extern "C"  int32_t TargetFinderImpl_GetInitState_m1980557134_0 (TargetFinderImpl_t_8253425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::Deinit()
extern "C"  bool TargetFinderImpl_Deinit_m_879559808_0 (TargetFinderImpl_t_8253425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::StartRecognition()
extern "C"  bool TargetFinderImpl_StartRecognition_m_1865319964_0 (TargetFinderImpl_t_8253425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::Stop()
extern "C"  bool TargetFinderImpl_Stop_m_688171599_0 (TargetFinderImpl_t_8253425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::SetUIScanlineColor(UnityEngine.Color)
extern "C"  void TargetFinderImpl_SetUIScanlineColor_m1335697453_0 (TargetFinderImpl_t_8253425_0 * __this, Color_t_388944582_0  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::SetUIPointColor(UnityEngine.Color)
extern "C"  void TargetFinderImpl_SetUIPointColor_m_2088730920_0 (TargetFinderImpl_t_8253425_0 * __this, Color_t_388944582_0  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::IsRequesting()
extern "C"  bool TargetFinderImpl_IsRequesting_m444178604_0 (TargetFinderImpl_t_8253425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/UpdateState Vuforia.TargetFinderImpl::Update()
extern "C"  int32_t TargetFinderImpl_Update_m1035707941_0 (TargetFinderImpl_t_8253425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/UpdateState Vuforia.TargetFinderImpl::Update(Vuforia.TargetFinder/FilterMode)
extern "C"  int32_t TargetFinderImpl_Update_m_1003547610_0 (TargetFinderImpl_t_8253425_0 * __this, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinderImpl::GetResults()
extern "C"  Object_t* TargetFinderImpl_GetResults_m_1426760565_0 (TargetFinderImpl_t_8253425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.TargetFinderImpl::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,System.String)
extern "C"  ImageTargetAbstractBehaviour_t_440988281_0 * TargetFinderImpl_EnableTracking_m1896926741_0 (TargetFinderImpl_t_8253425_0 * __this, TargetSearchResult_t19459318_0  ___result, String_t* ___gameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.TargetFinderImpl::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,UnityEngine.GameObject)
extern "C"  ImageTargetAbstractBehaviour_t_440988281_0 * TargetFinderImpl_EnableTracking_m1030718917_0 (TargetFinderImpl_t_8253425_0 * __this, TargetSearchResult_t19459318_0  ___result, GameObject_t_184308134_0 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::ClearTrackables(System.Boolean)
extern "C"  void TargetFinderImpl_ClearTrackables_m_1055612585_0 (TargetFinderImpl_t_8253425_0 * __this, bool ___destroyGameObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget> Vuforia.TargetFinderImpl::GetImageTargets()
extern "C"  Object_t* TargetFinderImpl_GetImageTargets_m_1707863434_0 (TargetFinderImpl_t_8253425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
