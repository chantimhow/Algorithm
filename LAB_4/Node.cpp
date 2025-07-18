#include <iostream>
#include "Node.h"


//typedef Person type;

using type = int;

Node::Node(type newItem)
{
	item = newItem;
	next = NULL;
}