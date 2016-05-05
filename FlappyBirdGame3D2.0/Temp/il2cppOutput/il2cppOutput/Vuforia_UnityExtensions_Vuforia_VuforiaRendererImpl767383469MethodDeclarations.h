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

// Vuforia.VuforiaRendererImpl
struct VuforiaRendererImpl_t767383469_0;
// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi1834030736.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid164376304.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Fp1062410958.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Ren_50058475.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRendererIm_1701507294.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_V_2015634094.h"

// UnityEngine.Texture2D Vuforia.VuforiaRendererImpl::get_VideoBackgroundTexture()
extern "C"  Texture2D_t_485082364_0 * VuforiaRendererImpl_get_VideoBackgroundTexture_m22399775_0 (VuforiaRendererImpl_t767383469_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBGCfgData Vuforia.VuforiaRendererImpl::GetVideoBackgroundConfig()
extern "C"  VideoBGCfgData_t1834030736_0  VuforiaRendererImpl_GetVideoBackgroundConfig_m_1480611841_0 (VuforiaRendererImpl_t767383469_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::ClearVideoBackgroundConfig()
extern "C"  void VuforiaRendererImpl_ClearVideoBackgroundConfig_m509017663_0 (VuforiaRendererImpl_t767383469_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::SetVideoBackgroundConfig(Vuforia.VuforiaRenderer/VideoBGCfgData)
extern "C"  void VuforiaRendererImpl_SetVideoBackgroundConfig_m1687765126_0 (VuforiaRendererImpl_t767383469_0 * __this, VideoBGCfgData_t1834030736_0  ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::SetVideoBackgroundTexture(UnityEngine.Texture2D,System.Int32)
extern "C"  bool VuforiaRendererImpl_SetVideoBackgroundTexture_m756655650_0 (VuforiaRendererImpl_t767383469_0 * __this, Texture2D_t_485082364_0 * ___texture, int32_t ___nativeTextureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::SetVideoBackgroundTexturePtr(UnityEngine.Texture2D,System.IntPtr)
extern "C"  bool VuforiaRendererImpl_SetVideoBackgroundTexturePtr_m_406690271_0 (VuforiaRendererImpl_t767383469_0 * __this, Texture2D_t_485082364_0 * ___texture, IntPtr_t ___nativeTexturePtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::IsVideoBackgroundInfoAvailable()
extern "C"  bool VuforiaRendererImpl_IsVideoBackgroundInfoAvailable_m1965806571_0 (VuforiaRendererImpl_t767383469_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.VuforiaRendererImpl::GetVideoTextureInfo()
extern "C"  VideoTextureInfo_t164376304_0  VuforiaRendererImpl_GetVideoTextureInfo_m_1601378020_0 (VuforiaRendererImpl_t767383469_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::Pause(System.Boolean)
extern "C"  void VuforiaRendererImpl_Pause_m_246998450_0 (VuforiaRendererImpl_t767383469_0 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaRendererImpl::GetRecommendedFps(Vuforia.VuforiaRenderer/FpsHint)
extern "C"  int32_t VuforiaRendererImpl_GetRecommendedFps_m558349319_0 (VuforiaRendererImpl_t767383469_0 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/RendererAPI Vuforia.VuforiaRendererImpl::GetRendererAPI()
extern "C"  int32_t VuforiaRendererImpl_GetRendererAPI_m1985364528_0 (VuforiaRendererImpl_t767383469_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::UnityRenderEvent(Vuforia.VuforiaRendererImpl/RenderEvent)
extern "C"  void VuforiaRendererImpl_UnityRenderEvent_m_823494092_0 (VuforiaRendererImpl_t767383469_0 * __this, int32_t ___renderEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::HasBackgroundTextureChanged()
extern "C"  bool VuforiaRendererImpl_HasBackgroundTextureChanged_m_738135372_0 (VuforiaRendererImpl_t767383469_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::SetVideoBackgroundConfigInternal(Vuforia.VuforiaRenderer/VideoBGCfgData)
extern "C"  void VuforiaRendererImpl_SetVideoBackgroundConfigInternal_m1085124963_0 (VuforiaRendererImpl_t767383469_0 * __this, VideoBGCfgData_t1834030736_0  ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaRendererImpl::GetLastSetReflection()
extern "C"  int32_t VuforiaRendererImpl_GetLastSetReflection_m_158644531_0 (VuforiaRendererImpl_t767383469_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::.ctor()
extern "C"  void VuforiaRendererImpl__ctor_m_500190333_0 (VuforiaRendererImpl_t767383469_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
