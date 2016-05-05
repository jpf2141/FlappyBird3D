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

// Vuforia.Device
struct Device_t1044085902_0;
// Vuforia.IViewerParametersList
struct IViewerParametersList_t1831807275_0;
// Vuforia.IViewerParameters
struct IViewerParameters_t904938221_0;
// Vuforia.ICustomViewerParameters
struct ICustomViewerParameters_t459018174_0;
// System.String
struct String_t;
// UnityEngine.Mesh
struct Mesh_t_982089418_0;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_Device_Mode_56808796.h"
#include "Vuforia_UnityExtensions_Vuforia_View_1803958563.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"

// Vuforia.Device Vuforia.Device::get_Instance()
extern "C"  Device_t1044085902_0 * Device_get_Instance_m_1951901741_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Device/Mode Vuforia.Device::GetMode()
extern "C"  int32_t Device_GetMode_m1241092092_0 (Device_t1044085902_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.Device::IsViewerActive()
extern "C"  bool Device_IsViewerActive_m_966298704_0 (Device_t1044085902_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.IViewerParametersList Vuforia.Device::GetViewerList()
extern "C"  Object_t * Device_GetViewerList_m_1244975760_0 (Device_t1044085902_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.Device::SelectViewer(Vuforia.IViewerParameters)
extern "C"  bool Device_SelectViewer_m916225405_0 (Device_t1044085902_0 * __this, Object_t * ___vp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.IViewerParameters Vuforia.Device::GetSelectedViewer()
extern "C"  Object_t * Device_GetSelectedViewer_m_1412669905_0 (Device_t1044085902_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ICustomViewerParameters Vuforia.Device::CreateCustomViewerParameters(System.Single,System.String,System.String)
extern "C"  Object_t * Device_CreateCustomViewerParameters_m1686782613_0 (Device_t1044085902_0 * __this, float ___version, String_t* ___name, String_t* ___manufacturer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::SetPlayModeEyewearDevice()
extern "C"  void Device_SetPlayModeEyewearDevice_m_544531031_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::UnsetDevice()
extern "C"  void Device_UnsetDevice_m157329157_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::SetViewerActive(System.Boolean)
extern "C"  void Device_SetViewerActive_m_1249996393_0 (Device_t1044085902_0 * __this, bool ___isActive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.Device::SetMode(Vuforia.Device/Mode)
extern "C"  bool Device_SetMode_m_180713975_0 (Device_t1044085902_0 * __this, int32_t ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.Device::GetDistortionMesh(Vuforia.View,UnityEngine.Mesh)
extern "C"  Mesh_t_982089418_0 * Device_GetDistortionMesh_m_1006774908_0 (Device_t1044085902_0 * __this, int32_t ___viewId, Mesh_t_982089418_0 * ___oldMesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::GetTextureSize(Vuforia.View,System.Int32&,System.Int32&)
extern "C"  void Device_GetTextureSize_m1718788091_0 (Device_t1044085902_0 * __this, int32_t ___viewId, int32_t* ___textureWidth, int32_t* ___textureHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.Device::GetProjectionMatrix(Vuforia.View,System.Single,System.Single,UnityEngine.ScreenOrientation)
extern "C"  Matrix4x4_t1577636070_0  Device_GetProjectionMatrix_m_228958711_0 (Device_t1044085902_0 * __this, int32_t ___viewId, float ___near, float ___far, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.Device::GetDistortionTextureViewport(Vuforia.View)
extern "C"  Rect_t_981940947_0  Device_GetDistortionTextureViewport_m1147422169_0 (Device_t1044085902_0 * __this, int32_t ___viewId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.Device::GetViewport(Vuforia.View)
extern "C"  Rect_t_981940947_0  Device_GetViewport_m_1704120495_0 (Device_t1044085902_0 * __this, int32_t ___viewId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.Device::GetNormalizedViewport(Vuforia.View)
extern "C"  Rect_t_981940947_0  Device_GetNormalizedViewport_m1713296744_0 (Device_t1044085902_0 * __this, int32_t ___viewId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.Device::GetEyeDisplayAdjustmentMatrix(Vuforia.View)
extern "C"  Matrix4x4_t1577636070_0  Device_GetEyeDisplayAdjustmentMatrix_m_1923907793_0 (Device_t1044085902_0 * __this, int32_t ___viewId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::.ctor()
extern "C"  void Device__ctor_m1325009544_0 (Device_t1044085902_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.Device::.cctor()
extern "C"  void Device__cctor_m1938493989_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
