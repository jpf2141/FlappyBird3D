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

// Vuforia.IOSUnityPlayer
struct IOSUnityPlayer_t343511152_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitEr401330740.h"

// System.Void Vuforia.IOSUnityPlayer::.ctor()
extern "C"  void IOSUnityPlayer__ctor_m918790246_0 (IOSUnityPlayer_t343511152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::LoadNativeLibraries()
extern "C"  void IOSUnityPlayer_LoadNativeLibraries_m1165765568_0 (IOSUnityPlayer_t343511152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::InitializePlatform()
extern "C"  void IOSUnityPlayer_InitializePlatform_m2049752257_0 (IOSUnityPlayer_t343511152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaUnity/InitError Vuforia.IOSUnityPlayer::Start(System.String)
extern "C"  int32_t IOSUnityPlayer_Start_m970549361_0 (IOSUnityPlayer_t343511152_0 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::Update()
extern "C"  void IOSUnityPlayer_Update_m144588647_0 (IOSUnityPlayer_t343511152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::Dispose()
extern "C"  void IOSUnityPlayer_Dispose_m_1907553501_0 (IOSUnityPlayer_t343511152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnPause()
extern "C"  void IOSUnityPlayer_OnPause_m_1612352933_0 (IOSUnityPlayer_t343511152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnResume()
extern "C"  void IOSUnityPlayer_OnResume_m_52746870_0 (IOSUnityPlayer_t343511152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnDestroy()
extern "C"  void IOSUnityPlayer_OnDestroy_m_2124230049_0 (IOSUnityPlayer_t343511152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::InitializeSurface()
extern "C"  void IOSUnityPlayer_InitializeSurface_m72295617_0 (IOSUnityPlayer_t343511152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::SetUnityScreenOrientation()
extern "C"  void IOSUnityPlayer_SetUnityScreenOrientation_m_335131755_0 (IOSUnityPlayer_t343511152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::setPlatFormNative()
extern "C"  void IOSUnityPlayer_setPlatFormNative_m_554946128_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.IOSUnityPlayer::initQCARiOS(System.Int32,System.Int32,System.String)
extern "C"  int32_t IOSUnityPlayer_initQCARiOS_m1113145074_0 (Object_t * __this /* static, unused */, int32_t ___rendererAPI, int32_t ___screenOrientation, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::setSurfaceOrientationiOS(System.Int32)
extern "C"  void IOSUnityPlayer_setSurfaceOrientationiOS_m_1485067049_0 (Object_t * __this /* static, unused */, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
