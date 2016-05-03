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


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct Device_t2043677302;
struct Device_t2043677302_marshaled_pinvoke;

extern "C" void Device_t2043677302_marshal_pinvoke(const Device_t2043677302& unmarshaled, Device_t2043677302_marshaled_pinvoke& marshaled);
extern "C" void Device_t2043677302_marshal_pinvoke_back(const Device_t2043677302_marshaled_pinvoke& marshaled, Device_t2043677302& unmarshaled);
extern "C" void Device_t2043677302_marshal_pinvoke_cleanup(Device_t2043677302_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Device_t2043677302;
struct Device_t2043677302_marshaled_com;

extern "C" void Device_t2043677302_marshal_com(const Device_t2043677302& unmarshaled, Device_t2043677302_marshaled_com& marshaled);
extern "C" void Device_t2043677302_marshal_com_back(const Device_t2043677302_marshaled_com& marshaled, Device_t2043677302& unmarshaled);
extern "C" void Device_t2043677302_marshal_com_cleanup(Device_t2043677302_marshaled_com& marshaled);
