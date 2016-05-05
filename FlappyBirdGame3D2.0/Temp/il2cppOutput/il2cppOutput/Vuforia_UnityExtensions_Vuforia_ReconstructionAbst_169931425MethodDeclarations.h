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

// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t_169931425_0;
// Vuforia.Reconstruction
struct Reconstruction_t_2063068996_0;
// Vuforia.ISmartTerrainEventHandler
struct ISmartTerrainEventHandler_t_1551081747_0;
// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t_248238026_0;
// System.Action`1<Vuforia.Prop>
struct Action_1_t_358537171_0;
// System.Action`1<Vuforia.Surface>
struct Action_1_t_218395393_0;
// Vuforia.PropAbstractBehaviour
struct PropAbstractBehaviour_t635676768_0;
// Vuforia.Prop
struct Prop_t_1804128357_0;
// Vuforia.SurfaceAbstractBehaviour
struct SurfaceAbstractBehaviour_t2084483526_0;
// Vuforia.Surface
struct Surface_t_1111141003_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.Prop>
struct IEnumerable_1_t898578450_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.Surface>
struct IEnumerable_1_t_1601751302_0;
// Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t_1987014081_0;
// Vuforia.VuforiaManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t_183824787_0;
// Vuforia.VuforiaManagerImpl/PropData[]
struct PropDataU5BU5D_t2103807867_0;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t618353697_0;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;
// System.Collections.Generic.List`1<Vuforia.Prop>
struct List_1_t1962369413_0;
// System.Collections.Generic.List`1<Vuforia.Surface>
struct List_1_t1526117543_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"

