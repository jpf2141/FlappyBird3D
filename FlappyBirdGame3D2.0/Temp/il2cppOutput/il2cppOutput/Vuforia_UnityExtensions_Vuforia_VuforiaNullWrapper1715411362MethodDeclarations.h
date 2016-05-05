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

// Vuforia.VuforiaNullWrapper
struct VuforiaNullWrapper_t1715411362_0;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t586045924_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceInitCamera(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceInitCamera_m_1144086339_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceDeinitCamera()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceDeinitCamera_m_682163475_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceStartCamera()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceStartCamera_m118686418_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceStopCamera()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceStopCamera_m621362782_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceGetNumVideoModes()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceGetNumVideoModes_m388352124_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceGetCameraDirection()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceGetCameraDirection_m_1378597125_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_CameraDeviceGetVideoMode_m_959611918_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSelectVideoMode_m2029954526_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSetFlashTorchMode_m_1797934931_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSetFocusMode_m2067172417_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSetCameraConfiguration_m944622144_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_CameraDeviceGetCameraFieldOfViewRads_m1866916830_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___fovVectorPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_QcarSetFrameFormat_m_1295364475_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetExists(System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_DataSetExists_m351694127_0 (VuforiaNullWrapper_t1715411362_0 * __this, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetLoad_m_1948808249_0 (VuforiaNullWrapper_t1715411362_0 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetGetNumTrackableType_m1963356434_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetGetTrackablesOfType_m_1431053331_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_DataSetGetTrackableName_m110286776_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t586045924_0 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetCreateTrackable_m1846258316_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t586045924_0 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_DataSetDestroyTrackable_m1690248780_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetHasReachedTrackableLimit_m286875720_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::GetCameraThreadID()
extern "C"  int32_t VuforiaNullWrapper_GetCameraThreadID_m1139125286_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetBuilderBuild_m1323521538_0 (VuforiaNullWrapper_t1715411362_0 * __this, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::FrameCounterGetBenchmarkingData(System.IntPtr)
extern "C"  void VuforiaNullWrapper_FrameCounterGetBenchmarkingData_m1772882764_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___benchmarkingData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ImageTargetBuilderStartScan()
extern "C"  void VuforiaNullWrapper_ImageTargetBuilderStartScan_m1352179042_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ImageTargetBuilderStopScan()
extern "C"  void VuforiaNullWrapper_ImageTargetBuilderStopScan_m1925652606_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetBuilderGetFrameQuality()
extern "C"  int32_t VuforiaNullWrapper_ImageTargetBuilderGetFrameQuality_m_2123351521_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ImageTargetBuilderGetTrackableSource()
extern "C"  IntPtr_t VuforiaNullWrapper_ImageTargetBuilderGetTrackableSource_m_1635164162_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetCreateVirtualButton_m668173961_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetDestroyVirtualButton_m_1079709577_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNullWrapper_VirtualButtonGetId_m765877116_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetGetNumVirtualButtons_m769254456_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetGetVirtualButtons_m678073627_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetGetVirtualButtonName_m59865864_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t586045924_0 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_CylinderTargetGetDimensions_m1085300828_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_CylinderTargetSetSideLength_m_472152361_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_CylinderTargetSetTopDiameter_m_1891467054_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_CylinderTargetSetBottomDiameter_m_137695428_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTargetSetSize_m_1019145915_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTargetGetSize_m1867335633_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ObjectTrackerCreateDataSet()
extern "C"  IntPtr_t VuforiaNullWrapper_ObjectTrackerCreateDataSet_m1373449928_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerDestroyDataSet_m1368763607_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerActivateDataSet_m151844876_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerDeactivateDataSet_m_2015888051_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerPersistExtendedTracking_m2010663800_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerResetExtendedTracking()
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerResetExtendedTracking_m_1389923358_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C"  void VuforiaNullWrapper_OnSurfaceChanged_m_1741410416_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnPause()
extern "C"  void VuforiaNullWrapper_OnPause_m_1149532695_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnResume()
extern "C"  void VuforiaNullWrapper_OnResume_m1409778620_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::HasSurfaceBeenRecreated()
extern "C"  bool VuforiaNullWrapper_HasSurfaceBeenRecreated_m_891104650_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C"  int32_t VuforiaNullWrapper_MarkerSetSize_m426286117_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_MarkerTrackerCreateMarker_m_171873972_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_MarkerTrackerDestroyMarker_m_926182397_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::InitPlatformNative()
extern "C"  void VuforiaNullWrapper_InitPlatformNative_m_356068822_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::InitFrameState(System.IntPtr)
extern "C"  void VuforiaNullWrapper_InitFrameState_m_223916304_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::DeinitFrameState(System.IntPtr)
extern "C"  void VuforiaNullWrapper_DeinitFrameState_m_1499640369_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_UpdateQCAR_m_1739954242_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererEnd()
extern "C"  void VuforiaNullWrapper_RendererEnd_m_1898675478_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_QcarGetBufferSize_m_911589749_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNullWrapper_QcarAddCameraFrame_m_1177109478_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNullWrapper_RendererSetVideoBackgroundCfg_m_1784043992_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNullWrapper_RendererGetVideoBackgroundCfg_m582156724_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C"  void VuforiaNullWrapper_RendererGetVideoBackgroundTextureInfo_m_1225999857_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_RendererSetVideoBackgroundTextureID_m_1778092669_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundTexturePtr(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_RendererSetVideoBackgroundTexturePtr_m_1096191557_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___texturePtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C"  int32_t VuforiaNullWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m_482398910_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererGetRecommendedFps(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_RendererGetRecommendedFps_m1245337816_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererGetGraphicsAPI()
extern "C"  int32_t VuforiaNullWrapper_RendererGetGraphicsAPI_m748674008_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_QcarSetHint_m_78149527_0 (VuforiaNullWrapper_t1715411362_0 * __this, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_GetProjectionGL_m_1173525591_0 (VuforiaNullWrapper_t1715411362_0 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNullWrapper_SetApplicationEnvironment_m_1972774744_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___major, int32_t ___minor, int32_t ___change, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetStateBufferSize(System.Int32)
extern "C"  void VuforiaNullWrapper_SetStateBufferSize_m134417777_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C"  bool VuforiaNullWrapper_SmartTerrainTrackerSetScaleToMillimeter_m1144492928_0 (VuforiaNullWrapper_t1715411362_0 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerInitBuilder()
extern "C"  bool VuforiaNullWrapper_SmartTerrainTrackerInitBuilder_m_1378404767_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C"  bool VuforiaNullWrapper_SmartTerrainTrackerDeinitBuilder_m_1820841408_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C"  IntPtr_t VuforiaNullWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m_1900140025_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C"  IntPtr_t VuforiaNullWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m_959433793_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_SmartTerrainBuilderAddReconstruction_m2056739676_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_SmartTerrainBuilderRemoveReconstruction_m1703729789_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_SmartTerrainBuilderDestroyReconstruction_m_830715997_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionStart(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_ReconstructionStart_m_662593162_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionStop(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_ReconstructionStop_m_1646520596_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_ReconstructionIsReconstructing_m1872386950_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionReset(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_ReconstructionReset_m_1652182807_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C"  void VuforiaNullWrapper_ReconstructionSetNavMeshPadding_m_109475608_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  bool VuforiaNullWrapper_ReconstructionFromTargetSetInitializationTarget_m1977312070_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C"  bool VuforiaNullWrapper_ReconstructionSetMaximumArea_m_554269359_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ReconstructioFromEnvironmentGetReconstructionState_m1506244898_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStartInit(System.String,System.String)
extern "C"  int32_t VuforiaNullWrapper_TargetFinderStartInit_m_1096745251_0 (VuforiaNullWrapper_t1715411362_0 * __this, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderGetInitState()
extern "C"  int32_t VuforiaNullWrapper_TargetFinderGetInitState_m402531070_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderDeinit()
extern "C"  int32_t VuforiaNullWrapper_TargetFinderDeinit_m580408676_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStartRecognition()
extern "C"  int32_t VuforiaNullWrapper_TargetFinderStartRecognition_m_1016412472_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStop()
extern "C"  int32_t VuforiaNullWrapper_TargetFinderStop_m_1433020267_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C"  void VuforiaNullWrapper_TargetFinderSetUIScanlineColor_m2095897906_0 (VuforiaNullWrapper_t1715411362_0 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C"  void VuforiaNullWrapper_TargetFinderSetUIPointColor_m_2020159823_0 (VuforiaNullWrapper_t1715411362_0 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_TargetFinderUpdate_m_1491918125_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___targetFinderState, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_TargetFinderGetResults_m1011468950_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_TargetFinderEnableTracking_m1263423829_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_TargetFinderGetImageTargets_m_1803033893_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderClearTrackables()
extern "C"  void VuforiaNullWrapper_TargetFinderClearTrackables_m808629462_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_TextTrackerSetRegionOfInterest_m366207513_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNullWrapper_TextTrackerGetRegionOfInterest_m_1949011470_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_WordListLoadWordList_m462582119_0 (VuforiaNullWrapper_t1715411362_0 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_WordListAddWordsFromFile_m795317511_0 (VuforiaNullWrapper_t1715411362_0 * __this, String_t* ___path, int32_t ___storagetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordU(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordListAddWordU_m1248476454_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListRemoveWordU(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordListRemoveWordU_m709328047_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListContainsWordU(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordListContainsWordU_m_1261606390_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListUnloadAllLists()
extern "C"  int32_t VuforiaNullWrapper_WordListUnloadAllLists_m1889157527_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListSetFilterMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_WordListSetFilterMode_m1098261164_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListGetFilterMode()
extern "C"  int32_t VuforiaNullWrapper_WordListGetFilterMode_m413950671_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_WordListLoadFilterList_m1534160789_0 (VuforiaNullWrapper_t1715411362_0 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordListAddWordToFilterListU_m466048087_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordListRemoveWordFromFilterListU_m_2141463921_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListClearFilterList()
extern "C"  int32_t VuforiaNullWrapper_WordListClearFilterList_m_131616703_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListGetFilterListWordCount()
extern "C"  int32_t VuforiaNullWrapper_WordListGetFilterListWordCount_m_1369645091_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::WordListGetFilterListWordU(System.Int32)
extern "C"  IntPtr_t VuforiaNullWrapper_WordListGetFilterListWordU_m439381629_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordGetLetterMask_m1443336739_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordGetLetterBoundingBoxes_m1177754974_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TrackerManagerInitTracker(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_TrackerManagerInitTracker_m1781412298_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_TrackerManagerDeinitTracker_m353930345_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::TrackerStart(System.Int32)
extern "C"  bool VuforiaNullWrapper_TrackerStart_m_537005859_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TrackerStop(System.Int32)
extern "C"  void VuforiaNullWrapper_TrackerStop_m826445821_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_VirtualButtonSetEnabled_m_808067827_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_VirtualButtonSetSensitivity_m_727531925_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_VirtualButtonSetAreaRectangle_m_1377226985_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarInit(System.String)
extern "C"  int32_t VuforiaNullWrapper_QcarInit_m_1674532205_0 (VuforiaNullWrapper_t1715411362_0 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarDeinit()
extern "C"  int32_t VuforiaNullWrapper_QcarDeinit_m_363811568_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_StartExtendedTracking_m1287524315_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_StopExtendedTracking_m_2015361583_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::DeviceIsEyewearDevice()
extern "C"  bool VuforiaNullWrapper_DeviceIsEyewearDevice_m_385901818_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearDeviceIsSeeThru()
extern "C"  bool VuforiaNullWrapper_EyewearDeviceIsSeeThru_m386272604_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearDeviceGetScreenOrientation()
extern "C"  int32_t VuforiaNullWrapper_EyewearDeviceGetScreenOrientation_m2031105818_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearDeviceIsDualDisplay()
extern "C"  bool VuforiaNullWrapper_EyewearDeviceIsDualDisplay_m_1989602344_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearDeviceIsDisplayExtended()
extern "C"  bool VuforiaNullWrapper_EyewearDeviceIsDisplayExtended_m_2007196275_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearDeviceIsDisplayExtendedGLOnly()
extern "C"  bool VuforiaNullWrapper_EyewearDeviceIsDisplayExtendedGLOnly_m_2058363266_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearDeviceSetDisplayExtended(System.Boolean)
extern "C"  bool VuforiaNullWrapper_EyewearDeviceSetDisplayExtended_m481626486_0 (VuforiaNullWrapper_t1715411362_0 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearDeviceIsPredictiveTrackingEnabled()
extern "C"  bool VuforiaNullWrapper_EyewearDeviceIsPredictiveTrackingEnabled_m_1318697635_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearDeviceSetPredictiveTracking(System.Boolean)
extern "C"  bool VuforiaNullWrapper_EyewearDeviceSetPredictiveTracking_m1772264555_0 (VuforiaNullWrapper_t1715411362_0 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetMaxCount()
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMGetMaxCount_m708279447_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetUsedCount()
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMGetUsedCount_m848031976_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C"  bool VuforiaNullWrapper_EyewearCPMIsProfileUsed_m248272061_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetActiveProfile()
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMGetActiveProfile_m_363490663_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C"  bool VuforiaNullWrapper_EyewearCPMSetActiveProfile_m710737860_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMGetCameraToEyePose_m_1732528228_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMGetEyeProjection_m_522058114_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMSetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMSetCameraToEyePose_m1631670440_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMSetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMSetEyeProjection_m_1546489206_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C"  IntPtr_t VuforiaNullWrapper_EyewearCPMGetProfileName_m_1124608604_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C"  bool VuforiaNullWrapper_EyewearCPMSetProfileName_m887250595_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMClearProfile(System.Int32)
extern "C"  bool VuforiaNullWrapper_EyewearCPMClearProfile_m_906154721_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  bool VuforiaNullWrapper_EyewearUserCalibratorInit_m_1370016134_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C"  float VuforiaNullWrapper_EyewearUserCalibratorGetMinScaleHint_m_1294038283_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C"  float VuforiaNullWrapper_EyewearUserCalibratorGetMaxScaleHint_m_1950954333_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C"  bool VuforiaNullWrapper_EyewearUserCalibratorIsStereoStretched_m_2102616536_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  bool VuforiaNullWrapper_EyewearUserCalibratorGetProjectionMatrix_m346791851_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___cameraToEyeMatrix, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_Recenter()
extern "C"  int32_t VuforiaNullWrapper_RotationalDeviceTracker_Recenter_m_1035842774_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_SetPosePrediction(System.Boolean)
extern "C"  int32_t VuforiaNullWrapper_RotationalDeviceTracker_SetPosePrediction_m_1797344071_0 (VuforiaNullWrapper_t1715411362_0 * __this, bool ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_GetPosePrediction()
extern "C"  int32_t VuforiaNullWrapper_RotationalDeviceTracker_GetPosePrediction_m_923638346_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_SetModelCorrectionMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_RotationalDeviceTracker_SetModelCorrectionMode_m_1071322789_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_GetModelCorrectionMode()
extern "C"  int32_t VuforiaNullWrapper_RotationalDeviceTracker_GetModelCorrectionMode_m1476051094_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_SetModelCorrectionModeWithTransform(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_RotationalDeviceTracker_SetModelCorrectionModeWithTransform_m_941796131_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___mode, IntPtr_t ___pivot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_GetModelCorrectionTransform(System.IntPtr)
extern "C"  void VuforiaNullWrapper_RotationalDeviceTracker_GetModelCorrectionTransform_m_1032715795_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___pivot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNullWrapper_ViewerParameters_delete_m1371573204_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___toDelete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParameters_copy(System.IntPtr)
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParameters_copy_m1104961279_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___toCopy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::ViewerParameters_GetVersion(System.IntPtr)
extern "C"  float VuforiaNullWrapper_ViewerParameters_GetVersion_m672604521_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParameters_GetName(System.IntPtr)
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParameters_GetName_m_698281423_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParameters_GetManufacturer(System.IntPtr)
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParameters_GetManufacturer_m1082964779_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ViewerParameters_GetButtonType(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ViewerParameters_GetButtonType_m_1295583719_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::ViewerParameters_GetScreenToLensDistance(System.IntPtr)
extern "C"  float VuforiaNullWrapper_ViewerParameters_GetScreenToLensDistance_m669849451_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::ViewerParameters_GetInterLensDistance(System.IntPtr)
extern "C"  float VuforiaNullWrapper_ViewerParameters_GetInterLensDistance_m_2095333934_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ViewerParameters_GetTrayAlignment(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ViewerParameters_GetTrayAlignment_m1648401556_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::ViewerParameters_GetLensCentreToTrayDistance(System.IntPtr)
extern "C"  float VuforiaNullWrapper_ViewerParameters_GetLensCentreToTrayDistance_m101158982_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ViewerParameters_GetNumDistortionCoefficients(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ViewerParameters_GetNumDistortionCoefficients_m656567840_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::ViewerParameters_GetDistortionCoefficient(System.IntPtr,System.Int32)
extern "C"  float VuforiaNullWrapper_ViewerParameters_GetDistortionCoefficient_m896536078_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vp, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ViewerParameters_GetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNullWrapper_ViewerParameters_GetFieldOfView_m_765003123_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vp, IntPtr_t ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ViewerParameters_ContainsMagnet(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_ViewerParameters_ContainsMagnet_m1157882600_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::CustomViewerParameters_new(System.Single,System.String,System.String)
extern "C"  IntPtr_t VuforiaNullWrapper_CustomViewerParameters_new_m_1762289744_0 (VuforiaNullWrapper_t1715411362_0 * __this, float ___version, String_t* ___name, String_t* ___manufacturer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_delete_m_1673384091_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___toDelete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetButtonType(System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetButtonType_m_647097297_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___obj, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetScreenToLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetScreenToLensDistance_m1572738271_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___obj, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetInterLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetInterLensDistance_m_1964158520_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___obj, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetTrayAlignment(System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetTrayAlignment_m1462539858_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___obj, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetLensCentreToTrayDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetLensCentreToTrayDistance_m1551037178_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___obj, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_ClearDistortionCoefficients(System.IntPtr)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_ClearDistortionCoefficients_m948357870_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_AddDistortionCoefficient(System.IntPtr,System.Single)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_AddDistortionCoefficient_m284475166_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___obj, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetFieldOfView_m803560554_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___obj, IntPtr_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetContainsMagnet(System.IntPtr,System.Boolean)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetContainsMagnet_m515242354_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___obj, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParametersList_GetListForAuthoringTools()
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParametersList_GetListForAuthoringTools_m1714014779_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ViewerParametersList_SetSDKFilter(System.IntPtr,System.String)
extern "C"  void VuforiaNullWrapper_ViewerParametersList_SetSDKFilter_m1276249961_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vpl, String_t* ___filter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ViewerParametersList_Size(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ViewerParametersList_Size_m531844392_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vpl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParametersList_Get(System.IntPtr,System.Int32)
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParametersList_Get_m_1011821991_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vpl, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParametersList_Get(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParametersList_Get_m1056804278_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vpl, String_t* ___name, String_t* ___manufacturer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParametersList_Begin(System.IntPtr)
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParametersList_Begin_m_829238965_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vpl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParametersList_Next(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParametersList_Next_m_869702483_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vpl, IntPtr_t ___last, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::Device_SetMode(System.Int32)
extern "C"  bool VuforiaNullWrapper_Device_SetMode_m_760324817_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::Device_GetMode()
extern "C"  int32_t VuforiaNullWrapper_Device_GetMode_m_1646775060_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::Device_SetViewerPresent(System.Boolean)
extern "C"  void VuforiaNullWrapper_Device_SetViewerPresent_m546687033_0 (VuforiaNullWrapper_t1715411362_0 * __this, bool ___present, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::Device_IsViewerPresent()
extern "C"  bool VuforiaNullWrapper_Device_IsViewerPresent_m_2035113352_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::Device_GetViewerList()
extern "C"  IntPtr_t VuforiaNullWrapper_Device_GetViewerList_m2001067394_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::Device_SelectViewer(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_Device_SelectViewer_m2147008253_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___vp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::Device_GetSelectedViewer()
extern "C"  IntPtr_t VuforiaNullWrapper_Device_GetSelectedViewer_m1280693375_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetDistortionMesh(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetDistortionMesh_m528848970_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___eyeId, IntPtr_t ___meshData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetDistortionMeshSize(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetDistortionMeshSize_m1025547243_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___viewId, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetProjectionMatrix(System.Int32,System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetProjectionMatrix_m_1119805315_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___viewID, float ___near, float ___far, IntPtr_t ___projectionContainer, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetDistortionTextureViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetDistortionTextureViewport_m_724377308_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___viewID, IntPtr_t ___viewportContainer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetViewport_m1371540166_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___viewID, IntPtr_t ___viewportContainer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetNormalizedViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetNormalizedViewport_m1950827101_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___viewID, IntPtr_t ___viewportContainer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetEyeDisplayAdjustmentMatrix(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetEyeDisplayAdjustmentMatrix_m1863572895_0 (VuforiaNullWrapper_t1715411362_0 * __this, int32_t ___viewID, IntPtr_t ___matrixContainer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetRenderBuffers(System.IntPtr)
extern "C"  void VuforiaNullWrapper_SetRenderBuffers_m_401651799_0 (VuforiaNullWrapper_t1715411362_0 * __this, IntPtr_t ___colorBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::.ctor()
extern "C"  void VuforiaNullWrapper__ctor_m_1404747916_0 (VuforiaNullWrapper_t1715411362_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
