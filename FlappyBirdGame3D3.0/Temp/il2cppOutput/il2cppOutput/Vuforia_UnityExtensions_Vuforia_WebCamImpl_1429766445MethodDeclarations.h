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

// Vuforia.WebCamImpl
struct WebCamImpl_t_1429766445_0;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1253062672_0;
// System.String
struct String_t;
// UnityEngine.Color32[]
struct Color32U5BU5D_t_1782843845_0;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_V_2044794839.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM_65967508.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid164376304.h"

// System.Boolean Vuforia.WebCamImpl::get_DidUpdateThisFrame()
extern "C"  bool WebCamImpl_get_DidUpdateThisFrame_m_264642717_0 (WebCamImpl_t_1429766445_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsPlaying()
extern "C"  bool WebCamImpl_get_IsPlaying_m_1833082550_0 (WebCamImpl_t_1429766445_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WebCamImpl::get_ActualWidth()
extern "C"  int32_t WebCamImpl_get_ActualWidth_m1312422244_0 (WebCamImpl_t_1429766445_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WebCamImpl::get_ActualHeight()
extern "C"  int32_t WebCamImpl_get_ActualHeight_m_1760769045_0 (WebCamImpl_t_1429766445_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsTextureSizeAvailable()
extern "C"  bool WebCamImpl_get_IsTextureSizeAvailable_m_1884967821_0 (WebCamImpl_t_1429766445_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::set_IsTextureSizeAvailable(System.Boolean)
extern "C"  void WebCamImpl_set_IsTextureSizeAvailable_m1477906284_0 (WebCamImpl_t_1429766445_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_FlipHorizontally()
extern "C"  bool WebCamImpl_get_FlipHorizontally_m1965651450_0 (WebCamImpl_t_1429766445_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamImpl::get_ResampledTextureSize()
extern "C"  Vec2I_t_2044794839_0  WebCamImpl_get_ResampledTextureSize_m650702685_0 (WebCamImpl_t_1429766445_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ComputeResampledTextureSize()
extern "C"  void WebCamImpl_ComputeResampledTextureSize_m1471781933_0 (WebCamImpl_t_1429766445_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::.ctor(UnityEngine.Camera[],System.Int32,System.String,System.Boolean)
extern "C"  void WebCamImpl__ctor_m1358302127_0 (WebCamImpl_t_1429766445_0 * __this, CameraU5BU5D_t1253062672_0* ___arCameras, int32_t ___renderTextureLayer, String_t* ___webcamDeviceName, bool ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StartCamera()
extern "C"  void WebCamImpl_StartCamera_m1402035688_0 (WebCamImpl_t_1429766445_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StopCamera()
extern "C"  void WebCamImpl_StopCamera_m_999806840_0 (WebCamImpl_t_1429766445_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ResetPlaying()
extern "C"  void WebCamImpl_ResetPlaying_m_487294816_0 (WebCamImpl_t_1429766445_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] Vuforia.WebCamImpl::GetPixels32AndBufferFrame()
extern "C"  Color32U5BU5D_t_1782843845_0* WebCamImpl_GetPixels32AndBufferFrame_m_283625549_0 (WebCamImpl_t_1429766445_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::RenderFrame(System.Int32)
extern "C"  void WebCamImpl_RenderFrame_m640962185_0 (WebCamImpl_t_1429766445_0 * __this, int32_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.WebCamImpl::GetVideoMode()
extern "C"  VideoModeData_t_65967508_0  WebCamImpl_GetVideoMode_m1883006628_0 (WebCamImpl_t_1429766445_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCamImpl::GetVideoTextureInfo()
extern "C"  VideoTextureInfo_t164376304_0  WebCamImpl_GetVideoTextureInfo_m_1335281170_0 (WebCamImpl_t_1429766445_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::IsRendererDirty()
extern "C"  bool WebCamImpl_IsRendererDirty_m_639174380_0 (WebCamImpl_t_1429766445_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::OnDestroy()
extern "C"  void WebCamImpl_OnDestroy_m_1774383140_0 (WebCamImpl_t_1429766445_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::Update()
extern "C"  void WebCamImpl_Update_m1367882506_0 (WebCamImpl_t_1429766445_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
