#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// UnityEngine.Color32[]
struct Color32U5BU5D_t_1782843845_0;

#include "Vuforia_UnityExtensions_Vuforia_Image_100031453.h"
#include "Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT_574009764.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// Vuforia.ImageImpl
struct  ImageImpl_t_693653277_0  : public Image_t_100031453_0
{
	// System.Int32 Vuforia.ImageImpl::mWidth
	int32_t ___mWidth_0;
	// System.Int32 Vuforia.ImageImpl::mHeight
	int32_t ___mHeight_1;
	// System.Int32 Vuforia.ImageImpl::mStride
	int32_t ___mStride_2;
	// System.Int32 Vuforia.ImageImpl::mBufferWidth
	int32_t ___mBufferWidth_3;
	// System.Int32 Vuforia.ImageImpl::mBufferHeight
	int32_t ___mBufferHeight_4;
	// Vuforia.Image/PIXEL_FORMAT Vuforia.ImageImpl::mPixelFormat
	int32_t ___mPixelFormat_5;
	// System.Byte[] Vuforia.ImageImpl::mData
	ByteU5BU5D_t_1238178395_0* ___mData_6;
	// System.IntPtr Vuforia.ImageImpl::mUnmanagedData
	IntPtr_t ___mUnmanagedData_7;
	// System.Boolean Vuforia.ImageImpl::mDataSet
	bool ___mDataSet_8;
	// UnityEngine.Color32[] Vuforia.ImageImpl::mPixel32
	Color32U5BU5D_t_1782843845_0* ___mPixel32_9;
};
