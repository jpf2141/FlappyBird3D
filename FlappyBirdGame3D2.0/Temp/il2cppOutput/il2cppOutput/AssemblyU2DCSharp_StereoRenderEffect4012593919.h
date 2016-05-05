#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StereoRenderEffect
struct  StereoRenderEffect_t4012593919  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Material StereoRenderEffect::material
	Material_t1886596500 * ___material_2;
	// UnityEngine.Camera StereoRenderEffect::cam
	Camera_t3533968274 * ___cam_3;

public:
	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(StereoRenderEffect_t4012593919, ___material_2)); }
	inline Material_t1886596500 * get_material_2() const { return ___material_2; }
	inline Material_t1886596500 ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t1886596500 * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier(&___material_2, value);
	}

	inline static int32_t get_offset_of_cam_3() { return static_cast<int32_t>(offsetof(StereoRenderEffect_t4012593919, ___cam_3)); }
	inline Camera_t3533968274 * get_cam_3() const { return ___cam_3; }
	inline Camera_t3533968274 ** get_address_of_cam_3() { return &___cam_3; }
	inline void set_cam_3(Camera_t3533968274 * value)
	{
		___cam_3 = value;
		Il2CppCodeGenWriteBarrier(&___cam_3, value);
	}
};

struct StereoRenderEffect_t4012593919_StaticFields
{
public:
	// UnityEngine.Rect StereoRenderEffect::fullRect
	Rect_t1525428817  ___fullRect_4;

public:
	inline static int32_t get_offset_of_fullRect_4() { return static_cast<int32_t>(offsetof(StereoRenderEffect_t4012593919_StaticFields, ___fullRect_4)); }
	inline Rect_t1525428817  get_fullRect_4() const { return ___fullRect_4; }
	inline Rect_t1525428817 * get_address_of_fullRect_4() { return &___fullRect_4; }
	inline void set_fullRect_4(Rect_t1525428817  value)
	{
		___fullRect_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
