#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BaseVRDevice
struct BaseVRDevice_t4087747107;
// MutablePose3D
struct MutablePose3D_t1273683304;
// CardboardProfile
struct CardboardProfile_t3514264339;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseVRDevice
struct  BaseVRDevice_t4087747107  : public Il2CppObject
{
public:
	// MutablePose3D BaseVRDevice::headPose
	MutablePose3D_t1273683304 * ___headPose_1;
	// MutablePose3D BaseVRDevice::leftEyePose
	MutablePose3D_t1273683304 * ___leftEyePose_2;
	// MutablePose3D BaseVRDevice::rightEyePose
	MutablePose3D_t1273683304 * ___rightEyePose_3;
	// UnityEngine.Matrix4x4 BaseVRDevice::leftEyeDistortedProjection
	Matrix4x4_t277289660  ___leftEyeDistortedProjection_4;
	// UnityEngine.Matrix4x4 BaseVRDevice::rightEyeDistortedProjection
	Matrix4x4_t277289660  ___rightEyeDistortedProjection_5;
	// UnityEngine.Matrix4x4 BaseVRDevice::leftEyeUndistortedProjection
	Matrix4x4_t277289660  ___leftEyeUndistortedProjection_6;
	// UnityEngine.Matrix4x4 BaseVRDevice::rightEyeUndistortedProjection
	Matrix4x4_t277289660  ___rightEyeUndistortedProjection_7;
	// UnityEngine.Rect BaseVRDevice::leftEyeDistortedViewport
	Rect_t1525428817  ___leftEyeDistortedViewport_8;
	// UnityEngine.Rect BaseVRDevice::rightEyeDistortedViewport
	Rect_t1525428817  ___rightEyeDistortedViewport_9;
	// UnityEngine.Rect BaseVRDevice::leftEyeUndistortedViewport
	Rect_t1525428817  ___leftEyeUndistortedViewport_10;
	// UnityEngine.Rect BaseVRDevice::rightEyeUndistortedViewport
	Rect_t1525428817  ___rightEyeUndistortedViewport_11;
	// UnityEngine.Vector2 BaseVRDevice::recommendedTextureSize
	Vector2_t3525329788  ___recommendedTextureSize_12;
	// System.Int32 BaseVRDevice::leftEyeOrientation
	int32_t ___leftEyeOrientation_13;
	// System.Int32 BaseVRDevice::rightEyeOrientation
	int32_t ___rightEyeOrientation_14;
	// System.Boolean BaseVRDevice::triggered
	bool ___triggered_15;
	// System.Boolean BaseVRDevice::tilted
	bool ___tilted_16;
	// System.Boolean BaseVRDevice::profileChanged
	bool ___profileChanged_17;
	// System.Boolean BaseVRDevice::backButtonPressed
	bool ___backButtonPressed_18;
	// CardboardProfile BaseVRDevice::<Profile>k__BackingField
	CardboardProfile_t3514264339 * ___U3CProfileU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_headPose_1() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___headPose_1)); }
	inline MutablePose3D_t1273683304 * get_headPose_1() const { return ___headPose_1; }
	inline MutablePose3D_t1273683304 ** get_address_of_headPose_1() { return &___headPose_1; }
	inline void set_headPose_1(MutablePose3D_t1273683304 * value)
	{
		___headPose_1 = value;
		Il2CppCodeGenWriteBarrier(&___headPose_1, value);
	}

	inline static int32_t get_offset_of_leftEyePose_2() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___leftEyePose_2)); }
	inline MutablePose3D_t1273683304 * get_leftEyePose_2() const { return ___leftEyePose_2; }
	inline MutablePose3D_t1273683304 ** get_address_of_leftEyePose_2() { return &___leftEyePose_2; }
	inline void set_leftEyePose_2(MutablePose3D_t1273683304 * value)
	{
		___leftEyePose_2 = value;
		Il2CppCodeGenWriteBarrier(&___leftEyePose_2, value);
	}

	inline static int32_t get_offset_of_rightEyePose_3() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___rightEyePose_3)); }
	inline MutablePose3D_t1273683304 * get_rightEyePose_3() const { return ___rightEyePose_3; }
	inline MutablePose3D_t1273683304 ** get_address_of_rightEyePose_3() { return &___rightEyePose_3; }
	inline void set_rightEyePose_3(MutablePose3D_t1273683304 * value)
	{
		___rightEyePose_3 = value;
		Il2CppCodeGenWriteBarrier(&___rightEyePose_3, value);
	}

	inline static int32_t get_offset_of_leftEyeDistortedProjection_4() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___leftEyeDistortedProjection_4)); }
	inline Matrix4x4_t277289660  get_leftEyeDistortedProjection_4() const { return ___leftEyeDistortedProjection_4; }
	inline Matrix4x4_t277289660 * get_address_of_leftEyeDistortedProjection_4() { return &___leftEyeDistortedProjection_4; }
	inline void set_leftEyeDistortedProjection_4(Matrix4x4_t277289660  value)
	{
		___leftEyeDistortedProjection_4 = value;
	}

	inline static int32_t get_offset_of_rightEyeDistortedProjection_5() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___rightEyeDistortedProjection_5)); }
	inline Matrix4x4_t277289660  get_rightEyeDistortedProjection_5() const { return ___rightEyeDistortedProjection_5; }
	inline Matrix4x4_t277289660 * get_address_of_rightEyeDistortedProjection_5() { return &___rightEyeDistortedProjection_5; }
	inline void set_rightEyeDistortedProjection_5(Matrix4x4_t277289660  value)
	{
		___rightEyeDistortedProjection_5 = value;
	}

	inline static int32_t get_offset_of_leftEyeUndistortedProjection_6() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___leftEyeUndistortedProjection_6)); }
	inline Matrix4x4_t277289660  get_leftEyeUndistortedProjection_6() const { return ___leftEyeUndistortedProjection_6; }
	inline Matrix4x4_t277289660 * get_address_of_leftEyeUndistortedProjection_6() { return &___leftEyeUndistortedProjection_6; }
	inline void set_leftEyeUndistortedProjection_6(Matrix4x4_t277289660  value)
	{
		___leftEyeUndistortedProjection_6 = value;
	}

	inline static int32_t get_offset_of_rightEyeUndistortedProjection_7() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___rightEyeUndistortedProjection_7)); }
	inline Matrix4x4_t277289660  get_rightEyeUndistortedProjection_7() const { return ___rightEyeUndistortedProjection_7; }
	inline Matrix4x4_t277289660 * get_address_of_rightEyeUndistortedProjection_7() { return &___rightEyeUndistortedProjection_7; }
	inline void set_rightEyeUndistortedProjection_7(Matrix4x4_t277289660  value)
	{
		___rightEyeUndistortedProjection_7 = value;
	}

	inline static int32_t get_offset_of_leftEyeDistortedViewport_8() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___leftEyeDistortedViewport_8)); }
	inline Rect_t1525428817  get_leftEyeDistortedViewport_8() const { return ___leftEyeDistortedViewport_8; }
	inline Rect_t1525428817 * get_address_of_leftEyeDistortedViewport_8() { return &___leftEyeDistortedViewport_8; }
	inline void set_leftEyeDistortedViewport_8(Rect_t1525428817  value)
	{
		___leftEyeDistortedViewport_8 = value;
	}

	inline static int32_t get_offset_of_rightEyeDistortedViewport_9() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___rightEyeDistortedViewport_9)); }
	inline Rect_t1525428817  get_rightEyeDistortedViewport_9() const { return ___rightEyeDistortedViewport_9; }
	inline Rect_t1525428817 * get_address_of_rightEyeDistortedViewport_9() { return &___rightEyeDistortedViewport_9; }
	inline void set_rightEyeDistortedViewport_9(Rect_t1525428817  value)
	{
		___rightEyeDistortedViewport_9 = value;
	}

	inline static int32_t get_offset_of_leftEyeUndistortedViewport_10() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___leftEyeUndistortedViewport_10)); }
	inline Rect_t1525428817  get_leftEyeUndistortedViewport_10() const { return ___leftEyeUndistortedViewport_10; }
	inline Rect_t1525428817 * get_address_of_leftEyeUndistortedViewport_10() { return &___leftEyeUndistortedViewport_10; }
	inline void set_leftEyeUndistortedViewport_10(Rect_t1525428817  value)
	{
		___leftEyeUndistortedViewport_10 = value;
	}

	inline static int32_t get_offset_of_rightEyeUndistortedViewport_11() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___rightEyeUndistortedViewport_11)); }
	inline Rect_t1525428817  get_rightEyeUndistortedViewport_11() const { return ___rightEyeUndistortedViewport_11; }
	inline Rect_t1525428817 * get_address_of_rightEyeUndistortedViewport_11() { return &___rightEyeUndistortedViewport_11; }
	inline void set_rightEyeUndistortedViewport_11(Rect_t1525428817  value)
	{
		___rightEyeUndistortedViewport_11 = value;
	}

	inline static int32_t get_offset_of_recommendedTextureSize_12() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___recommendedTextureSize_12)); }
	inline Vector2_t3525329788  get_recommendedTextureSize_12() const { return ___recommendedTextureSize_12; }
	inline Vector2_t3525329788 * get_address_of_recommendedTextureSize_12() { return &___recommendedTextureSize_12; }
	inline void set_recommendedTextureSize_12(Vector2_t3525329788  value)
	{
		___recommendedTextureSize_12 = value;
	}

	inline static int32_t get_offset_of_leftEyeOrientation_13() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___leftEyeOrientation_13)); }
	inline int32_t get_leftEyeOrientation_13() const { return ___leftEyeOrientation_13; }
	inline int32_t* get_address_of_leftEyeOrientation_13() { return &___leftEyeOrientation_13; }
	inline void set_leftEyeOrientation_13(int32_t value)
	{
		___leftEyeOrientation_13 = value;
	}

	inline static int32_t get_offset_of_rightEyeOrientation_14() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___rightEyeOrientation_14)); }
	inline int32_t get_rightEyeOrientation_14() const { return ___rightEyeOrientation_14; }
	inline int32_t* get_address_of_rightEyeOrientation_14() { return &___rightEyeOrientation_14; }
	inline void set_rightEyeOrientation_14(int32_t value)
	{
		___rightEyeOrientation_14 = value;
	}

	inline static int32_t get_offset_of_triggered_15() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___triggered_15)); }
	inline bool get_triggered_15() const { return ___triggered_15; }
	inline bool* get_address_of_triggered_15() { return &___triggered_15; }
	inline void set_triggered_15(bool value)
	{
		___triggered_15 = value;
	}

	inline static int32_t get_offset_of_tilted_16() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___tilted_16)); }
	inline bool get_tilted_16() const { return ___tilted_16; }
	inline bool* get_address_of_tilted_16() { return &___tilted_16; }
	inline void set_tilted_16(bool value)
	{
		___tilted_16 = value;
	}

	inline static int32_t get_offset_of_profileChanged_17() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___profileChanged_17)); }
	inline bool get_profileChanged_17() const { return ___profileChanged_17; }
	inline bool* get_address_of_profileChanged_17() { return &___profileChanged_17; }
	inline void set_profileChanged_17(bool value)
	{
		___profileChanged_17 = value;
	}

	inline static int32_t get_offset_of_backButtonPressed_18() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___backButtonPressed_18)); }
	inline bool get_backButtonPressed_18() const { return ___backButtonPressed_18; }
	inline bool* get_address_of_backButtonPressed_18() { return &___backButtonPressed_18; }
	inline void set_backButtonPressed_18(bool value)
	{
		___backButtonPressed_18 = value;
	}

	inline static int32_t get_offset_of_U3CProfileU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107, ___U3CProfileU3Ek__BackingField_19)); }
	inline CardboardProfile_t3514264339 * get_U3CProfileU3Ek__BackingField_19() const { return ___U3CProfileU3Ek__BackingField_19; }
	inline CardboardProfile_t3514264339 ** get_address_of_U3CProfileU3Ek__BackingField_19() { return &___U3CProfileU3Ek__BackingField_19; }
	inline void set_U3CProfileU3Ek__BackingField_19(CardboardProfile_t3514264339 * value)
	{
		___U3CProfileU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CProfileU3Ek__BackingField_19, value);
	}
};

struct BaseVRDevice_t4087747107_StaticFields
{
public:
	// BaseVRDevice BaseVRDevice::device
	BaseVRDevice_t4087747107 * ___device_0;

public:
	inline static int32_t get_offset_of_device_0() { return static_cast<int32_t>(offsetof(BaseVRDevice_t4087747107_StaticFields, ___device_0)); }
	inline BaseVRDevice_t4087747107 * get_device_0() const { return ___device_0; }
	inline BaseVRDevice_t4087747107 ** get_address_of_device_0() { return &___device_0; }
	inline void set_device_0(BaseVRDevice_t4087747107 * value)
	{
		___device_0 = value;
		Il2CppCodeGenWriteBarrier(&___device_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
