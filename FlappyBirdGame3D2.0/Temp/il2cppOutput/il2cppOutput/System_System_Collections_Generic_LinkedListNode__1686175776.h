#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t_2137284930_0;
// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t_1686175776_0;

#include "mscorlib_System_Object_887538054.h"

// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct  LinkedListNode_1_t_1686175776_0  : public Object_t
{
	// T System.Collections.Generic.LinkedListNode`1::item
	int32_t ___item_0;
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::container
	LinkedList_1_t_2137284930_0 * ___container_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::forward
	LinkedListNode_1_t_1686175776_0 * ___forward_2;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::back
	LinkedListNode_1_t_1686175776_0 * ___back_3;
};
