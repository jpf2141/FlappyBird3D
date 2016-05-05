#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Vehicles.Ball.Ball
struct Ball_t3259994590;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Ball.BallUserControl
struct  BallUserControl_t3928380210  : public MonoBehaviour_t3012272455
{
public:
	// UnityStandardAssets.Vehicles.Ball.Ball UnityStandardAssets.Vehicles.Ball.BallUserControl::ball
	Ball_t3259994590 * ___ball_2;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Ball.BallUserControl::move
	Vector3_t3525329789  ___move_3;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Ball.BallUserControl::cam
	Transform_t284553113 * ___cam_4;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Ball.BallUserControl::camForward
	Vector3_t3525329789  ___camForward_5;
	// System.Boolean UnityStandardAssets.Vehicles.Ball.BallUserControl::jump
	bool ___jump_6;

public:
	inline static int32_t get_offset_of_ball_2() { return static_cast<int32_t>(offsetof(BallUserControl_t3928380210, ___ball_2)); }
	inline Ball_t3259994590 * get_ball_2() const { return ___ball_2; }
	inline Ball_t3259994590 ** get_address_of_ball_2() { return &___ball_2; }
	inline void set_ball_2(Ball_t3259994590 * value)
	{
		___ball_2 = value;
		Il2CppCodeGenWriteBarrier(&___ball_2, value);
	}

	inline static int32_t get_offset_of_move_3() { return static_cast<int32_t>(offsetof(BallUserControl_t3928380210, ___move_3)); }
	inline Vector3_t3525329789  get_move_3() const { return ___move_3; }
	inline Vector3_t3525329789 * get_address_of_move_3() { return &___move_3; }
	inline void set_move_3(Vector3_t3525329789  value)
	{
		___move_3 = value;
	}

	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(BallUserControl_t3928380210, ___cam_4)); }
	inline Transform_t284553113 * get_cam_4() const { return ___cam_4; }
	inline Transform_t284553113 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Transform_t284553113 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier(&___cam_4, value);
	}

	inline static int32_t get_offset_of_camForward_5() { return static_cast<int32_t>(offsetof(BallUserControl_t3928380210, ___camForward_5)); }
	inline Vector3_t3525329789  get_camForward_5() const { return ___camForward_5; }
	inline Vector3_t3525329789 * get_address_of_camForward_5() { return &___camForward_5; }
	inline void set_camForward_5(Vector3_t3525329789  value)
	{
		___camForward_5 = value;
	}

	inline static int32_t get_offset_of_jump_6() { return static_cast<int32_t>(offsetof(BallUserControl_t3928380210, ___jump_6)); }
	inline bool get_jump_6() const { return ___jump_6; }
	inline bool* get_address_of_jump_6() { return &___jump_6; }
	inline void set_jump_6(bool value)
	{
		___jump_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
