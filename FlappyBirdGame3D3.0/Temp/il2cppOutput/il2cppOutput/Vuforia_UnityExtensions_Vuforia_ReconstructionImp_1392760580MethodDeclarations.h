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

// Vuforia.ReconstructionImpl
struct ReconstructionImpl_t_1392760580_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"

// System.Void Vuforia.ReconstructionImpl::.ctor(System.IntPtr)
extern "C"  void ReconstructionImpl__ctor_m_1130933958_0 (ReconstructionImpl_t_1392760580_0 * __this, IntPtr_t ___nativeReconstructionPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.ReconstructionImpl::get_NativePtr()
extern "C"  IntPtr_t ReconstructionImpl_get_NativePtr_m_1409446063_0 (ReconstructionImpl_t_1392760580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::SetMaximumArea(UnityEngine.Rect)
extern "C"  bool ReconstructionImpl_SetMaximumArea_m1714654892_0 (ReconstructionImpl_t_1392760580_0 * __this, Rect_t_981940947_0  ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::GetMaximumArea(UnityEngine.Rect&)
extern "C"  bool ReconstructionImpl_GetMaximumArea_m2049013396_0 (ReconstructionImpl_t_1392760580_0 * __this, Rect_t_981940947_0 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Stop()
extern "C"  bool ReconstructionImpl_Stop_m1356856798_0 (ReconstructionImpl_t_1392760580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Start()
extern "C"  bool ReconstructionImpl_Start_m_899908888_0 (ReconstructionImpl_t_1392760580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::IsReconstructing()
extern "C"  bool ReconstructionImpl_IsReconstructing_m_826358268_0 (ReconstructionImpl_t_1392760580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::SetNavMeshPadding(System.Single)
extern "C"  void ReconstructionImpl_SetNavMeshPadding_m657919248_0 (ReconstructionImpl_t_1392760580_0 * __this, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ReconstructionImpl::get_NavMeshPadding()
extern "C"  float ReconstructionImpl_get_NavMeshPadding_m_1471662272_0 (ReconstructionImpl_t_1392760580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::StartNavMeshUpdates()
extern "C"  void ReconstructionImpl_StartNavMeshUpdates_m874173748_0 (ReconstructionImpl_t_1392760580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::StopNavMeshUpdates()
extern "C"  void ReconstructionImpl_StopNavMeshUpdates_m_1052269690_0 (ReconstructionImpl_t_1392760580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::IsNavMeshUpdating()
extern "C"  bool ReconstructionImpl_IsNavMeshUpdating_m_1974383854_0 (ReconstructionImpl_t_1392760580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Reset()
extern "C"  bool ReconstructionImpl_Reset_m2094353557_0 (ReconstructionImpl_t_1392760580_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
