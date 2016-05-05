#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t1525280346;
// UnityEngine.Material
struct Material_t1886596500;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardPostRender
struct  CardboardPostRender_t2005367980  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Mesh CardboardPostRender::distortionMesh
	Mesh_t1525280346 * ___distortionMesh_14;
	// UnityEngine.Material CardboardPostRender::meshMaterial
	Material_t1886596500 * ___meshMaterial_15;
	// UnityEngine.Material CardboardPostRender::uiMaterial
	Material_t1886596500 * ___uiMaterial_16;
	// System.Single CardboardPostRender::centerWidthPx
	float ___centerWidthPx_17;
	// System.Single CardboardPostRender::buttonWidthPx
	float ___buttonWidthPx_18;
	// System.Single CardboardPostRender::xScale
	float ___xScale_19;
	// System.Single CardboardPostRender::yScale
	float ___yScale_20;
	// UnityEngine.Matrix4x4 CardboardPostRender::xfm
	Matrix4x4_t277289660  ___xfm_21;
	// UnityEngine.Camera CardboardPostRender::<cam>k__BackingField
	Camera_t3533968274 * ___U3CcamU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_distortionMesh_14() { return static_cast<int32_t>(offsetof(CardboardPostRender_t2005367980, ___distortionMesh_14)); }
	inline Mesh_t1525280346 * get_distortionMesh_14() const { return ___distortionMesh_14; }
	inline Mesh_t1525280346 ** get_address_of_distortionMesh_14() { return &___distortionMesh_14; }
	inline void set_distortionMesh_14(Mesh_t1525280346 * value)
	{
		___distortionMesh_14 = value;
		Il2CppCodeGenWriteBarrier(&___distortionMesh_14, value);
	}

	inline static int32_t get_offset_of_meshMaterial_15() { return static_cast<int32_t>(offsetof(CardboardPostRender_t2005367980, ___meshMaterial_15)); }
	inline Material_t1886596500 * get_meshMaterial_15() const { return ___meshMaterial_15; }
	inline Material_t1886596500 ** get_address_of_meshMaterial_15() { return &___meshMaterial_15; }
	inline void set_meshMaterial_15(Material_t1886596500 * value)
	{
		___meshMaterial_15 = value;
		Il2CppCodeGenWriteBarrier(&___meshMaterial_15, value);
	}

	inline static int32_t get_offset_of_uiMaterial_16() { return static_cast<int32_t>(offsetof(CardboardPostRender_t2005367980, ___uiMaterial_16)); }
	inline Material_t1886596500 * get_uiMaterial_16() const { return ___uiMaterial_16; }
	inline Material_t1886596500 ** get_address_of_uiMaterial_16() { return &___uiMaterial_16; }
	inline void set_uiMaterial_16(Material_t1886596500 * value)
	{
		___uiMaterial_16 = value;
		Il2CppCodeGenWriteBarrier(&___uiMaterial_16, value);
	}

	inline static int32_t get_offset_of_centerWidthPx_17() { return static_cast<int32_t>(offsetof(CardboardPostRender_t2005367980, ___centerWidthPx_17)); }
	inline float get_centerWidthPx_17() const { return ___centerWidthPx_17; }
	inline float* get_address_of_centerWidthPx_17() { return &___centerWidthPx_17; }
	inline void set_centerWidthPx_17(float value)
	{
		___centerWidthPx_17 = value;
	}

	inline static int32_t get_offset_of_buttonWidthPx_18() { return static_cast<int32_t>(offsetof(CardboardPostRender_t2005367980, ___buttonWidthPx_18)); }
	inline float get_buttonWidthPx_18() const { return ___buttonWidthPx_18; }
	inline float* get_address_of_buttonWidthPx_18() { return &___buttonWidthPx_18; }
	inline void set_buttonWidthPx_18(float value)
	{
		___buttonWidthPx_18 = value;
	}

	inline static int32_t get_offset_of_xScale_19() { return static_cast<int32_t>(offsetof(CardboardPostRender_t2005367980, ___xScale_19)); }
	inline float get_xScale_19() const { return ___xScale_19; }
	inline float* get_address_of_xScale_19() { return &___xScale_19; }
	inline void set_xScale_19(float value)
	{
		___xScale_19 = value;
	}

	inline static int32_t get_offset_of_yScale_20() { return static_cast<int32_t>(offsetof(CardboardPostRender_t2005367980, ___yScale_20)); }
	inline float get_yScale_20() const { return ___yScale_20; }
	inline float* get_address_of_yScale_20() { return &___yScale_20; }
	inline void set_yScale_20(float value)
	{
		___yScale_20 = value;
	}

	inline static int32_t get_offset_of_xfm_21() { return static_cast<int32_t>(offsetof(CardboardPostRender_t2005367980, ___xfm_21)); }
	inline Matrix4x4_t277289660  get_xfm_21() const { return ___xfm_21; }
	inline Matrix4x4_t277289660 * get_address_of_xfm_21() { return &___xfm_21; }
	inline void set_xfm_21(Matrix4x4_t277289660  value)
	{
		___xfm_21 = value;
	}

	inline static int32_t get_offset_of_U3CcamU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(CardboardPostRender_t2005367980, ___U3CcamU3Ek__BackingField_23)); }
	inline Camera_t3533968274 * get_U3CcamU3Ek__BackingField_23() const { return ___U3CcamU3Ek__BackingField_23; }
	inline Camera_t3533968274 ** get_address_of_U3CcamU3Ek__BackingField_23() { return &___U3CcamU3Ek__BackingField_23; }
	inline void set_U3CcamU3Ek__BackingField_23(Camera_t3533968274 * value)
	{
		___U3CcamU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcamU3Ek__BackingField_23, value);
	}
};

struct CardboardPostRender_t2005367980_StaticFields
{
public:
	// System.Single[] CardboardPostRender::Angles
	SingleU5BU5D_t1219431280* ___Angles_22;

public:
	inline static int32_t get_offset_of_Angles_22() { return static_cast<int32_t>(offsetof(CardboardPostRender_t2005367980_StaticFields, ___Angles_22)); }
	inline SingleU5BU5D_t1219431280* get_Angles_22() const { return ___Angles_22; }
	inline SingleU5BU5D_t1219431280** get_address_of_Angles_22() { return &___Angles_22; }
	inline void set_Angles_22(SingleU5BU5D_t1219431280* value)
	{
		___Angles_22 = value;
		Il2CppCodeGenWriteBarrier(&___Angles_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
