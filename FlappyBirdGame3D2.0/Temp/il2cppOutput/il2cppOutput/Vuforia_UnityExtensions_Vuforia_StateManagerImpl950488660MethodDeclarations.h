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

// Vuforia.StateManagerImpl
struct StateManagerImpl_t950488660_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>
struct IEnumerable_1_t_1394670403_0;
// Vuforia.WordManager
struct WordManager_t_1394506229_0;
// Vuforia.Trackable
struct Trackable_t915029997_0;
// Vuforia.DataSet
struct DataSet_t_2109692640_0;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t516166480_0;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t_440988281_0;
// Vuforia.ImageTarget
struct ImageTarget_t_576971884_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t1467944553_0;
// Vuforia.Marker
struct Marker_t1297937010_0;
// System.String
struct String_t;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t_2137284930_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// Vuforia.VuforiaManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t_1279381598_0;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t728963554_0;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t953134047_0;
// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t_661017976_0;
// Vuforia.VirtualButtonAbstractBehaviour[]
struct VirtualButtonAbstractBehaviourU5BU5D_t_1415351752_0;
// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t777283561_0;
// Vuforia.MultiTarget
struct MultiTarget_t1282631922_0;
// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t_890314436_0;
// Vuforia.CylinderTarget
struct CylinderTarget_t_1266207937_0;
// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t544862643_0;
// Vuforia.ObjectTarget
struct ObjectTarget_t_1036703256_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1014981767.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetActiveTrackableBehaviours()
extern "C"  Object_t* StateManagerImpl_GetActiveTrackableBehaviours_m_694010901_0 (StateManagerImpl_t950488660_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetTrackableBehaviours()
extern "C"  Object_t* StateManagerImpl_GetTrackableBehaviours_m267458321_0 (StateManagerImpl_t950488660_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordManager Vuforia.StateManagerImpl::GetWordManager()
extern "C"  WordManager_t_1394506229_0 * StateManagerImpl_GetWordManager_m316154603_0 (StateManagerImpl_t950488660_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::DestroyTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C"  void StateManagerImpl_DestroyTrackableBehavioursForTrackable_m503450371_0 (StateManagerImpl_t950488660_0 * __this, Object_t * ___trackable, bool ___destroyGameObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateMarkerBehaviours()
extern "C"  void StateManagerImpl_AssociateMarkerBehaviours_m620121678_0 (StateManagerImpl_t950488660_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateTrackableBehavioursForDataSet(Vuforia.DataSet)
extern "C"  void StateManagerImpl_AssociateTrackableBehavioursForDataSet_m330023224_0 (StateManagerImpl_t950488660_0 * __this, DataSet_t_2109692640_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RegisterExternallyManagedTrackableBehaviour(Vuforia.TrackableBehaviour)
extern "C"  void StateManagerImpl_RegisterExternallyManagedTrackableBehaviour_m486971544_0 (StateManagerImpl_t950488660_0 * __this, TrackableBehaviour_t516166480_0 * ___trackableBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UnregisterExternallyManagedTrackableBehaviour(System.Int32)
extern "C"  void StateManagerImpl_UnregisterExternallyManagedTrackableBehaviour_m966889332_0 (StateManagerImpl_t950488660_0 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDestroyedTrackables()
extern "C"  void StateManagerImpl_RemoveDestroyedTrackables_m1327333987_0 (StateManagerImpl_t950488660_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::ClearTrackableBehaviours()
extern "C"  void StateManagerImpl_ClearTrackableBehaviours_m517145104_0 (StateManagerImpl_t950488660_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject)
extern "C"  ImageTargetAbstractBehaviour_t_440988281_0 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m432968851_0 (StateManagerImpl_t950488660_0 * __this, Object_t * ___trackable, GameObject_t_184308134_0 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject,Vuforia.DataSet)
extern "C"  ImageTargetAbstractBehaviour_t_440988281_0 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m_1733664813_0 (StateManagerImpl_t950488660_0 * __this, Object_t * ___trackable, GameObject_t_184308134_0 * ___gameObject, DataSet_t_2109692640_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,System.String)
extern "C"  MarkerAbstractBehaviour_t1467944553_0 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m185784668_0 (StateManagerImpl_t950488660_0 * __this, Object_t * ___trackable, String_t* ___gameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,UnityEngine.GameObject)
extern "C"  MarkerAbstractBehaviour_t1467944553_0 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m_1377289634_0 (StateManagerImpl_t950488660_0 * __this, Object_t * ___trackable, GameObject_t_184308134_0 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::SetTrackableBehavioursForTrackableToNotFound(Vuforia.Trackable)
extern "C"  void StateManagerImpl_SetTrackableBehavioursForTrackableToNotFound_m_2022512072_0 (StateManagerImpl_t950488660_0 * __this, Object_t * ___trackable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::EnableTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C"  void StateManagerImpl_EnableTrackableBehavioursForTrackable_m_1528714632_0 (StateManagerImpl_t950488660_0 * __this, Object_t * ___trackable, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDisabledTrackablesFromQueue(System.Collections.Generic.LinkedList`1<System.Int32>&)
extern "C"  void StateManagerImpl_RemoveDisabledTrackablesFromQueue_m_2145555651_0 (StateManagerImpl_t950488660_0 * __this, LinkedList_1_t_2137284930_0 ** ___trackableIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateCameraPoseWRTTrackable(UnityEngine.Transform,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/TrackableResultData[],System.Int32)
extern "C"  void StateManagerImpl_UpdateCameraPoseWRTTrackable_m_9232722_0 (StateManagerImpl_t950488660_0 * __this, Transform_t1584899523_0 * ___cameraTransform, Transform_t1584899523_0 * ___parentTransformToUpdate, TrackableResultDataU5BU5D_t_1279381598_0* ___trackableResultDataArray, int32_t ___originTrackableID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateTrackablePoses(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/TrackableResultData[],System.Int32,System.Int32,System.Boolean)
extern "C"  void StateManagerImpl_UpdateTrackablePoses_m1707442146_0 (StateManagerImpl_t950488660_0 * __this, Transform_t1584899523_0 * ___arCameraTransform, TrackableResultDataU5BU5D_t_1279381598_0* ___trackableResultDataArray, int32_t ___originTrackableID, int32_t ___frameIndex, bool ___skipTrackablesWithOldTimestamp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateVirtualButtons(System.Int32,System.IntPtr)
extern "C"  void StateManagerImpl_UpdateVirtualButtons_m575181952_0 (StateManagerImpl_t950488660_0 * __this, int32_t ___numVirtualButtons, IntPtr_t ___virtualButtonPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/WordData[],Vuforia.VuforiaManagerImpl/WordResultData[])
extern "C"  void StateManagerImpl_UpdateWords_m_1130689700_0 (StateManagerImpl_t950488660_0 * __this, Transform_t1584899523_0 * ___arCameraTransform, WordDataU5BU5D_t728963554_0* ___wordData, WordResultDataU5BU5D_t953134047_0* ___wordResultData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DeviceTrackingManager Vuforia.StateManagerImpl::GetDeviceTrackingManager()
extern "C"  DeviceTrackingManager_t_661017976_0 * StateManagerImpl_GetDeviceTrackingManager_m_1693069045_0 (StateManagerImpl_t950488660_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateVirtualButtonBehaviours(Vuforia.VirtualButtonAbstractBehaviour[],Vuforia.DataSet)
extern "C"  void StateManagerImpl_AssociateVirtualButtonBehaviours_m223238443_0 (StateManagerImpl_t950488660_0 * __this, VirtualButtonAbstractBehaviourU5BU5D_t_1415351752_0* ___vbBehaviours, DataSet_t_2109692640_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::CreateMissingDataSetTrackableBehaviours(Vuforia.DataSet)
extern "C"  void StateManagerImpl_CreateMissingDataSetTrackableBehaviours_m_1839184455_0 (StateManagerImpl_t950488660_0 * __this, DataSet_t_2109692640_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateImageTargetBehaviour(Vuforia.ImageTarget)
extern "C"  ImageTargetAbstractBehaviour_t_440988281_0 * StateManagerImpl_CreateImageTargetBehaviour_m_1940925213_0 (StateManagerImpl_t950488660_0 * __this, Object_t * ___imageTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MultiTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateMultiTargetBehaviour(Vuforia.MultiTarget)
extern "C"  MultiTargetAbstractBehaviour_t777283561_0 * StateManagerImpl_CreateMultiTargetBehaviour_m1254064133_0 (StateManagerImpl_t950488660_0 * __this, Object_t * ___multiTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CylinderTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateCylinderTargetBehaviour(Vuforia.CylinderTarget)
extern "C"  CylinderTargetAbstractBehaviour_t_890314436_0 * StateManagerImpl_CreateCylinderTargetBehaviour_m_1192687620_0 (StateManagerImpl_t950488660_0 * __this, Object_t * ___cylinderTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateObjectTargetBehaviour(Vuforia.ObjectTarget)
extern "C"  ObjectTargetAbstractBehaviour_t544862643_0 * StateManagerImpl_CreateObjectTargetBehaviour_m618352929_0 (StateManagerImpl_t950488660_0 * __this, Object_t * ___objectTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::InitializeMarkerBehaviour(Vuforia.MarkerAbstractBehaviour,Vuforia.Marker)
extern "C"  void StateManagerImpl_InitializeMarkerBehaviour_m743407158_0 (StateManagerImpl_t950488660_0 * __this, MarkerAbstractBehaviour_t1467944553_0 * ___markerBehaviour, Object_t * ___marker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionCameraToTrackable(Vuforia.TrackableBehaviour,UnityEngine.Transform,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData)
extern "C"  void StateManagerImpl_PositionCameraToTrackable_m_744481057_0 (StateManagerImpl_t950488660_0 * __this, TrackableBehaviour_t516166480_0 * ___trackable, Transform_t1584899523_0 * ___cameraTransform, Transform_t1584899523_0 * ___parentTransformToUpdate, PoseData_t1014981767_0  ___camToTargetPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.StateManagerImpl::ExtractTranslationFromMatrix(UnityEngine.Matrix4x4)
extern "C"  Vector3_t_725341337_0  StateManagerImpl_ExtractTranslationFromMatrix_m1595724611_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.StateManagerImpl::ExtractRotationFromMatrix(UnityEngine.Matrix4x4)
extern "C"  Quaternion_t1989680039_0  StateManagerImpl_ExtractRotationFromMatrix_m874129750_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionTrackable(Vuforia.TrackableBehaviour,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData)
extern "C"  void StateManagerImpl_PositionTrackable_m56198088_0 (StateManagerImpl_t950488660_0 * __this, TrackableBehaviour_t516166480_0 * ___trackableBehaviour, Transform_t1584899523_0 * ___arCameraTransform, PoseData_t1014981767_0  ___camToTargetPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::.ctor()
extern "C"  void StateManagerImpl__ctor_m_977228862_0 (StateManagerImpl_t950488660_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
