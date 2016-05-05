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

// Vuforia.CloudRecoImageTargetImpl
struct CloudRecoImageTargetImpl_t_1663682832_0;
// System.String
struct String_t;
// Vuforia.VirtualButton
struct VirtualButton_t_1353895707_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t449353930_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetType878982382.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleData207582337.h"

// System.Void Vuforia.CloudRecoImageTargetImpl::.ctor(System.String,System.Int32,UnityEngine.Vector3)
extern "C"  void CloudRecoImageTargetImpl__ctor_m1881274190_0 (CloudRecoImageTargetImpl_t_1663682832_0 * __this, String_t* ___name, int32_t ___id, Vector3_t_725341337_0  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.CloudRecoImageTargetImpl::get_ImageTargetType()
extern "C"  int32_t CloudRecoImageTargetImpl_get_ImageTargetType_m1396872904_0 (CloudRecoImageTargetImpl_t_1663682832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.CloudRecoImageTargetImpl::GetSize()
extern "C"  Vector3_t_725341337_0  CloudRecoImageTargetImpl_GetSize_m1887844865_0 (CloudRecoImageTargetImpl_t_1663682832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CloudRecoImageTargetImpl::SetSize(UnityEngine.Vector3)
extern "C"  void CloudRecoImageTargetImpl_SetSize_m7268786_0 (CloudRecoImageTargetImpl_t_1663682832_0 * __this, Vector3_t_725341337_0  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.CloudRecoImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C"  VirtualButton_t_1353895707_0 * CloudRecoImageTargetImpl_CreateVirtualButton_m894540126_0 (CloudRecoImageTargetImpl_t_1663682832_0 * __this, String_t* ___name, RectangleData_t207582337_0  ___area, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.CloudRecoImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C"  VirtualButton_t_1353895707_0 * CloudRecoImageTargetImpl_GetVirtualButtonByName_m_309445511_0 (CloudRecoImageTargetImpl_t_1663682832_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.CloudRecoImageTargetImpl::GetVirtualButtons()
extern "C"  Object_t* CloudRecoImageTargetImpl_GetVirtualButtons_m500059667_0 (CloudRecoImageTargetImpl_t_1663682832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C"  bool CloudRecoImageTargetImpl_DestroyVirtualButton_m_652438290_0 (CloudRecoImageTargetImpl_t_1663682832_0 * __this, VirtualButton_t_1353895707_0 * ___vb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::StartExtendedTracking()
extern "C"  bool CloudRecoImageTargetImpl_StartExtendedTracking_m_1867215900_0 (CloudRecoImageTargetImpl_t_1663682832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::StopExtendedTracking()
extern "C"  bool CloudRecoImageTargetImpl_StopExtendedTracking_m1320974786_0 (CloudRecoImageTargetImpl_t_1663682832_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
