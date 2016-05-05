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
struct VuforiaRuntimeUtilities_t1671925564_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_V_2044794839.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM_65967508.h"
#include "Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox786000907.h"

// System.String Vuforia.VuforiaRuntimeUtilities::StripFileNameFromPath(System.String)
extern "C"  String_t* VuforiaRuntimeUtilities_StripFileNameFromPath_m1504121759_0 (Object_t * __this /* static, unused */, String_t* ___fullPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaRuntimeUtilities::StripStreamingAssetsFromPath(System.String)
extern "C"  String_t* VuforiaRuntimeUtilities_StripStreamingAssetsFromPath_m_610751207_0 (Object_t * __this /* static, unused */, String_t* ___fullPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaRuntimeUtilities::StripExtensionFromPath(System.String)
extern "C"  String_t* VuforiaRuntimeUtilities_StripExtensionFromPath_m12140319_0 (Object_t * __this /* static, unused */, String_t* ___fullPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.VuforiaRuntimeUtilities::get_ScreenOrientation()
extern "C"  int32_t VuforiaRuntimeUtilities_get_ScreenOrientation_m1489198739_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::get_IsLandscapeOrientation()
extern "C"  bool VuforiaRuntimeUtilities_get_IsLandscapeOrientation_m_1222777946_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::get_IsPortraitOrientation()
extern "C"  bool VuforiaRuntimeUtilities_get_IsPortraitOrientation_m_2099864282_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::ForceDisableTrackables()
extern "C"  void VuforiaRuntimeUtilities_ForceDisableTrackables_m_2125033157_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPlayMode()
extern "C"  bool VuforiaRuntimeUtilities_IsPlayMode_m908661311_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsVuforiaEnabled()
extern "C"  bool VuforiaRuntimeUtilities_IsVuforiaEnabled_m_741949273_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRuntimeUtilities::ScreenSpaceToCameraFrameCoordinates(UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  Vec2I_t_2044794839_0  VuforiaRuntimeUtilities_ScreenSpaceToCameraFrameCoordinates_m645990546_0 (Object_t * __this /* static, unused */, Vector2_t_725341338_0  ___screenSpaceCoordinate, Rect_t_981940947_0  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t_65967508_0  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.VuforiaRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  Vector2_t_725341338_0  VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m_744012277_0 (Object_t * __this /* static, unused */, Vector2_t_725341338_0  ___cameraFrameCoordinate, Rect_t_981940947_0  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t_65967508_0  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox Vuforia.VuforiaRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(Vuforia.OrientedBoundingBox,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  OrientedBoundingBox_t786000907_0  VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m1745983979_0 (Object_t * __this /* static, unused */, OrientedBoundingBox_t786000907_0  ___cameraFrameObb, Rect_t_981940947_0  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t_65967508_0  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::SelectRectTopLeftAndBottomRightForLandscapeLeft(UnityEngine.Rect,System.Boolean,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C"  void VuforiaRuntimeUtilities_SelectRectTopLeftAndBottomRightForLandscapeLeft_m788149815_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___screenSpaceRect, bool ___isMirrored, Vector2_t_725341338_0 * ___topLeft, Vector2_t_725341338_0 * ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.VuforiaRuntimeUtilities::CalculateRectFromLandscapeLeftCorners(UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C"  Rect_t_981940947_0  VuforiaRuntimeUtilities_CalculateRectFromLandscapeLeftCorners_m1814113041_0 (Object_t * __this /* static, unused */, Vector2_t_725341338_0  ___topLeft, Vector2_t_725341338_0  ___bottomRight, bool ___isMirrored, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::DisableSleepMode()
extern "C"  void VuforiaRuntimeUtilities_DisableSleepMode_m_1267202942_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::ResetSleepMode()
extern "C"  void VuforiaRuntimeUtilities_ResetSleepMode_m521847675_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::CheckNativePluginSupport()
extern "C"  bool VuforiaRuntimeUtilities_CheckNativePluginSupport_m1651843675_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsNativePluginSupportAvailable()
extern "C"  bool VuforiaRuntimeUtilities_IsNativePluginSupportAvailable_m_1435374452_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::StopCameraIfPossible(System.Boolean&,System.Boolean&)
extern "C"  bool VuforiaRuntimeUtilities_StopCameraIfPossible_m_1967685839_0 (Object_t * __this /* static, unused */, bool* ___objectTrackerWasStopped, bool* ___markerTrackerWasStopped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::PrepareCoordinateConversion(System.Boolean,System.Single&,System.Single&,System.Single&,System.Single&,System.Boolean&)
extern "C"  void VuforiaRuntimeUtilities_PrepareCoordinateConversion_m214521389_0 (Object_t * __this /* static, unused */, bool ___isTextureMirrored, float* ___prefixX, float* ___prefixY, float* ___inversionMultiplierX, float* ___inversionMultiplierY, bool* ___isPortrait, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaRuntimeUtilities::qcarCheckNativePluginSupport()
extern "C"  int32_t VuforiaRuntimeUtilities_qcarCheckNativePluginSupport_m_1718555260_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::.ctor()
extern "C"  void VuforiaRuntimeUtilities__ctor_m_1787249068_0 (VuforiaRuntimeUtilities_t1671925564_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::.cctor()
extern "C"  void VuforiaRuntimeUtilities__cctor_m_52242471_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
