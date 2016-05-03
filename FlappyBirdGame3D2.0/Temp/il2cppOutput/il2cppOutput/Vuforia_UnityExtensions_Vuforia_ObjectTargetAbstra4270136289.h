#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ObjectTarget
struct ObjectTarget_t1628866278;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "Vuforia_UnityExtensions_Vuforia_DataSetTrackableBe1793464454.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTargetAbstractBehaviour
struct  ObjectTargetAbstractBehaviour_t4270136289  : public DataSetTrackableBehaviour_t1793464454
{
public:
	// Vuforia.ObjectTarget Vuforia.ObjectTargetAbstractBehaviour::mObjectTarget
	Il2CppObject * ___mObjectTarget_21;
	// System.Single Vuforia.ObjectTargetAbstractBehaviour::mAspectRatioXY
	float ___mAspectRatioXY_22;
	// System.Single Vuforia.ObjectTargetAbstractBehaviour::mAspectRatioXZ
	float ___mAspectRatioXZ_23;
	// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::mShowBoundingBox
	bool ___mShowBoundingBox_24;
	// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::mBBoxMin
	Vector3_t3525329789  ___mBBoxMin_25;
	// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::mBBoxMax
	Vector3_t3525329789  ___mBBoxMax_26;
	// UnityEngine.Texture2D Vuforia.ObjectTargetAbstractBehaviour::mPreviewImage
	Texture2D_t2509538522 * ___mPreviewImage_27;

public:
	inline static int32_t get_offset_of_mObjectTarget_21() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mObjectTarget_21)); }
	inline Il2CppObject * get_mObjectTarget_21() const { return ___mObjectTarget_21; }
	inline Il2CppObject ** get_address_of_mObjectTarget_21() { return &___mObjectTarget_21; }
	inline void set_mObjectTarget_21(Il2CppObject * value)
	{
		___mObjectTarget_21 = value;
		Il2CppCodeGenWriteBarrier(&___mObjectTarget_21, value);
	}

	inline static int32_t get_offset_of_mAspectRatioXY_22() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mAspectRatioXY_22)); }
	inline float get_mAspectRatioXY_22() const { return ___mAspectRatioXY_22; }
	inline float* get_address_of_mAspectRatioXY_22() { return &___mAspectRatioXY_22; }
	inline void set_mAspectRatioXY_22(float value)
	{
		___mAspectRatioXY_22 = value;
	}

	inline static int32_t get_offset_of_mAspectRatioXZ_23() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mAspectRatioXZ_23)); }
	inline float get_mAspectRatioXZ_23() const { return ___mAspectRatioXZ_23; }
	inline float* get_address_of_mAspectRatioXZ_23() { return &___mAspectRatioXZ_23; }
	inline void set_mAspectRatioXZ_23(float value)
	{
		___mAspectRatioXZ_23 = value;
	}

	inline static int32_t get_offset_of_mShowBoundingBox_24() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mShowBoundingBox_24)); }
	inline bool get_mShowBoundingBox_24() const { return ___mShowBoundingBox_24; }
	inline bool* get_address_of_mShowBoundingBox_24() { return &___mShowBoundingBox_24; }
	inline void set_mShowBoundingBox_24(bool value)
	{
		___mShowBoundingBox_24 = value;
	}

	inline static int32_t get_offset_of_mBBoxMin_25() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mBBoxMin_25)); }
	inline Vector3_t3525329789  get_mBBoxMin_25() const { return ___mBBoxMin_25; }
	inline Vector3_t3525329789 * get_address_of_mBBoxMin_25() { return &___mBBoxMin_25; }
	inline void set_mBBoxMin_25(Vector3_t3525329789  value)
	{
		___mBBoxMin_25 = value;
	}

	inline static int32_t get_offset_of_mBBoxMax_26() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mBBoxMax_26)); }
	inline Vector3_t3525329789  get_mBBoxMax_26() const { return ___mBBoxMax_26; }
	inline Vector3_t3525329789 * get_address_of_mBBoxMax_26() { return &___mBBoxMax_26; }
	inline void set_mBBoxMax_26(Vector3_t3525329789  value)
	{
		___mBBoxMax_26 = value;
	}

	inline static int32_t get_offset_of_mPreviewImage_27() { return static_cast<int32_t>(offsetof(ObjectTargetAbstractBehaviour_t4270136289, ___mPreviewImage_27)); }
	inline Texture2D_t2509538522 * get_mPreviewImage_27() const { return ___mPreviewImage_27; }
	inline Texture2D_t2509538522 ** get_address_of_mPreviewImage_27() { return &___mPreviewImage_27; }
	inline void set_mPreviewImage_27(Texture2D_t2509538522 * value)
	{
		___mPreviewImage_27 = value;
		Il2CppCodeGenWriteBarrier(&___mPreviewImage_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
