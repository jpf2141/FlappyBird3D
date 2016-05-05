#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.WordImpl
struct WordImpl_t1558034562_0;
// System.String
struct String_t;
// Vuforia.Image
struct Image_t_100031453_0;
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t1918133155_0;
// Vuforia.ImageImpl
struct ImageImpl_t_693653277_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1481905510.h"

// System.Void Vuforia.WordImpl::.ctor(System.Int32,System.String,UnityEngine.Vector2)
extern "C"  void WordImpl__ctor_m_877568491_0 (WordImpl_t1558034562_0 * __this, int32_t ___id, String_t* ___text, Vector2_t_725341338_0  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.WordImpl::get_StringValue()
extern "C"  String_t* WordImpl_get_StringValue_m1998556710_0 (WordImpl_t1558034562_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.WordImpl::get_Size()
extern "C"  Vector2_t_725341338_0  WordImpl_get_Size_m496840085_0 (WordImpl_t1558034562_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.WordImpl::GetLetterMask()
extern "C"  Image_t_100031453_0 * WordImpl_GetLetterMask_m_2125633258_0 (WordImpl_t1558034562_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RectangleData[] Vuforia.WordImpl::GetLetterBoundingBoxes()
extern "C"  RectangleDataU5BU5D_t1918133155_0* WordImpl_GetLetterBoundingBoxes_m_341428563_0 (WordImpl_t1558034562_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::InitImageHeader()
extern "C"  void WordImpl_InitImageHeader_m248667850_0 (WordImpl_t1558034562_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::CreateLetterMask()
extern "C"  void WordImpl_CreateLetterMask_m433471166_0 (WordImpl_t1558034562_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::SetImageValues(Vuforia.VuforiaManagerImpl/ImageHeaderData,Vuforia.ImageImpl)
extern "C"  void WordImpl_SetImageValues_m1836213134_0 (Object_t * __this /* static, unused */, ImageHeaderData_t1481905510_0  ___imageHeader, ImageImpl_t_693653277_0 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::AllocateImage(Vuforia.ImageImpl)
extern "C"  void WordImpl_AllocateImage_m1424121043_0 (Object_t * __this /* static, unused */, ImageImpl_t_693653277_0 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
