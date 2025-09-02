#include	<iostream>
#include	"List.h"
#include 	"List.cpp"
#include	"Node.h"
#include 	"Node.cpp"

using namespace std;

int main() {
	/*
		Create a list, insert few items into the list.
		Print the list
		Call the swap() function
		Print the resulting list
	*/
	//question a
	List linkedlist;
	linkedlist.insert(1);
	linkedlist.insert(2);
	linkedlist.insert(3);
	linkedlist.insert(4);
	linkedlist.insert(5);
	linkedlist.printAll();
	linkedlist.swap(1);
	linkedlist.printAll();
	return 0;
}


