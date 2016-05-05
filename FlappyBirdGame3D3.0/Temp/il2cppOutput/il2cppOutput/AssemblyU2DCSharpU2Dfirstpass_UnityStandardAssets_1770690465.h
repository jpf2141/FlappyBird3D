#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Transform
struct Transform_t284553113;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.CameraRefocus
struct  CameraRefocus_t1770690465  : public Il2CppObject
{
public:
	// UnityEngine.Camera UnityStandardAssets.Utility.CameraRefocus::Camera
	Camera_t3533968274 * ___Camera_0;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CameraRefocus::Lookatpoint
	Vector3_t3525329789  ___Lookatpoint_1;
	// UnityEngine.Transform UnityStandardAssets.Utility.CameraRefocus::Parent
	Transform_t284553113 * ___Parent_2;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CameraRefocus::m_OrigCameraPos
	Vector3_t3525329789  ___m_OrigCameraPos_3;
	// System.Boolean UnityStandardAssets.Utility.CameraRefocus::m_Refocus
	bool ___m_Refocus_4;

public:
	inline static int32_t get_offset_of_Camera_0() { return static_cast<int32_t>(offsetof(CameraRefocus_t1770690465, ___Camera_0)); }
	inline Camera_t3533968274 * get_Camera_0() const { return ___Camera_0; }
	inline Camera_t3533968274 ** get_address_of_Camera_0() { return &___Camera_0; }
	inline void set_Camera_0(Camera_t3533968274 * value)
	{
		___Camera_0 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_0, value);
	}

	inline static int32_t get_offset_of_Lookatpoint_1() { return static_cast<int32_t>(offsetof(CameraRefocus_t1770690465, ___Lookatpoint_1)); }
	inline Vector3_t3525329789  get_Lookatpoint_1() const { return ___Lookatpoint_1; }
	inline Vector3_t3525329789 * get_address_of_Lookatpoint_1() { return &___Lookatpoint_1; }
	inline void set_Lookatpoint_1(Vector3_t3525329789  value)
	{
		___Lookatpoint_1 = value;
	}

	inline static int32_t get_offset_of_Parent_2() { return static_cast<int32_t>(offsetof(CameraRefocus_t1770690465, ___Parent_2)); }
	inline Transform_t284553113 * get_Parent_2() const { return ___Parent_2; }
	inline Transform_t284553113 ** get_address_of_Parent_2() { return &___Parent_2; }
	inline void set_Parent_2(Transform_t284553113 * value)
	{
		___Parent_2 = value;
		Il2CppCodeGenWriteBarrier(&___Parent_2, value);
	}

	inline static int32_t get_offset_of_m_OrigCameraPos_3() { return static_cast<int32_t>(offsetof(CameraRefocus_t1770690465, ___m_OrigCameraPos_3)); }
	inline Vector3_t3525329789  get_m_OrigCameraPos_3() const { return ___m_OrigCameraPos_3; }
	inline Vector3_t3525329789 * get_address_of_m_OrigCameraPos_3() { return &___m_OrigCameraPos_3; }
	inline void set_m_OrigCameraPos_3(Vector3_t3525329789  value)
	{
		___m_OrigCameraPos_3 = value;
	}

	inline static int32_t get_offset_of_m_Refocus_4() { return static_cast<int32_t>(offsetof(CameraRefocus_t1770690465, ___m_Refocus_4)); }
	inline bool get_m_Refocus_4() const { return ___m_Refocus_4; }
	inline bool* get_address_of_m_Refocus_4() { return &___m_Refocus_4; }
	inline void set_m_Refocus_4(bool value)
	{
		___m_Refocus_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
