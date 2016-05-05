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

// Vuforia.VuforiaManagerImpl
struct VuforiaManagerImpl_t410504961;
// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t2878848245;
// UnityEngine.Transform
struct Transform_t284553113;
// Vuforia.StateManagerImpl
struct StateManagerImpl_t2482403154;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeh3547146410.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1394230769.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1711858500.h"
#include "Vuforia_UnityExtensions_Vuforia_StateManagerImpl2482403154.h"

// System.Void Vuforia.VuforiaManagerImpl::set_WorldCenterMode(Vuforia.VuforiaAbstractBehaviour/WorldCenterMode)
extern "C"  void VuforiaManagerImpl_set_WorldCenterMode_m2474410846 (VuforiaManagerImpl_t410504961 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaManagerImpl::get_WorldCenterMode()
extern "C"  int32_t VuforiaManagerImpl_get_WorldCenterMode_m1523415159 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_WorldCenter(Vuforia.WorldCenterTrackableBehaviour)
extern "C"  void VuforiaManagerImpl_set_WorldCenter_m852991972 (VuforiaManagerImpl_t410504961 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WorldCenterTrackableBehaviour Vuforia.VuforiaManagerImpl::get_WorldCenter()
extern "C"  Il2CppObject * VuforiaManagerImpl_get_WorldCenter_m825256719 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_ARCameraTransform(UnityEngine.Transform)
extern "C"  void VuforiaManagerImpl_set_ARCameraTransform_m202371475 (VuforiaManagerImpl_t410504961 * __this, Transform_t284553113 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_ARCameraTransform()
extern "C"  Transform_t284553113 * VuforiaManagerImpl_get_ARCameraTransform_m2448948480 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_CentralAnchorPoint(UnityEngine.Transform)
extern "C"  void VuforiaManagerImpl_set_CentralAnchorPoint_m1738252713 (VuforiaManagerImpl_t410504961 * __this, Transform_t284553113 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_CentralAnchorPoint()
extern "C"  Transform_t284553113 * VuforiaManagerImpl_get_CentralAnchorPoint_m44596158 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_ParentAnchorPoint(UnityEngine.Transform)
extern "C"  void VuforiaManagerImpl_set_ParentAnchorPoint_m4267722712 (VuforiaManagerImpl_t410504961 * __this, Transform_t284553113 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_ParentAnchorPoint()
extern "C"  Transform_t284553113 * VuforiaManagerImpl_get_ParentAnchorPoint_m2300093851 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::get_Initialized()
extern "C"  bool VuforiaManagerImpl_get_Initialized_m75427594 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaManagerImpl::get_CurrentFrameIndex()
extern "C"  int32_t VuforiaManagerImpl_get_CurrentFrameIndex_m1027040858 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_VideoBackgroundTextureSet(System.Boolean)
extern "C"  void VuforiaManagerImpl_set_VideoBackgroundTextureSet_m3612330395 (VuforiaManagerImpl_t410504961 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::get_VideoBackgroundTextureSet()
extern "C"  bool VuforiaManagerImpl_get_VideoBackgroundTextureSet_m3057107622 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::Init()
extern "C"  bool VuforiaManagerImpl_Init_m3240111987 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::Deinit()
extern "C"  void VuforiaManagerImpl_Deinit_m1430241666 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::Update(UnityEngine.ScreenOrientation,System.Boolean)
extern "C"  bool VuforiaManagerImpl_Update_m543407972 (VuforiaManagerImpl_t410504961 * __this, int32_t ___counterRotation, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::StartRendering()
extern "C"  void VuforiaManagerImpl_StartRendering_m2763452027 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::FinishRendering()
extern "C"  void VuforiaManagerImpl_FinishRendering_m2701179978 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::Pause(System.Boolean)
extern "C"  void VuforiaManagerImpl_Pause_m3120818430 (VuforiaManagerImpl_t410504961 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::SetStatesToDiscard()
extern "C"  void VuforiaManagerImpl_SetStatesToDiscard_m2108681712 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::InitializeTrackableContainer(System.Int32)
extern "C"  void VuforiaManagerImpl_InitializeTrackableContainer_m142189582 (VuforiaManagerImpl_t410504961 * __this, int32_t ___numTrackableResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackers(Vuforia.VuforiaManagerImpl/FrameState)
extern "C"  void VuforiaManagerImpl_UpdateTrackers_m4128032353 (VuforiaManagerImpl_t410504961 * __this, FrameState_t1711858500  ___frameState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateSmartTerrain(Vuforia.VuforiaManagerImpl/FrameState,Vuforia.StateManagerImpl)
extern "C"  void VuforiaManagerImpl_UpdateSmartTerrain_m2113885486 (VuforiaManagerImpl_t410504961 * __this, FrameState_t1711858500  ___frameState, StateManagerImpl_t2482403154 * ___stateManager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackablesEditor()
extern "C"  void VuforiaManagerImpl_UpdateTrackablesEditor_m2001148309 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateWordTrackables(Vuforia.VuforiaManagerImpl/FrameState)
extern "C"  void VuforiaManagerImpl_UpdateWordTrackables_m2494950436 (VuforiaManagerImpl_t410504961 * __this, FrameState_t1711858500  ___frameState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateImageContainer()
extern "C"  void VuforiaManagerImpl_UpdateImageContainer_m4163987328 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateCameraFrame()
extern "C"  void VuforiaManagerImpl_UpdateCameraFrame_m90676304 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::InjectCameraFrame()
extern "C"  void VuforiaManagerImpl_InjectCameraFrame_m2264313992 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::.ctor()
extern "C"  void VuforiaManagerImpl__ctor_m2364470835 (VuforiaManagerImpl_t410504961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
