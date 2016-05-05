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

#include "Vuforia_UnityExtensions_Vuforia_ViewerParameters_835397164.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerButtonType_935569034.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerTrayAlignmen_779324637.h"

// Vuforia.CustomViewerParameters
struct  CustomViewerParameters_t320314725_0  : public ViewerParameters_t_835397164_0
{
	// System.Single Vuforia.CustomViewerParameters::mVersion
	float ___mVersion_1;
	// System.String Vuforia.CustomViewerParameters::mName
	String_t* ___mName_2;
	// System.String Vuforia.CustomViewerParameters::mManufacturer
	String_t* ___mManufacturer_3;
	// Vuforia.ViewerButtonType Vuforia.CustomViewerParameters::mButtonType
	int32_t ___mButtonType_4;
	// System.Single Vuforia.CustomViewerParameters::mScreenToLensDistance
	float ___mScreenToLensDistance_5;
	// Vuforia.ViewerTrayAlignment Vuforia.CustomViewerParameters::mTrayAlignment
	int32_t ___mTrayAlignment_6;
	// System.Boolean Vuforia.CustomViewerParameters::mMagnet
	bool ___mMagnet_7;
};
