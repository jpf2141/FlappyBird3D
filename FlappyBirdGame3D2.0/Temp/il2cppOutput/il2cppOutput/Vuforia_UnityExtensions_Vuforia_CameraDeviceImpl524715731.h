#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t1520429562_0;
// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT>
struct List_1_t2038320996_0;
// Vuforia.IWebCam
struct IWebCam_t2027695724_0;

#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_1142885869.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Came_1036780098.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Came_1518894406.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM_65967508.h"

// Vuforia.CameraDeviceImpl
struct  CameraDeviceImpl_t524715731_0  : public CameraDevice_t_1142885869_0
{
	// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDeviceImpl::mCameraImages
	Dictionary_2_t1520429562_0 * ___mCameraImages_1;
	// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT> Vuforia.CameraDeviceImpl::mForcedCameraFormats
	List_1_t2038320996_0 * ___mForcedCameraFormats_2;
	// System.Boolean Vuforia.CameraDeviceImpl::mCameraReady
	bool ___mCameraReady_4;
	// System.Boolean Vuforia.CameraDeviceImpl::mIsDirty
	bool ___mIsDirty_5;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDeviceImpl::mActualCameraDirection
	int32_t ___mActualCameraDirection_6;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDeviceImpl::mSelectedCameraDirection
	int32_t ___mSelectedCameraDirection_7;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.CameraDeviceImpl::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_8;
	// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::mVideoModeData
	VideoModeData_t_65967508_0  ___mVideoModeData_9;
	// System.Boolean Vuforia.CameraDeviceImpl::mVideoModeDataNeedsUpdate
	bool ___mVideoModeDataNeedsUpdate_10;
	// System.Boolean Vuforia.CameraDeviceImpl::mHasCameraDeviceModeBeenSet
	bool ___mHasCameraDeviceModeBeenSet_11;
	// System.Boolean Vuforia.CameraDeviceImpl::mCameraActive
	bool ___mCameraActive_12;
};
struct CameraDeviceImpl_t524715731_0_StaticFields{
	// Vuforia.IWebCam Vuforia.CameraDeviceImpl::mWebCam
	Object_t * ___mWebCam_3;
};
