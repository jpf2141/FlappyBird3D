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

// Vuforia.BaseCameraConfiguration
struct BaseCameraConfiguration_t_1448557560_0;
// Vuforia.BackgroundPlaneAbstractBehaviour
struct BackgroundPlaneAbstractBehaviour_t253889221_0;
// System.Action
struct Action_t2132293834_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Came_1518894406.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_V_2015634094.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"

// System.Void Vuforia.BaseCameraConfiguration::.ctor(Vuforia.BackgroundPlaneAbstractBehaviour)
extern "C"  void BaseCameraConfiguration__ctor_m2064849967_0 (BaseCameraConfiguration_t_1448557560_0 * __this, BackgroundPlaneAbstractBehaviour_t253889221_0 * ___bgpBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::InitCameraDevice(Vuforia.CameraDevice/CameraDeviceMode,Vuforia.VuforiaRenderer/VideoBackgroundReflection,System.Action)
extern "C"  void BaseCameraConfiguration_InitCameraDevice_m_2036530294_0 (BaseCameraConfiguration_t_1448557560_0 * __this, int32_t ___cameraDeviceMode, int32_t ___mirrorVideoBackground, Action_t2132293834_0 * ___onVideoBackgroundConfigChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::Init()
extern "C"  void BaseCameraConfiguration_Init_m1903156812_0 (BaseCameraConfiguration_t_1448557560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::ResetBackgroundPlane(System.Boolean)
extern "C"  void BaseCameraConfiguration_ResetBackgroundPlane_m_1037419982_0 (BaseCameraConfiguration_t_1448557560_0 * __this, bool ___disable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.BaseCameraConfiguration::get_VideoBackgroundMirrored()
extern "C"  int32_t BaseCameraConfiguration_get_VideoBackgroundMirrored_m669487289_0 (BaseCameraConfiguration_t_1448557560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.BaseCameraConfiguration::get_VideoBackgroundViewportRect()
extern "C"  Rect_t_981940947_0  BaseCameraConfiguration_get_VideoBackgroundViewportRect_m336968080_0 (BaseCameraConfiguration_t_1448557560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::SetCameraParameterChanged()
extern "C"  void BaseCameraConfiguration_SetCameraParameterChanged_m_2145662408_0 (BaseCameraConfiguration_t_1448557560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C"  void BaseCameraConfiguration_EnableObjectRenderer_m_291484124_0 (BaseCameraConfiguration_t_1448557560_0 * __this, GameObject_t_184308134_0 * ___go, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C"  void BaseCameraConfiguration_ResolveVideoBackgroundBehaviours_m_1508937297_0 (BaseCameraConfiguration_t_1448557560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.BaseCameraConfiguration::CameraParameterChanged()
extern "C"  bool BaseCameraConfiguration_CameraParameterChanged_m1869083290_0 (BaseCameraConfiguration_t_1448557560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.BaseCameraConfiguration::IsVideoBackgroundEnabled()
extern "C"  bool BaseCameraConfiguration_IsVideoBackgroundEnabled_m_320841588_0 (BaseCameraConfiguration_t_1448557560_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
