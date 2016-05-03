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

// System.String
struct String_t;
// Vuforia.VuforiaRuntimeUtilities
struct VuforiaRuntimeUtilities_t1666739050;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1394230769.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vec282528459.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Video4206825832.h"
#include "Vuforia_UnityExtensions_Vuforia_OrientedBoundingBo3755316281.h"

// System.String Vuforia.VuforiaRuntimeUtilities::StripFileNameFromPath(System.String)
extern "C"  String_t* VuforiaRuntimeUtilities_StripFileNameFromPath_m1504121759 (Il2CppObject * __this /* static, unused */, String_t* ___fullPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaRuntimeUtilities::StripStreamingAssetsFromPath(System.String)
extern "C"  String_t* VuforiaRuntimeUtilities_StripStreamingAssetsFromPath_m3684216089 (Il2CppObject * __this /* static, unused */, String_t* ___fullPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaRuntimeUtilities::StripExtensionFromPath(System.String)
extern "C"  String_t* VuforiaRuntimeUtilities_StripExtensionFromPath_m12140319 (Il2CppObject * __this /* static, unused */, String_t* ___fullPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.VuforiaRuntimeUtilities::get_ScreenOrientation()
extern "C"  int32_t VuforiaRuntimeUtilities_get_ScreenOrientation_m1489198739 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::get_IsLandscapeOrientation()
extern "C"  bool VuforiaRuntimeUtilities_get_IsLandscapeOrientation_m3072189350 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::get_IsPortraitOrientation()
extern "C"  bool VuforiaRuntimeUtilities_get_IsPortraitOrientation_m2195103014 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::ForceDisableTrackables()
extern "C"  void VuforiaRuntimeUtilities_ForceDisableTrackables_m2169934139 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPlayMode()
extern "C"  bool VuforiaRuntimeUtilities_IsPlayMode_m908661311 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsVuforiaEnabled()
extern "C"  bool VuforiaRuntimeUtilities_IsVuforiaEnabled_m3553018023 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRuntimeUtilities::ScreenSpaceToCameraFrameCoordinates(UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  Vec2I_t82528459  VuforiaRuntimeUtilities_ScreenSpaceToCameraFrameCoordinates_m645990546 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___screenSpaceCoordinate, Rect_t1525428817  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t4206825832  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.VuforiaRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  Vector2_t3525329788  VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m3550955019 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___cameraFrameCoordinate, Rect_t1525428817  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t4206825832  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox Vuforia.VuforiaRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(Vuforia.OrientedBoundingBox,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  OrientedBoundingBox_t3755316281  VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m1745983979 (Il2CppObject * __this /* static, unused */, OrientedBoundingBox_t3755316281  ___cameraFrameObb, Rect_t1525428817  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t4206825832  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::SelectRectTopLeftAndBottomRightForLandscapeLeft(UnityEngine.Rect,System.Boolean,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C"  void VuforiaRuntimeUtilities_SelectRectTopLeftAndBottomRightForLandscapeLeft_m788149815 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___screenSpaceRect, bool ___isMirrored, Vector2_t3525329788 * ___topLeft, Vector2_t3525329788 * ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.VuforiaRuntimeUtilities::CalculateRectFromLandscapeLeftCorners(UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C"  Rect_t1525428817  VuforiaRuntimeUtilities_CalculateRectFromLandscapeLeftCorners_m1814113041 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___topLeft, Vector2_t3525329788  ___bottomRight, bool ___isMirrored, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::DisableSleepMode()
extern "C"  void VuforiaRuntimeUtilities_DisableSleepMode_m3027764354 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::ResetSleepMode()
extern "C"  void VuforiaRuntimeUtilities_ResetSleepMode_m521847675 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::CheckNativePluginSupport()
extern "C"  bool VuforiaRuntimeUtilities_CheckNativePluginSupport_m1651843675 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsNativePluginSupportAvailable()
extern "C"  bool VuforiaRuntimeUtilities_IsNativePluginSupportAvailable_m2859592844 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::StopCameraIfPossible(System.Boolean&,System.Boolean&)
extern "C"  bool VuforiaRuntimeUtilities_StopCameraIfPossible_m2327281457 (Il2CppObject * __this /* static, unused */, bool* ___objectTrackerWasStopped, bool* ___markerTrackerWasStopped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::PrepareCoordinateConversion(System.Boolean,System.Single&,System.Single&,System.Single&,System.Single&,System.Boolean&)
extern "C"  void VuforiaRuntimeUtilities_PrepareCoordinateConversion_m214521389 (Il2CppObject * __this /* static, unused */, bool ___isTextureMirrored, float* ___prefixX, float* ___prefixY, float* ___inversionMultiplierX, float* ___inversionMultiplierY, bool* ___isPortrait, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaRuntimeUtilities::qcarCheckNativePluginSupport()
extern "C"  int32_t VuforiaRuntimeUtilities_qcarCheckNativePluginSupport_m2576412036 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::.ctor()
extern "C"  void VuforiaRuntimeUtilities__ctor_m2507718228 (VuforiaRuntimeUtilities_t1666739050 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::.cctor()
extern "C"  void VuforiaRuntimeUtilities__cctor_m4242724825 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
