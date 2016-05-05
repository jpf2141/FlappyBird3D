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

// Vuforia.ViewerParametersList
struct ViewerParametersList_t_1846545262_0;
// System.String
struct String_t;
// Vuforia.IViewerParameters
struct IViewerParameters_t904938221_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.IViewerParameters>
struct IEnumerable_1_t475199298_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// Vuforia.ViewerParametersList Vuforia.ViewerParametersList::get_ListForAuthoringTools()
extern "C"  ViewerParametersList_t_1846545262_0 * ViewerParametersList_get_ListForAuthoringTools_m_565326157_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ViewerParametersList::.ctor(System.IntPtr)
extern "C"  void ViewerParametersList__ctor_m357677328_0 (ViewerParametersList_t_1846545262_0 * __this, IntPtr_t ___intPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ViewerParametersList::SetSDKFilter(System.String)
extern "C"  void ViewerParametersList_SetSDKFilter_m_815095054_0 (ViewerParametersList_t_1846545262_0 * __this, String_t* ___filter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ViewerParametersList::Size()
extern "C"  int32_t ViewerParametersList_Size_m_1519222259_0 (ViewerParametersList_t_1846545262_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.IViewerParameters Vuforia.ViewerParametersList::Get(System.Int32)
extern "C"  Object_t * ViewerParametersList_Get_m_934804849_0 (ViewerParametersList_t_1846545262_0 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.IViewerParameters Vuforia.ViewerParametersList::Get(System.String,System.String)
extern "C"  Object_t * ViewerParametersList_Get_m_2015024448_0 (ViewerParametersList_t_1846545262_0 * __this, String_t* ___name, String_t* ___manufacturer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.IViewerParameters> Vuforia.ViewerParametersList::GetAllViewers()
extern "C"  Object_t* ViewerParametersList_GetAllViewers_m_766368397_0 (ViewerParametersList_t_1846545262_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
