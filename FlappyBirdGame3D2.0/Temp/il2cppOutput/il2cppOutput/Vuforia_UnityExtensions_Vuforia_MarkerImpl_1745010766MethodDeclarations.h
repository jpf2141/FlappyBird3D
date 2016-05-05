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

// Vuforia.MarkerImpl
struct MarkerImpl_t_1745010766_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Int32 Vuforia.MarkerImpl::get_MarkerID()
extern "C"  int32_t MarkerImpl_get_MarkerID_m_1576094774_0 (MarkerImpl_t_1745010766_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerImpl::set_MarkerID(System.Int32)
extern "C"  void MarkerImpl_set_MarkerID_m766901059_0 (MarkerImpl_t_1745010766_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerImpl::.ctor(System.String,System.Int32,System.Single,System.Int32)
extern "C"  void MarkerImpl__ctor_m_2074214407_0 (MarkerImpl_t_1745010766_0 * __this, String_t* ___name, int32_t ___id, float ___size, int32_t ___markerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.MarkerImpl::GetSize()
extern "C"  float MarkerImpl_GetSize_m_1959586579_0 (MarkerImpl_t_1745010766_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerImpl::SetSize(System.Single)
extern "C"  void MarkerImpl_SetSize_m2051489734_0 (MarkerImpl_t_1745010766_0 * __this, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerImpl::StartExtendedTracking()
extern "C"  bool MarkerImpl_StartExtendedTracking_m_482353374_0 (MarkerImpl_t_1745010766_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerImpl::StopExtendedTracking()
extern "C"  bool MarkerImpl_StopExtendedTracking_m_1543846204_0 (MarkerImpl_t_1745010766_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
