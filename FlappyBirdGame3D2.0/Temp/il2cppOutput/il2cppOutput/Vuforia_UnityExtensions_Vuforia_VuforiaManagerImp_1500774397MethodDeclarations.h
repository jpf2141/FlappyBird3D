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
struct VuforiaManagerImpl_t_1500774397_0;
// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t_846425401_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// Vuforia.StateManagerImpl
struct StateManagerImpl_t950488660_0;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBe_1501798036.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_586242864.h"

// System.Void Vuforia.VuforiaManagerImpl::set_WorldCenterMode(Vuforia.VuforiaAbstractBehaviour/WorldCenterMode)
extern "C"  void VuforiaManagerImpl_set_WorldCenterMode_m_1820556450_0 (VuforiaManagerImpl_t_1500774397_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaManagerImpl::get_WorldCenterMode()
extern "C"  int32_t VuforiaManagerImpl_get_WorldCenterMode_m1523415159_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_WorldCenter(Vuforia.WorldCenterTrackableBehaviour)
extern "C"  void VuforiaManagerImpl_set_WorldCenter_m852991972_0 (VuforiaManagerImpl_t_1500774397_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WorldCenterTrackableBehaviour Vuforia.VuforiaManagerImpl::get_WorldCenter()
extern "C"  Object_t * VuforiaManagerImpl_get_WorldCenter_m825256719_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_ARCameraTransform(UnityEngine.Transform)
extern "C"  void VuforiaManagerImpl_set_ARCameraTransform_m202371475_0 (VuforiaManagerImpl_t_1500774397_0 * __this, Transform_t1584899523_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_ARCameraTransform()
extern "C"  Transform_t1584899523_0 * VuforiaManagerImpl_get_ARCameraTransform_m_1846018816_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_CentralAnchorPoint(UnityEngine.Transform)
extern "C"  void VuforiaManagerImpl_set_CentralAnchorPoint_m1738252713_0 (VuforiaManagerImpl_t_1500774397_0 * __this, Transform_t1584899523_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_CentralAnchorPoint()
extern "C"  Transform_t1584899523_0 * VuforiaManagerImpl_get_CentralAnchorPoint_m44596158_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_ParentAnchorPoint(UnityEngine.Transform)
extern "C"  void VuforiaManagerImpl_set_ParentAnchorPoint_m_27244584_0 (VuforiaManagerImpl_t_1500774397_0 * __this, Transform_t1584899523_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_ParentAnchorPoint()
extern "C"  Transform_t1584899523_0 * VuforiaManagerImpl_get_ParentAnchorPoint_m_1994873445_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::get_Initialized()
extern "C"  bool VuforiaManagerImpl_get_Initialized_m75427594_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaManagerImpl::get_CurrentFrameIndex()
extern "C"  int32_t VuforiaManagerImpl_get_CurrentFrameIndex_m1027040858_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_VideoBackgroundTextureSet(System.Boolean)
extern "C"  void VuforiaManagerImpl_set_VideoBackgroundTextureSet_m_682636901_0 (VuforiaManagerImpl_t_1500774397_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::get_VideoBackgroundTextureSet()
extern "C"  bool VuforiaManagerImpl_get_VideoBackgroundTextureSet_m_1237859674_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::Init()
extern "C"  bool VuforiaManagerImpl_Init_m_1054855309_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::Deinit()
extern "C"  void VuforiaManagerImpl_Deinit_m1430241666_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::Update(UnityEngine.ScreenOrientation,System.Boolean)
extern "C"  bool VuforiaManagerImpl_Update_m543407972_0 (VuforiaManagerImpl_t_1500774397_0 * __this, int32_t ___counterRotation, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::StartRendering()
extern "C"  void VuforiaManagerImpl_StartRendering_m_1531515269_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::FinishRendering()
extern "C"  void VuforiaManagerImpl_FinishRendering_m_1593787318_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::Pause(System.Boolean)
extern "C"  void VuforiaManagerImpl_Pause_m_1174148866_0 (VuforiaManagerImpl_t_1500774397_0 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::SetStatesToDiscard()
extern "C"  void VuforiaManagerImpl_SetStatesToDiscard_m2108681712_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::InitializeTrackableContainer(System.Int32)
extern "C"  void VuforiaManagerImpl_InitializeTrackableContainer_m142189582_0 (VuforiaManagerImpl_t_1500774397_0 * __this, int32_t ___numTrackableResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackers(Vuforia.VuforiaManagerImpl/FrameState)
extern "C"  void VuforiaManagerImpl_UpdateTrackers_m_166934943_0 (VuforiaManagerImpl_t_1500774397_0 * __this, FrameState_t_586242864_0  ___frameState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateSmartTerrain(Vuforia.VuforiaManagerImpl/FrameState,Vuforia.StateManagerImpl)
extern "C"  void VuforiaManagerImpl_UpdateSmartTerrain_m2113885486_0 (VuforiaManagerImpl_t_1500774397_0 * __this, FrameState_t_586242864_0  ___frameState, StateManagerImpl_t950488660_0 * ___stateManager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackablesEditor()
extern "C"  void VuforiaManagerImpl_UpdateTrackablesEditor_m2001148309_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateWordTrackables(Vuforia.VuforiaManagerImpl/FrameState)
extern "C"  void VuforiaManagerImpl_UpdateWordTrackables_m_1800016860_0 (VuforiaManagerImpl_t_1500774397_0 * __this, FrameState_t_586242864_0  ___frameState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateImageContainer()
extern "C"  void VuforiaManagerImpl_UpdateImageContainer_m_130979968_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateCameraFrame()
extern "C"  void VuforiaManagerImpl_UpdateCameraFrame_m90676304_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::InjectCameraFrame()
extern "C"  void VuforiaManagerImpl_InjectCameraFrame_m_2030653304_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::.ctor()
extern "C"  void VuforiaManagerImpl__ctor_m_1930496461_0 (VuforiaManagerImpl_t_1500774397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
