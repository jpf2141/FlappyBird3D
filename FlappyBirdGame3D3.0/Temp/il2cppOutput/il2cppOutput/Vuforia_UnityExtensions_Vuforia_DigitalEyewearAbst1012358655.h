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

#include "mscorlib_System_Object_887538054.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerButtonType_935569034.h"
#include "Vuforia_UnityExtensions_Vuforia_ViewerTrayAlignmen_779324637.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_Vector4_725341336.h"

// Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters
struct  SerializableViewerParameters_t1012358655_0  : public Object_t
{
	// System.Single Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::Version
	float ___Version_0;
	// System.String Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::Name
	String_t* ___Name_1;
	// System.String Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::Manufacturer
	String_t* ___Manufacturer_2;
	// Vuforia.ViewerButtonType Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::ButtonType
	int32_t ___ButtonType_3;
	// System.Single Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::ScreenToLensDistance
	float ___ScreenToLensDistance_4;
	// System.Single Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::InterLensDistance
	float ___InterLensDistance_5;
	// Vuforia.ViewerTrayAlignment Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::TrayAlignment
	int32_t ___TrayAlignment_6;
	// System.Single Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::LensCenterToTrayDistance
	float ___LensCenterToTrayDistance_7;
	// UnityEngine.Vector2 Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::DistortionCoefficients
	Vector2_t_725341338_0  ___DistortionCoefficients_8;
	// UnityEngine.Vector4 Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::FieldOfView
	Vector4_t_725341336_0  ___FieldOfView_9;
	// System.Boolean Vuforia.DigitalEyewearAbstractBehaviour/SerializableViewerParameters::ContainsMagnet
	bool ___ContainsMagnet_10;
};
