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

// Vuforia.CameraDeviceImpl
struct CameraDeviceImpl_t2056630225;
// Vuforia.IWebCam
struct IWebCam_t1390295706;
// Vuforia.Image
struct Image_t2805765713;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t1438973871;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer3423851962.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Video4206825832.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer3616713278.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Focus3632395899.h"
#include "Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT3232215024.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// Vuforia.IWebCam Vuforia.CameraDeviceImpl::get_WebCam()
extern "C"  Il2CppObject * CameraDeviceImpl_get_WebCam_m684597056 (CameraDeviceImpl_t2056630225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::set_WebCam(Vuforia.IWebCam)
extern "C"  void CameraDeviceImpl_set_WebCam_m2200160897 (CameraDeviceImpl_t2056630225 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::get_CameraReady()
extern "C"  bool CameraDeviceImpl_get_CameraReady_m3910039204 (CameraDeviceImpl_t2056630225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Init(Vuforia.CameraDevice/CameraDirection)
extern "C"  bool CameraDeviceImpl_Init_m3502874449 (CameraDeviceImpl_t2056630225 * __this, int32_t ___cameraDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Deinit()
extern "C"  bool CameraDeviceImpl_Deinit_m1876217156 (CameraDeviceImpl_t2056630225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Start()
extern "C"  bool CameraDeviceImpl_Start_m1187447601 (CameraDeviceImpl_t2056630225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Stop()
extern "C"  bool CameraDeviceImpl_Stop_m38717557 (CameraDeviceImpl_t2056630225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::IsActive()
extern "C"  bool CameraDeviceImpl_IsActive_m1077865667 (CameraDeviceImpl_t2056630225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::GetVideoMode()
extern "C"  VideoModeData_t4206825832  CameraDeviceImpl_GetVideoMode_m286310564 (CameraDeviceImpl_t2056630225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::GetVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C"  VideoModeData_t4206825832  CameraDeviceImpl_GetVideoMode_m145894984 (CameraDeviceImpl_t2056630225 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SelectVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C"  bool CameraDeviceImpl_SelectVideoMode_m2037801627 (CameraDeviceImpl_t2056630225 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::GetSelectedVideoMode(Vuforia.CameraDevice/CameraDeviceMode&)
extern "C"  bool CameraDeviceImpl_GetSelectedVideoMode_m4249045568 (CameraDeviceImpl_t2056630225 * __this, int32_t* ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFlashTorchMode(System.Boolean)
extern "C"  bool CameraDeviceImpl_SetFlashTorchMode_m3198336567 (CameraDeviceImpl_t2056630225 * __this, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFocusMode(Vuforia.CameraDevice/FocusMode)
extern "C"  bool CameraDeviceImpl_SetFocusMode_m3648038265 (CameraDeviceImpl_t2056630225 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFrameFormat(Vuforia.Image/PIXEL_FORMAT,System.Boolean)
extern "C"  bool CameraDeviceImpl_SetFrameFormat_m940346232 (CameraDeviceImpl_t2056630225 * __this, int32_t ___format, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.CameraDeviceImpl::GetCameraImage(Vuforia.Image/PIXEL_FORMAT)
extern "C"  Image_t2805765713 * CameraDeviceImpl_GetCameraImage_m495575349 (CameraDeviceImpl_t2056630225 * __this, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDeviceImpl::GetCameraDirection()
extern "C"  int32_t CameraDeviceImpl_GetCameraDirection_m3299590510 (CameraDeviceImpl_t2056630225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::GetSelectedCameraDirection(Vuforia.CameraDevice/CameraDirection&)
extern "C"  bool CameraDeviceImpl_GetSelectedCameraDirection_m967842178 (CameraDeviceImpl_t2056630225 * __this, int32_t* ___cameraDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.CameraDeviceImpl::GetCameraFieldOfViewRads()
extern "C"  Vector2_t3525329788  CameraDeviceImpl_GetCameraFieldOfViewRads_m2766462101 (CameraDeviceImpl_t2056630225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDeviceImpl::GetAllImages()
extern "C"  Dictionary_2_t1438973871 * CameraDeviceImpl_GetAllImages_m3712038097 (CameraDeviceImpl_t2056630225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::IsDirty()
extern "C"  bool CameraDeviceImpl_IsDirty_m1897706135 (CameraDeviceImpl_t2056630225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::ResetDirtyFlag()
extern "C"  void CameraDeviceImpl_ResetDirtyFlag_m2233912528 (CameraDeviceImpl_t2056630225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::.ctor()
extern "C"  void CameraDeviceImpl__ctor_m590320163 (CameraDeviceImpl_t2056630225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::ForceFrameFormat(Vuforia.Image/PIXEL_FORMAT,System.Boolean)
extern "C"  void CameraDeviceImpl_ForceFrameFormat_m1700360371 (CameraDeviceImpl_t2056630225 * __this, int32_t ___format, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::InitCameraDevice(System.Int32)
extern "C"  int32_t CameraDeviceImpl_InitCameraDevice_m3469597609 (CameraDeviceImpl_t2056630225 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::DeinitCameraDevice()
extern "C"  int32_t CameraDeviceImpl_DeinitCameraDevice_m4252640665 (CameraDeviceImpl_t2056630225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::StartCameraDevice()
extern "C"  int32_t CameraDeviceImpl_StartCameraDevice_m3046783378 (CameraDeviceImpl_t2056630225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::StopCameraDevice()
extern "C"  int32_t CameraDeviceImpl_StopCameraDevice_m821067210 (CameraDeviceImpl_t2056630225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::.cctor()
extern "C"  void CameraDeviceImpl__cctor_m637959658 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
