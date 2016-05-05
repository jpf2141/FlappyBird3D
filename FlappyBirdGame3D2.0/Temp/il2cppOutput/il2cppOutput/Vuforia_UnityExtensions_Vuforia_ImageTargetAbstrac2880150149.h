#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ImageTarget
struct ImageTarget_t2294340546;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
struct Dictionary_2_t2615444723;

#include "Vuforia_UnityExtensions_Vuforia_DataSetTrackableBe1793464454.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetType942778652.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageTargetAbstractBehaviour
struct  ImageTargetAbstractBehaviour_t2880150149  : public DataSetTrackableBehaviour_t1793464454
{
public:
	// System.Single Vuforia.ImageTargetAbstractBehaviour::mAspectRatio
	float ___mAspectRatio_21;
	// Vuforia.ImageTargetType Vuforia.ImageTargetAbstractBehaviour::mImageTargetType
	int32_t ___mImageTargetType_22;
	// Vuforia.ImageTarget Vuforia.ImageTargetAbstractBehaviour::mImageTarget
	Il2CppObject * ___mImageTarget_23;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour> Vuforia.ImageTargetAbstractBehaviour::mVirtualButtonBehaviours
	Dictionary_2_t2615444723 * ___mVirtualButtonBehaviours_24;

public:
	inline static int32_t get_offset_of_mAspectRatio_21() { return static_cast<int32_t>(offsetof(ImageTargetAbstractBehaviour_t2880150149, ___mAspectRatio_21)); }
	inline float get_mAspectRatio_21() const { return ___mAspectRatio_21; }
	inline float* get_address_of_mAspectRatio_21() { return &___mAspectRatio_21; }
	inline void set_mAspectRatio_21(float value)
	{
		___mAspectRatio_21 = value;
	}

	inline static int32_t get_offset_of_mImageTargetType_22() { return static_cast<int32_t>(offsetof(ImageTargetAbstractBehaviour_t2880150149, ___mImageTargetType_22)); }
	inline int32_t get_mImageTargetType_22() const { return ___mImageTargetType_22; }
	inline int32_t* get_address_of_mImageTargetType_22() { return &___mImageTargetType_22; }
	inline void set_mImageTargetType_22(int32_t value)
	{
		___mImageTargetType_22 = value;
	}

	inline static int32_t get_offset_of_mImageTarget_23() { return static_cast<int32_t>(offsetof(ImageTargetAbstractBehaviour_t2880150149, ___mImageTarget_23)); }
	inline Il2CppObject * get_mImageTarget_23() const { return ___mImageTarget_23; }
	inline Il2CppObject ** get_address_of_mImageTarget_23() { return &___mImageTarget_23; }
	inline void set_mImageTarget_23(Il2CppObject * value)
	{
		___mImageTarget_23 = value;
		Il2CppCodeGenWriteBarrier(&___mImageTarget_23, value);
	}

	inline static int32_t get_offset_of_mVirtualButtonBehaviours_24() { return static_cast<int32_t>(offsetof(ImageTargetAbstractBehaviour_t2880150149, ___mVirtualButtonBehaviours_24)); }
	inline Dictionary_2_t2615444723 * get_mVirtualButtonBehaviours_24() const { return ___mVirtualButtonBehaviours_24; }
	inline Dictionary_2_t2615444723 ** get_address_of_mVirtualButtonBehaviours_24() { return &___mVirtualButtonBehaviours_24; }
	inline void set_mVirtualButtonBehaviours_24(Dictionary_2_t2615444723 * value)
	{
		___mVirtualButtonBehaviours_24 = value;
		Il2CppCodeGenWriteBarrier(&___mVirtualButtonBehaviours_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