// Vuforia.Reconstruction Vuforia.ReconstructionAbstractBehaviour::get_Reconstruction()
extern "C"  Object_t * ReconstructionAbstractBehaviour_get_Reconstruction_m2123960245_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Start()
extern "C"  void ReconstructionAbstractBehaviour_Start_m668480401_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnDrawGizmos()
extern "C"  void ReconstructionAbstractBehaviour_OnDrawGizmos_m_556162705_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSmartTerrainEventHandler(Vuforia.ISmartTerrainEventHandler)
extern "C"  void ReconstructionAbstractBehaviour_RegisterSmartTerrainEventHandler_m_714552025_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::UnregisterSmartTerrainEventHandler(Vuforia.ISmartTerrainEventHandler)
extern "C"  bool ReconstructionAbstractBehaviour_UnregisterSmartTerrainEventHandler_m_879968480_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterInitializedCallback(System.Action`1<Vuforia.SmartTerrainInitializationInfo>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterInitializedCallback_m_474320821_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Action_1_t_248238026_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterInitializedCallback(System.Action`1<Vuforia.SmartTerrainInitializationInfo>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterInitializedCallback_m_1386925084_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Action_1_t_248238026_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropCreatedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterPropCreatedCallback_m_1141196573_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Action_1_t_358537171_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropCreatedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterPropCreatedCallback_m_47035972_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Action_1_t_358537171_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropUpdatedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterPropUpdatedCallback_m_835403856_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Action_1_t_358537171_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropUpdatedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterPropUpdatedCallback_m258756745_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Action_1_t_358537171_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropDeletedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterPropDeletedCallback_m_2067463534_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Action_1_t_358537171_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropDeletedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterPropDeletedCallback_m_973302933_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Action_1_t_358537171_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceCreatedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterSurfaceCreatedCallback_m_1949198365_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Action_1_t_218395393_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceCreatedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterSurfaceCreatedCallback_m541417980_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Action_1_t_218395393_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceUpdatedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterSurfaceUpdatedCallback_m_1704001034_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Action_1_t_218395393_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceUpdatedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterSurfaceUpdatedCallback_m786615311_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Action_1_t_218395393_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceDeletedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterSurfaceDeletedCallback_m_1203356716_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Action_1_t_218395393_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceDeletedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterSurfaceDeletedCallback_m1287259629_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Action_1_t_218395393_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.PropAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::AssociateProp(Vuforia.PropAbstractBehaviour,Vuforia.Prop)
extern "C"  PropAbstractBehaviour_t635676768_0 * ReconstructionAbstractBehaviour_AssociateProp_m1130490632_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, PropAbstractBehaviour_t635676768_0 * ___templateBehaviour, Object_t * ___newProp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::AssociateSurface(Vuforia.SurfaceAbstractBehaviour,Vuforia.Surface)
extern "C"  SurfaceAbstractBehaviour_t2084483526_0 * ReconstructionAbstractBehaviour_AssociateSurface_m_690285838_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, SurfaceAbstractBehaviour_t2084483526_0 * ___templateBehaviour, Object_t * ___newSurface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::GetActiveProps()
extern "C"  Object_t* ReconstructionAbstractBehaviour_GetActiveProps_m348039058_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::TryGetPropBehaviour(Vuforia.Prop,Vuforia.PropAbstractBehaviour&)
extern "C"  bool ReconstructionAbstractBehaviour_TryGetPropBehaviour_m1440674683_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Object_t * ___prop, PropAbstractBehaviour_t635676768_0 ** ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::GetActiveSurfaces()
extern "C"  Object_t* ReconstructionAbstractBehaviour_GetActiveSurfaces_m_1889516994_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::TryGetSurfaceBehaviour(Vuforia.Surface,Vuforia.SurfaceAbstractBehaviour&)
extern "C"  bool ReconstructionAbstractBehaviour_TryGetSurfaceBehaviour_m1787996133_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Object_t * ___surface, SurfaceAbstractBehaviour_t2084483526_0 ** ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Initialize(Vuforia.Reconstruction)
extern "C"  void ReconstructionAbstractBehaviour_Initialize_m_1792105677_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Object_t * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Deinitialize()
extern "C"  void ReconstructionAbstractBehaviour_Deinitialize_m_2098346716_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateSmartTerrainData(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C"  void ReconstructionAbstractBehaviour_UpdateSmartTerrainData_m_2124671211_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, SmartTerrainRevisionDataU5BU5D_t_1987014081_0* ___smartTerrainRevisions, SurfaceDataU5BU5D_t_183824787_0* ___updatedSurfaces, PropDataU5BU5D_t2103807867_0* ___updatedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::SetBehavioursToNotFound()
extern "C"  void ReconstructionAbstractBehaviour_SetBehavioursToNotFound_m1656175409_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::ClearOnReset()
extern "C"  void ReconstructionAbstractBehaviour_ClearOnReset_m_2090040970_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnReconstructionRemoved()
extern "C"  void ReconstructionAbstractBehaviour_OnReconstructionRemoved_m1045715340_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.PropAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::InstantiatePropBehaviour(Vuforia.PropAbstractBehaviour)
extern "C"  PropAbstractBehaviour_t635676768_0 * ReconstructionAbstractBehaviour_InstantiatePropBehaviour_m_1678854294_0 (Object_t * __this /* static, unused */, PropAbstractBehaviour_t635676768_0 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::AssociatePropBehaviour(Vuforia.Prop,Vuforia.PropAbstractBehaviour)
extern "C"  void ReconstructionAbstractBehaviour_AssociatePropBehaviour_m_978349056_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Object_t * ___trackable, PropAbstractBehaviour_t635676768_0 * ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::InstantiateSurfaceBehaviour(Vuforia.SurfaceAbstractBehaviour)
extern "C"  SurfaceAbstractBehaviour_t2084483526_0 * ReconstructionAbstractBehaviour_InstantiateSurfaceBehaviour_m_1687310960_0 (Object_t * __this /* static, unused */, SurfaceAbstractBehaviour_t2084483526_0 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::AssociateSurfaceBehaviour(Vuforia.Surface,Vuforia.SurfaceAbstractBehaviour)
extern "C"  void ReconstructionAbstractBehaviour_AssociateSurfaceBehaviour_m1835960344_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Object_t * ___trackable, SurfaceAbstractBehaviour_t2084483526_0 * ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SmartTerrainTrackable Vuforia.ReconstructionAbstractBehaviour::FindSmartTerrainTrackable(System.Int32)
extern "C"  Object_t * ReconstructionAbstractBehaviour_FindSmartTerrainTrackable_m_1412010394_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::NotifySurfaceEventHandlers(System.Collections.Generic.IEnumerable`1<Vuforia.Surface>,System.Collections.Generic.IEnumerable`1<Vuforia.Surface>,System.Collections.Generic.IEnumerable`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_NotifySurfaceEventHandlers_m1007075206_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Object_t* ___newSurfaces, Object_t* ___updatedSurfaces, Object_t* ___deletedSurfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::NotifyPropEventHandlers(System.Collections.Generic.IEnumerable`1<Vuforia.Prop>,System.Collections.Generic.IEnumerable`1<Vuforia.Prop>,System.Collections.Generic.IEnumerable`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_NotifyPropEventHandlers_m_1053948320_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Object_t* ___newProps, Object_t* ___updatedProps, Object_t* ___deletedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Vuforia.ReconstructionAbstractBehaviour::ReadMeshBoundaries(System.Int32,System.IntPtr)
extern "C"  Int32U5BU5D_t1872284309_0* ReconstructionAbstractBehaviour_ReadMeshBoundaries_m_1289507565_0 (Object_t * __this /* static, unused */, int32_t ___numBoundaries, IntPtr_t ___boundaryArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterDeletedProps(System.Collections.Generic.List`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterDeletedProps_m_154399877_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, List_1_t1962369413_0 * ___deletedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterDeletedSurfaces(System.Collections.Generic.List`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterDeletedSurfaces_m_1951533065_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, List_1_t1526117543_0 * ___deletedSurfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateSurfaces(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[])
extern "C"  void ReconstructionAbstractBehaviour_UpdateSurfaces_m_280626816_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, SmartTerrainRevisionDataU5BU5D_t_1987014081_0* ___smartTerrainRevisions, SurfaceDataU5BU5D_t_183824787_0* ___updatedSurfaceData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateProps(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C"  void ReconstructionAbstractBehaviour_UpdateProps_m_163645962_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, SmartTerrainRevisionDataU5BU5D_t_1987014081_0* ___smartTerrainRevisions, PropDataU5BU5D_t2103807867_0* ___updatedPropData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_InitializedInEditor()
extern "C"  bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_InitializedInEditor_m_697706273_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetInitializedInEditor(System.Boolean)
extern "C"  void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetInitializedInEditor_m1668850729_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, bool ___initializedInEditor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetMaximumExtentEnabled(System.Boolean)
extern "C"  void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetMaximumExtentEnabled_m_1802687228_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, bool ___maxExtendEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_MaximumExtentEnabled()
extern "C"  bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_MaximumExtentEnabled_m_1934742208_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetMaximumExtent(UnityEngine.Rect)
extern "C"  void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetMaximumExtent_m_1662696773_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, Rect_t_981940947_0  ___rectangle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_MaximumExtent()
extern "C"  Rect_t_981940947_0  ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_MaximumExtent_m_1183161963_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetAutomaticStart(System.Boolean)
extern "C"  void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetAutomaticStart_m1840834372_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, bool ___autoStart, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_AutomaticStart()
extern "C"  bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_AutomaticStart_m_1466119744_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetNavMeshUpdates(System.Boolean)
extern "C"  void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetNavMeshUpdates_m_1823963833_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, bool ___navMeshUpdates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_NavMeshUpdates()
extern "C"  bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_NavMeshUpdates_m172349699_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetNavMeshPadding(System.Single)
extern "C"  void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetNavMeshPadding_m_429275724_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, float ___navMeshPadding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_NavMeshPadding()
extern "C"  float ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_NavMeshPadding_m925030372_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.ScaleEditorMeshesByFactor(System.Single)
extern "C"  void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_ScaleEditorMeshesByFactor_m_1463389921_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.ScaleEditorPropPositionsByFactor(System.Single)
extern "C"  void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_ScaleEditorPropPositionsByFactor_m_36753913_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::.ctor()
extern "C"  void ReconstructionAbstractBehaviour__ctor_m1721342609_0 (ReconstructionAbstractBehaviour_t_169931425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
