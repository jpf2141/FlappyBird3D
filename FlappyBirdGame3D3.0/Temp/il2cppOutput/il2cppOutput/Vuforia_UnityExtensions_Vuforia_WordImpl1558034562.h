#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Vuforia.Image
struct Image_t_100031453_0;
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t1918133155_0;

#include "Vuforia_UnityExtensions_Vuforia_TrackableImpl1719752621.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1481905510.h"

// Vuforia.WordImpl
struct  WordImpl_t1558034562_0  : public TrackableImpl_t1719752621_0
{
	// System.String Vuforia.WordImpl::mText
	String_t* ___mText_2;
	// UnityEngine.Vector2 Vuforia.WordImpl::mSize
	Vector2_t_725341338_0  ___mSize_3;
	// Vuforia.Image Vuforia.WordImpl::mLetterMask
	Image_t_100031453_0 * ___mLetterMask_4;
	// Vuforia.VuforiaManagerImpl/ImageHeaderData Vuforia.WordImpl::mLetterImageHeader
	ImageHeaderData_t1481905510_0  ___mLetterImageHeader_5;
	// Vuforia.RectangleData[] Vuforia.WordImpl::mLetterBoundingBoxes
	RectangleDataU5BU5D_t1918133155_0* ___mLetterBoundingBoxes_6;
};
