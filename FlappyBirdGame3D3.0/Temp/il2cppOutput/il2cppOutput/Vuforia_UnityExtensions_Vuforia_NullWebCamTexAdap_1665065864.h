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
// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;

#include "Vuforia_UnityExtensions_Vuforia_WebCamTexAdaptor235265233.h"
#include "mscorlib_System_DateTime_818288618.h"

// Vuforia.NullWebCamTexAdaptor
struct  NullWebCamTexAdaptor_t_1665065864_0  : public WebCamTexAdaptor_t235265233_0
{
	// UnityEngine.Texture2D Vuforia.NullWebCamTexAdaptor::mTexture
	Texture2D_t_485082364_0 * ___mTexture_1;
	// System.Boolean Vuforia.NullWebCamTexAdaptor::mPseudoPlaying
	bool ___mPseudoPlaying_2;
	// System.Double Vuforia.NullWebCamTexAdaptor::mMsBetweenFrames
	double ___mMsBetweenFrames_3;
	// System.DateTime Vuforia.NullWebCamTexAdaptor::mLastFrame
	DateTime_t_818288618_0  ___mLastFrame_4;
};
