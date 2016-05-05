#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Vehicles.Ball.Ball
struct Ball_t_41399321_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// UnityStandardAssets.Vehicles.Ball.BallUserControl
struct  BallUserControl_t1146748075_0  : public MonoBehaviour_t_92453903_0
{
	// UnityStandardAssets.Vehicles.Ball.Ball UnityStandardAssets.Vehicles.Ball.BallUserControl::ball
	Ball_t_41399321_0 * ___ball_2;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Ball.BallUserControl::move
	Vector3_t_725341337_0  ___move_3;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Ball.BallUserControl::cam
	Transform_t1584899523_0 * ___cam_4;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Ball.BallUserControl::camForward
	Vector3_t_725341337_0  ___camForward_5;
	// System.Boolean UnityStandardAssets.Vehicles.Ball.BallUserControl::jump
	bool ___jump_6;
};
