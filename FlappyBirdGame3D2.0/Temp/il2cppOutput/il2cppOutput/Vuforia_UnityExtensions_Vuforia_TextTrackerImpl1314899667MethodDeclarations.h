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

// Vuforia.TextTrackerImpl
struct TextTrackerImpl_t1314899667_0;
// Vuforia.WordList
struct WordList_t1558120192_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleIntData_153541630.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM_65967508.h"
#include "Vuforia_UnityExtensions_Vuforia_TextTrackerImpl_U_1666875960.h"

// Vuforia.WordList Vuforia.TextTrackerImpl::get_WordList()
extern "C"  WordList_t1558120192_0 * TextTrackerImpl_get_WordList_m1802248881_0 (TextTrackerImpl_t1314899667_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::Start()
extern "C"  bool TextTrackerImpl_Start_m240157903_0 (TextTrackerImpl_t1314899667_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::Stop()
extern "C"  void TextTrackerImpl_Stop_m229906313_0 (TextTrackerImpl_t1314899667_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::SetRegionOfInterest(UnityEngine.Rect,UnityEngine.Rect)
extern "C"  bool TextTrackerImpl_SetRegionOfInterest_m990503106_0 (TextTrackerImpl_t1314899667_0 * __this, Rect_t_981940947_0  ___detectionRegion, Rect_t_981940947_0  ___trackingRegion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::GetRegionOfInterest(UnityEngine.Rect&,UnityEngine.Rect&)
extern "C"  bool TextTrackerImpl_GetRegionOfInterest_m230577648_0 (TextTrackerImpl_t1314899667_0 * __this, Rect_t_981940947_0 * ___detectionRegion, Rect_t_981940947_0 * ___trackingRegion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.TextTrackerImpl::ScreenSpaceRectFromCamSpaceRectData(Vuforia.RectangleIntData,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  Rect_t_981940947_0  TextTrackerImpl_ScreenSpaceRectFromCamSpaceRectData_m2330466_0 (TextTrackerImpl_t1314899667_0 * __this, RectangleIntData_t_153541630_0  ___camSpaceRectData, Rect_t_981940947_0  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t_65967508_0  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TextTrackerImpl/UpDirection Vuforia.TextTrackerImpl::get_CurrentUpDirection()
extern "C"  int32_t TextTrackerImpl_get_CurrentUpDirection_m194809308_0 (TextTrackerImpl_t1314899667_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::.ctor()
extern "C"  void TextTrackerImpl__ctor_m_422773347_0 (TextTrackerImpl_t1314899667_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
