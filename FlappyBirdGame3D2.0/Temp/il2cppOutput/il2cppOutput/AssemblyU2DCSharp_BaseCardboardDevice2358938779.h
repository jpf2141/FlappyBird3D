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
// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "AssemblyU2DCSharp_BaseVRDevice4087747107.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseCardboardDevice
struct  BaseCardboardDevice_t2358938779  : public BaseVRDevice_t4087747107
{
public:
	// System.Single[] BaseCardboardDevice::headData
	SingleU5BU5D_t1219431280* ___headData_26;
	// System.Single[] BaseCardboardDevice::viewData
	SingleU5BU5D_t1219431280* ___viewData_27;
	// System.Single[] BaseCardboardDevice::profileData
	SingleU5BU5D_t1219431280* ___profileData_28;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::headView
	Matrix4x4_t277289660  ___headView_29;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::leftEyeView
	Matrix4x4_t277289660  ___leftEyeView_30;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::rightEyeView
	Matrix4x4_t277289660  ___rightEyeView_31;
	// System.Boolean BaseCardboardDevice::debugDisableNativeProjections
	bool ___debugDisableNativeProjections_32;
	// System.Boolean BaseCardboardDevice::debugDisableNativeUILayer
	bool ___debugDisableNativeUILayer_33;

public:
	inline static int32_t get_offset_of_headData_26() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___headData_26)); }
	inline SingleU5BU5D_t1219431280* get_headData_26() const { return ___headData_26; }
	inline SingleU5BU5D_t1219431280** get_address_of_headData_26() { return &___headData_26; }
	inline void set_headData_26(SingleU5BU5D_t1219431280* value)
	{
		___headData_26 = value;
		Il2CppCodeGenWriteBarrier(&___headData_26, value);
	}

	inline static int32_t get_offset_of_viewData_27() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___viewData_27)); }
	inline SingleU5BU5D_t1219431280* get_viewData_27() const { return ___viewData_27; }
	inline SingleU5BU5D_t1219431280** get_address_of_viewData_27() { return &___viewData_27; }
	inline void set_viewData_27(SingleU5BU5D_t1219431280* value)
	{
		___viewData_27 = value;
		Il2CppCodeGenWriteBarrier(&___viewData_27, value);
	}

	inline static int32_t get_offset_of_profileData_28() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___profileData_28)); }
	inline SingleU5BU5D_t1219431280* get_profileData_28() const { return ___profileData_28; }
	inline SingleU5BU5D_t1219431280** get_address_of_profileData_28() { return &___profileData_28; }
	inline void set_profileData_28(SingleU5BU5D_t1219431280* value)
	{
		___profileData_28 = value;
		Il2CppCodeGenWriteBarrier(&___profileData_28, value);
	}

	inline static int32_t get_offset_of_headView_29() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___headView_29)); }
	inline Matrix4x4_t277289660  get_headView_29() const { return ___headView_29; }
	inline Matrix4x4_t277289660 * get_address_of_headView_29() { return &___headView_29; }
	inline void set_headView_29(Matrix4x4_t277289660  value)
	{
		___headView_29 = value;
	}

	inline static int32_t get_offset_of_leftEyeView_30() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___leftEyeView_30)); }
	inline Matrix4x4_t277289660  get_leftEyeView_30() const { return ___leftEyeView_30; }
	inline Matrix4x4_t277289660 * get_address_of_leftEyeView_30() { return &___leftEyeView_30; }
	inline void set_leftEyeView_30(Matrix4x4_t277289660  value)
	{
		___leftEyeView_30 = value;
	}

	inline static int32_t get_offset_of_rightEyeView_31() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___rightEyeView_31)); }
	inline Matrix4x4_t277289660  get_rightEyeView_31() const { return ___rightEyeView_31; }
	inline Matrix4x4_t277289660 * get_address_of_rightEyeView_31() { return &___rightEyeView_31; }
	inline void set_rightEyeView_31(Matrix4x4_t277289660  value)
	{
		___rightEyeView_31 = value;
	}

	inline static int32_t get_offset_of_debugDisableNativeProjections_32() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___debugDisableNativeProjections_32)); }
	inline bool get_debugDisableNativeProjections_32() const { return ___debugDisableNativeProjections_32; }
	inline bool* get_address_of_debugDisableNativeProjections_32() { return &___debugDisableNativeProjections_32; }
	inline void set_debugDisableNativeProjections_32(bool value)
	{
		___debugDisableNativeProjections_32 = value;
	}

	inline static int32_t get_offset_of_debugDisableNativeUILayer_33() { return static_cast<int32_t>(offsetof(BaseCardboardDevice_t2358938779, ___debugDisableNativeUILayer_33)); }
	inline bool get_debugDisableNativeUILayer_33() const { return ___debugDisableNativeUILayer_33; }
	inline bool* get_address_of_debugDisableNativeUILayer_33() { return &___debugDisableNativeUILayer_33; }
	inline void set_debugDisableNativeUILayer_33(bool value)
	{
		___debugDisableNativeUILayer_33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
