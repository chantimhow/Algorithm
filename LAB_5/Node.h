#ifndef Node_type
#define Node_type



typedef int type;

//using type = int;

struct Node{
	type item;
	Node *next;
	Node(type);
};


#endif