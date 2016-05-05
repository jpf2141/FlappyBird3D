#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t818401599_0;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t1673260381_0;

#include "mscorlib_System_Object_887538054.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct  LinkedListNode_1_t1673260381_0  : public Object_t
{
	// T System.Collections.Generic.LinkedListNode`1::item
	Object_t * ___item_0;
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::container
	LinkedList_1_t818401599_0 * ___container_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::forward
	LinkedListNode_1_t1673260381_0 * ___forward_2;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::back
	LinkedListNode_1_t1673260381_0 * ___back_3;
};
