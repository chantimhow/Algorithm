#include	<iostream>
#include    <iomanip>
#include	"List.h"
//#include    "Person.h"
#include	"List.cpp"
#include "Node.cpp"
#include "Node.h"

using namespace std;

bool printList(List);
bool printListcur(List list);
int main() 
{
	cout << "\n*****************************(a) and (b)**********************************\n";
	//question a
	List linkedlist;
	linkedlist.insert(1,3);
	linkedlist.insert(2,6);
	linkedlist.insert(3,2);
	linkedlist.insert(4,9);
	linkedlist.insert(5,7);
	//question b
	printList(linkedlist);
	cout << endl;
	printListcur(linkedlist);
	cout << endl;


	cout << "\n********************************(c)**************************************\n";
	//question C
	for(int i =1;i<=linkedlist.count;i++){
		int result; 
		linkedlist.get(i,result);
		if(result%2!=0){
			linkedlist.set(i, result*2);
		}
	}
	printList(linkedlist);

	cout << "\n********************************(d)**************************************\n";
	//question D
	linkedlist.remove(4);
	printList(linkedlist);	

	cout << "\n********************************(e)**************************************\n";
	List linkedlist2;
	linkedlist2.insert(3);
	linkedlist2.insert(6);
	linkedlist2.insert(2);
	linkedlist2.insert(9);
	linkedlist2.insert(7);
	printList(linkedlist2);
	
	system("pause");
	return 0;
}

bool printList(List list){
	if(list.empty()) return false;
	for(int i = 1;i<=list.count;i++){
		int result= 0;
		list.get(i, result);
		cout << result;

	}
	return true;
}
bool printListcur(List list){
	if(list.empty()) return false;
	Node *cur = list.head;
	for(int i = 1;i<=list.count;i++){
		cout << cur->item;
		cur = cur->next;
	}
	return true;
		
}
	



