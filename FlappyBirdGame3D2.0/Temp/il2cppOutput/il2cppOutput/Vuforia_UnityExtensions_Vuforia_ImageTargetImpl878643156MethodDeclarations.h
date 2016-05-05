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

// Vuforia.ImageTargetImpl
struct ImageTargetImpl_t878643156_0;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t_2109692640_0;
// Vuforia.VirtualButton
struct VirtualButton_t_1353895707_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t449353930_0;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetType878982382.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleData207582337.h"

// System.Void Vuforia.ImageTargetImpl::.ctor(System.String,System.Int32,Vuforia.ImageTargetType,Vuforia.DataSet)
extern "C"  void ImageTargetImpl__ctor_m_1099028413_0 (ImageTargetImpl_t878643156_0 * __this, String_t* ___name, int32_t ___id, int32_t ___imageTargetType, DataSet_t_2109692640_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.ImageTargetImpl::get_ImageTargetType()
extern "C"  int32_t ImageTargetImpl_get_ImageTargetType_m_215689232_0 (ImageTargetImpl_t878643156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C"  VirtualButton_t_1353895707_0 * ImageTargetImpl_CreateVirtualButton_m1483301316_0 (ImageTargetImpl_t878643156_0 * __this, String_t* ___name, RectangleData_t207582337_0  ___area, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C"  VirtualButton_t_1353895707_0 * ImageTargetImpl_GetVirtualButtonByName_m_1862946349_0 (ImageTargetImpl_t878643156_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.ImageTargetImpl::GetVirtualButtons()
extern "C"  Object_t* ImageTargetImpl_GetVirtualButtons_m99058691_0 (ImageTargetImpl_t878643156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C"  bool ImageTargetImpl_DestroyVirtualButton_m879157800_0 (ImageTargetImpl_t878643156_0 * __this, VirtualButton_t_1353895707_0 * ___vb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateNewVirtualButtonInNative(System.String,Vuforia.RectangleData)
extern "C"  VirtualButton_t_1353895707_0 * ImageTargetImpl_CreateNewVirtualButtonInNative_m_1388282522_0 (ImageTargetImpl_t878643156_0 * __this, String_t* ___name, RectangleData_t207582337_0  ___rectangleData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::UnregisterVirtualButtonInNative(Vuforia.VirtualButton)
extern "C"  bool ImageTargetImpl_UnregisterVirtualButtonInNative_m_334085320_0 (ImageTargetImpl_t878643156_0 * __this, VirtualButton_t_1353895707_0 * ___vb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetImpl::CreateVirtualButtonsFromNative()
extern "C"  void ImageTargetImpl_CreateVirtualButtonsFromNative_m_811181925_0 (ImageTargetImpl_t878643156_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
