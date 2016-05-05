#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer4287869979.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4108995630.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi4253260020.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRendererImpl
struct  VuforiaRendererImpl_t3736698843  : public VuforiaRenderer_t4287869979
{
public:
	// Vuforia.VuforiaRenderer/VideoBGCfgData Vuforia.VuforiaRendererImpl::mVideoBGConfig
	VideoBGCfgData_t4108995630  ___mVideoBGConfig_1;
	// System.Boolean Vuforia.VuforiaRendererImpl::mVideoBGConfigSet
	bool ___mVideoBGConfigSet_2;
	// UnityEngine.Texture2D Vuforia.VuforiaRendererImpl::mVideoBackgroundTexture
	Texture2D_t2509538522 * ___mVideoBackgroundTexture_3;
	// System.Boolean Vuforia.VuforiaRendererImpl::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_4;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaRendererImpl::mLastSetReflection
	int32_t ___mLastSetReflection_5;

public:
	inline static int32_t get_offset_of_mVideoBGConfig_1() { return static_cast<int32_t>(offsetof(VuforiaRendererImpl_t3736698843, ___mVideoBGConfig_1)); }
	inline VideoBGCfgData_t4108995630  get_mVideoBGConfig_1() const { return ___mVideoBGConfig_1; }
	inline VideoBGCfgData_t4108995630 * get_address_of_mVideoBGConfig_1() { return &___mVideoBGConfig_1; }
	inline void set_mVideoBGConfig_1(VideoBGCfgData_t4108995630  value)
	{
		___mVideoBGConfig_1 = value;
	}

	inline static int32_t get_offset_of_mVideoBGConfigSet_2() { return static_cast<int32_t>(offsetof(VuforiaRendererImpl_t3736698843, ___mVideoBGConfigSet_2)); }
	inline bool get_mVideoBGConfigSet_2() const { return ___mVideoBGConfigSet_2; }
	inline bool* get_address_of_mVideoBGConfigSet_2() { return &___mVideoBGConfigSet_2; }
	inline void set_mVideoBGConfigSet_2(bool value)
	{
		___mVideoBGConfigSet_2 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundTexture_3() { return static_cast<int32_t>(offsetof(VuforiaRendererImpl_t3736698843, ___mVideoBackgroundTexture_3)); }
	inline Texture2D_t2509538522 * get_mVideoBackgroundTexture_3() const { return ___mVideoBackgroundTexture_3; }
	inline Texture2D_t2509538522 ** get_address_of_mVideoBackgroundTexture_3() { return &___mVideoBackgroundTexture_3; }
	inline void set_mVideoBackgroundTexture_3(Texture2D_t2509538522 * value)
	{
		___mVideoBackgroundTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___mVideoBackgroundTexture_3, value);
	}

	inline static int32_t get_offset_of_mBackgroundTextureHasChanged_4() { return static_cast<int32_t>(offsetof(VuforiaRendererImpl_t3736698843, ___mBackgroundTextureHasChanged_4)); }
	inline bool get_mBackgroundTextureHasChanged_4() const { return ___mBackgroundTextureHasChanged_4; }
	inline bool* get_address_of_mBackgroundTextureHasChanged_4() { return &___mBackgroundTextureHasChanged_4; }
	inline void set_mBackgroundTextureHasChanged_4(bool value)
	{
		___mBackgroundTextureHasChanged_4 = value;
	}

	inline static int32_t get_offset_of_mLastSetReflection_5() { return static_cast<int32_t>(offsetof(VuforiaRendererImpl_t3736698843, ___mLastSetReflection_5)); }
	inline int32_t get_mLastSetReflection_5() const { return ___mLastSetReflection_5; }
	inline int32_t* get_address_of_mLastSetReflection_5() { return &___mLastSetReflection_5; }
	inline void set_mLastSetReflection_5(int32_t value)
	{
		___mLastSetReflection_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
