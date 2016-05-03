#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// CardboardEye
struct CardboardEye_t2174202011;
// Vuforia.WireframeBehaviour
struct WireframeBehaviour_t2976175819;
// Vuforia.VirtualButtonBehaviour
struct VirtualButtonBehaviour_t3242546262;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_CardboardAudioRoom_SurfaceMateria459108564.h"
#include "AssemblyU2DCSharp_CardboardEye2174202011.h"
#include "AssemblyU2DCSharp_Vuforia_WireframeBehaviour2976175819.h"
#include "AssemblyU2DCSharp_Vuforia_VirtualButtonBehaviour3242546262.h"

#pragma once
// CardboardAudioRoom/SurfaceMaterial[]
struct SurfaceMaterialU5BU5D_t3915230557  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// CardboardEye[]
struct CardboardEyeU5BU5D_t1172581018  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) CardboardEye_t2174202011 * m_Items[1];

public:
	inline CardboardEye_t2174202011 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline CardboardEye_t2174202011 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, CardboardEye_t2174202011 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vuforia.WireframeBehaviour[]
struct WireframeBehaviourU5BU5D_t2272146858  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) WireframeBehaviour_t2976175819 * m_Items[1];

public:
	inline WireframeBehaviour_t2976175819 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline WireframeBehaviour_t2976175819 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, WireframeBehaviour_t2976175819 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vuforia.VirtualButtonBehaviour[]
struct VirtualButtonBehaviourU5BU5D_t4188639635  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) VirtualButtonBehaviour_t3242546262 * m_Items[1];

public:
	inline VirtualButtonBehaviour_t3242546262 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline VirtualButtonBehaviour_t3242546262 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, VirtualButtonBehaviour_t3242546262 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
