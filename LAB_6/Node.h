#ifndef Node_type
#define Node_type

//typedef char type;

using type = char;

struct Node {
	public:
		type	item;
		Node	*next;
		Node(type);
};


#endif