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

// Vuforia.VirtualButtonImpl
struct VirtualButtonImpl_t_235729755_0;
// System.String
struct String_t;
// Vuforia.ImageTarget
struct ImageTarget_t_576971884_0;
// Vuforia.DataSet
struct DataSet_t_2109692640_0;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleData207582337.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButton_Sensi_18537387.h"

// System.String Vuforia.VirtualButtonImpl::get_Name()
extern "C"  String_t* VirtualButtonImpl_get_Name_m841513962_0 (VirtualButtonImpl_t_235729755_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VirtualButtonImpl::get_ID()
extern "C"  int32_t VirtualButtonImpl_get_ID_m_1164285487_0 (VirtualButtonImpl_t_235729755_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::get_Enabled()
extern "C"  bool VirtualButtonImpl_get_Enabled_m1724640627_0 (VirtualButtonImpl_t_235729755_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RectangleData Vuforia.VirtualButtonImpl::get_Area()
extern "C"  RectangleData_t207582337_0  VirtualButtonImpl_get_Area_m_81299511_0 (VirtualButtonImpl_t_235729755_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonImpl::.ctor(System.String,System.Int32,Vuforia.RectangleData,Vuforia.ImageTarget,Vuforia.DataSet)
extern "C"  void VirtualButtonImpl__ctor_m388688491_0 (VirtualButtonImpl_t_235729755_0 * __this, String_t* ___name, int32_t ___id, RectangleData_t207582337_0  ___area, Object_t * ___imageTarget, DataSet_t_2109692640_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetArea(Vuforia.RectangleData)
extern "C"  bool VirtualButtonImpl_SetArea_m_392945061_0 (VirtualButtonImpl_t_235729755_0 * __this, RectangleData_t207582337_0  ___area, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetSensitivity(Vuforia.VirtualButton/Sensitivity)
extern "C"  bool VirtualButtonImpl_SetSensitivity_m168632301_0 (VirtualButtonImpl_t_235729755_0 * __this, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetEnabled(System.Boolean)
extern "C"  bool VirtualButtonImpl_SetEnabled_m_802123171_0 (VirtualButtonImpl_t_235729755_0 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
