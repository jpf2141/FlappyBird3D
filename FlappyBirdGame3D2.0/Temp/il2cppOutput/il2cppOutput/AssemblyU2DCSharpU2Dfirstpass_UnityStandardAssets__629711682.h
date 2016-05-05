#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t814710830_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "mscorlib_System_Object_887538054.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// UnityStandardAssets.Utility.CameraRefocus
struct  CameraRefocus_t_629711682_0  : public Object_t
{
	// UnityEngine.Camera UnityStandardAssets.Utility.CameraRefocus::Camera
	Camera_t814710830_0 * ___Camera_0;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CameraRefocus::Lookatpoint
	Vector3_t_725341337_0  ___Lookatpoint_1;
	// UnityEngine.Transform UnityStandardAssets.Utility.CameraRefocus::Parent
	Transform_t1584899523_0 * ___Parent_2;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CameraRefocus::m_OrigCameraPos
	Vector3_t_725341337_0  ___m_OrigCameraPos_3;
	// System.Boolean UnityStandardAssets.Utility.CameraRefocus::m_Refocus
	bool ___m_Refocus_4;
};
