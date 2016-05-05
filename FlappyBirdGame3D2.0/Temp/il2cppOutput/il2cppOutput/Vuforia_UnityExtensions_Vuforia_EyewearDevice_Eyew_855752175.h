#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t_2105059803_0;

#include "mscorlib_System_ValueType_103494864.h"

// Vuforia.EyewearDevice/EyewearCalibrationReading
struct  EyewearCalibrationReading_t_855752175_0 
{
	// System.Single[] Vuforia.EyewearDevice/EyewearCalibrationReading::pose
	SingleU5BU5D_t_2105059803_0* ___pose_0;
	// System.Single Vuforia.EyewearDevice/EyewearCalibrationReading::scale
	float ___scale_1;
	// System.Single Vuforia.EyewearDevice/EyewearCalibrationReading::centerX
	float ___centerX_2;
	// System.Single Vuforia.EyewearDevice/EyewearCalibrationReading::centerY
	float ___centerY_3;
	// System.Int32 Vuforia.EyewearDevice/EyewearCalibrationReading::unused
	int32_t ___unused_4;
};
// Native definition for marshalling of: Vuforia.EyewearDevice/EyewearCalibrationReading
#pragma pack(push, tp, 1)
struct EyewearCalibrationReading_t_855752175_0_marshaled
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___unused_4;
};
#pragma pack(pop, tp)
