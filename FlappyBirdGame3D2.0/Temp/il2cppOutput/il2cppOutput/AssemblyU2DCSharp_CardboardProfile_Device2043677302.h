#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "AssemblyU2DCSharp_CardboardProfile_Lenses2272481868.h"
#include "AssemblyU2DCSharp_CardboardProfile_MaxFOV2297670889.h"
#include "AssemblyU2DCSharp_CardboardProfile_Distortion435440829.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CardboardProfile/Device
struct  Device_t2043677302 
{
public:
	// CardboardProfile/Lenses CardboardProfile/Device::lenses
	Lenses_t2272481868  ___lenses_0;
	// CardboardProfile/MaxFOV CardboardProfile/Device::maxFOV
	MaxFOV_t2297670889  ___maxFOV_1;
	// CardboardProfile/Distortion CardboardProfile/Device::distortion
	Distortion_t435440829  ___distortion_2;
	// CardboardProfile/Distortion CardboardProfile/Device::inverse
	Distortion_t435440829  ___inverse_3;

public:
	inline static int32_t get_offset_of_lenses_0() { return static_cast<int32_t>(offsetof(Device_t2043677302, ___lenses_0)); }
	inline Lenses_t2272481868  get_lenses_0() const { return ___lenses_0; }
	inline Lenses_t2272481868 * get_address_of_lenses_0() { return &___lenses_0; }
	inline void set_lenses_0(Lenses_t2272481868  value)
	{
		___lenses_0 = value;
	}

	inline static int32_t get_offset_of_maxFOV_1() { return static_cast<int32_t>(offsetof(Device_t2043677302, ___maxFOV_1)); }
	inline MaxFOV_t2297670889  get_maxFOV_1() const { return ___maxFOV_1; }
	inline MaxFOV_t2297670889 * get_address_of_maxFOV_1() { return &___maxFOV_1; }
	inline void set_maxFOV_1(MaxFOV_t2297670889  value)
	{
		___maxFOV_1 = value;
	}

	inline static int32_t get_offset_of_distortion_2() { return static_cast<int32_t>(offsetof(Device_t2043677302, ___distortion_2)); }
	inline Distortion_t435440829  get_distortion_2() const { return ___distortion_2; }
	inline Distortion_t435440829 * get_address_of_distortion_2() { return &___distortion_2; }
	inline void set_distortion_2(Distortion_t435440829  value)
	{
		___distortion_2 = value;
	}

	inline static int32_t get_offset_of_inverse_3() { return static_cast<int32_t>(offsetof(Device_t2043677302, ___inverse_3)); }
	inline Distortion_t435440829  get_inverse_3() const { return ___inverse_3; }
	inline Distortion_t435440829 * get_address_of_inverse_3() { return &___inverse_3; }
	inline void set_inverse_3(Distortion_t435440829  value)
	{
		___inverse_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: CardboardProfile/Device
struct Device_t2043677302_marshaled_pinvoke
{
	Lenses_t2272481868_marshaled_pinvoke ___lenses_0;
	MaxFOV_t2297670889_marshaled_pinvoke ___maxFOV_1;
	Distortion_t435440829_marshaled_pinvoke ___distortion_2;
	Distortion_t435440829_marshaled_pinvoke ___inverse_3;
};
// Native definition for marshalling of: CardboardProfile/Device
struct Device_t2043677302_marshaled_com
{
	Lenses_t2272481868_marshaled_com ___lenses_0;
	MaxFOV_t2297670889_marshaled_com ___maxFOV_1;
	Distortion_t435440829_marshaled_com ___distortion_2;
	Distortion_t435440829_marshaled_com ___inverse_3;
};
