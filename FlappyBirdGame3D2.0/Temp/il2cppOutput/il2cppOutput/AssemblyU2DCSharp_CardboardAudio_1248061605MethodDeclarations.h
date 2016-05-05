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

// CardboardAudioListener
struct CardboardAudioListener_t_2013285073_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// CardboardAudioRoom/SurfaceMaterial[]
struct SurfaceMaterialU5BU5D_t_1955645379_0;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t_1268320952_0;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CardboardAudio_Quality_800513493.h"
#include "UnityEngine_UnityEngine_LayerMask_1132430796.h"
#include "UnityEngine_UnityEngine_AudioRolloffMode1315349672.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// System.Void CardboardAudio::.cctor()
extern "C"  void CardboardAudio__cctor_m1852486194_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::get_SampleRate()
extern "C"  int32_t CardboardAudio_get_SampleRate_m_413071734_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::get_NumChannels()
extern "C"  int32_t CardboardAudio_get_NumChannels_m_215964040_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::get_FramesPerBuffer()
extern "C"  int32_t CardboardAudio_get_FramesPerBuffer_m1145913849_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::Initialize(CardboardAudioListener,CardboardAudio/Quality)
extern "C"  void CardboardAudio_Initialize_m1550916369_0 (Object_t * __this /* static, unused */, CardboardAudioListener_t_2013285073_0 * ___listener, int32_t ___quality, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::Shutdown(CardboardAudioListener)
extern "C"  void CardboardAudio_Shutdown_m_2131098805_0 (Object_t * __this /* static, unused */, CardboardAudioListener_t_2013285073_0 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::UpdateAudioListener(System.Single,UnityEngine.LayerMask,System.Single)
extern "C"  void CardboardAudio_UpdateAudioListener_m_995530788_0 (Object_t * __this /* static, unused */, float ___globalGainDb, LayerMask_t_1132430796_0  ___occlusionMask, float ___worldScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::CreateAudioSource(System.Boolean)
extern "C"  int32_t CardboardAudio_CreateAudioSource_m_654547369_0 (Object_t * __this /* static, unused */, bool ___hrtfEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::DestroyAudioSource(System.Int32)
extern "C"  void CardboardAudio_DestroyAudioSource_m_670620207_0 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::UpdateAudioSource(System.Int32,UnityEngine.Transform,System.Boolean,System.Single,System.Single,UnityEngine.AudioRolloffMode,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void CardboardAudio_UpdateAudioSource_m_785442229_0 (Object_t * __this /* static, unused */, int32_t ___id, Transform_t1584899523_0 * ___transform, bool ___bypassRoomEffects, float ___gainDb, float ___spread, int32_t ___rolloffMode, float ___minDistance, float ___maxDistance, float ___alpha, float ___sharpness, float ___occlusion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::CreateAudioRoom()
extern "C"  int32_t CardboardAudio_CreateAudioRoom_m_1903398240_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::DestroyAudioRoom(System.Int32)
extern "C"  void CardboardAudio_DestroyAudioRoom_m539862929_0 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::UpdateAudioRoom(System.Int32,UnityEngine.Transform,CardboardAudioRoom/SurfaceMaterial[],System.Single,System.Single,System.Single,System.Single,UnityEngine.Vector3)
extern "C"  void CardboardAudio_UpdateAudioRoom_m506809698_0 (Object_t * __this /* static, unused */, int32_t ___id, Transform_t1584899523_0 * ___transform, SurfaceMaterialU5BU5D_t_1955645379_0* ___materials, float ___reflectivity, float ___reverbGainDb, float ___reverbBrightness, float ___reverbTime, Vector3_t_725341337_0  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardAudio::ComputeOcclusion(UnityEngine.Transform)
extern "C"  float CardboardAudio_ComputeOcclusion_m_1444453454_0 (Object_t * __this /* static, unused */, Transform_t1584899523_0 * ___sourceTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] CardboardAudio::Generate2dPolarPattern(System.Single,System.Single,System.Int32)
extern "C"  Vector2U5BU5D_t_1268320952_0* CardboardAudio_Generate2dPolarPattern_m_61420926_0 (Object_t * __this /* static, unused */, float ___alpha, float ___order, int32_t ___resolution, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardAudio::ConvertAmplitudeFromDb(System.Single)
extern "C"  float CardboardAudio_ConvertAmplitudeFromDb_m_404046082_0 (Object_t * __this /* static, unused */, float ___db, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::ConvertAudioTransformFromUnity(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void CardboardAudio_ConvertAudioTransformFromUnity_m54255961_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0 * ___position, Quaternion_t1989680039_0 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetListenerGain(System.Single)
extern "C"  void CardboardAudio_SetListenerGain_m_317334051_0 (Object_t * __this /* static, unused */, float ___gain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetListenerTransform(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void CardboardAudio_SetListenerTransform_m1729603530_0 (Object_t * __this /* static, unused */, float ___px, float ___py, float ___pz, float ___qx, float ___qy, float ___qz, float ___qw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::CreateSource(System.Boolean)
extern "C"  int32_t CardboardAudio_CreateSource_m_829793787_0 (Object_t * __this /* static, unused */, bool ___enableHrtf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::DestroySource(System.Int32)
extern "C"  void CardboardAudio_DestroySource_m134339007_0 (Object_t * __this /* static, unused */, int32_t ___sourceId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetSourceBypassRoomEffects(System.Int32,System.Boolean)
extern "C"  void CardboardAudio_SetSourceBypassRoomEffects_m_1403018079_0 (Object_t * __this /* static, unused */, int32_t ___sourceId, bool ___bypassRoomEffects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetSourceDirectivity(System.Int32,System.Single,System.Single)
extern "C"  void CardboardAudio_SetSourceDirectivity_m_1078525985_0 (Object_t * __this /* static, unused */, int32_t ___sourceId, float ___alpha, float ___order, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetSourceDistanceAttenuationMethod(System.Int32,UnityEngine.AudioRolloffMode,System.Single,System.Single)
extern "C"  void CardboardAudio_SetSourceDistanceAttenuationMethod_m_1985085337_0 (Object_t * __this /* static, unused */, int32_t ___sourceId, int32_t ___rolloffMode, float ___minDistance, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetSourceGain(System.Int32,System.Single)
extern "C"  void CardboardAudio_SetSourceGain_m605946219_0 (Object_t * __this /* static, unused */, int32_t ___sourceId, float ___gain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetSourceOcclusionIntensity(System.Int32,System.Single)
extern "C"  void CardboardAudio_SetSourceOcclusionIntensity_m_1723103790_0 (Object_t * __this /* static, unused */, int32_t ___sourceId, float ___intensity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetSourceSpread(System.Int32,System.Single)
extern "C"  void CardboardAudio_SetSourceSpread_m2119579679_0 (Object_t * __this /* static, unused */, int32_t ___sourceId, float ___spreadRad, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetSourceTransform(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void CardboardAudio_SetSourceTransform_m_895524948_0 (Object_t * __this /* static, unused */, int32_t ___sourceId, float ___px, float ___py, float ___pz, float ___qx, float ___qy, float ___qz, float ___qw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CardboardAudio::CreateRoom()
extern "C"  int32_t CardboardAudio_CreateRoom_m_895253938_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::DestroyRoom(System.Int32)
extern "C"  void CardboardAudio_DestroyRoom_m1501593343_0 (Object_t * __this /* static, unused */, int32_t ___roomId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::SetRoomProperties(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,CardboardAudioRoom/SurfaceMaterial[],System.Single,System.Single,System.Single,System.Single)
extern "C"  void CardboardAudio_SetRoomProperties_m1701032588_0 (Object_t * __this /* static, unused */, int32_t ___roomId, float ___px, float ___py, float ___pz, float ___qx, float ___qy, float ___qz, float ___qw, float ___dx, float ___dy, float ___dz, SurfaceMaterialU5BU5D_t_1955645379_0* ___materialNames, float ___reflectionScalar, float ___reverbGain, float ___reverbBrightness, float ___reverbTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::Initialize(CardboardAudio/Quality,System.Int32,System.Int32,System.Int32)
extern "C"  void CardboardAudio_Initialize_m_670691250_0 (Object_t * __this /* static, unused */, int32_t ___quality, int32_t ___sampleRate, int32_t ___numChannels, int32_t ___framesPerBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardAudio::Shutdown()
extern "C"  void CardboardAudio_Shutdown_m_310053409_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
