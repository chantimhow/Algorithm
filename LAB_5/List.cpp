#include <cstddef>
#include <iostream>
#include "List.h"
#include "Node.h"

using namespace std;

//P5 Q1 swap
bool List::swap(type item){
	if(empty()) return false;
	Node *temp, *pre, *cur;
	int item2;
	cur = head;
	while(cur!=NULL&&cur->next!=NULL){
		if(cur->item == item){
			Node* nextnode = cur->next;
			if(cur == head){
				head = nextnode;
			}
			else{
				pre->next=nextnode;
			}
			cur->next=nextnode->next;
			nextnode->next = cur;

		}
		pre = cur;
		cur = cur->next;
		return true;
	}
	return false;
}


List::List() {
	head = NULL;
	count = 0;
}

bool List::empty() {
	return (count == 0);
}

int List::size() {
	return count;
}

Node *List::find(int position) {
	Node *cur;
	
	if (position > count) return NULL;
	cur = head;
	for (int count=1; count<position; count++) 
		cur = cur->next;
	return cur;
}

bool List::get(int position, type &result) {
	if (position > count) return false;
	result = find(position)->item;
	return true;
}

bool List::set(int position, type newItem) {
	if (position > count) return false;
	find(position)->item = newItem;
	return true;
}

bool List::insert(int at, type newItem) {
	Node *pre, *cur, *tmp = new Node(newItem);

	if (at < 1 || at > count+1) return false;
	if (!tmp) return false;

	if (empty()) {
		head = tmp;
		count++;
		return true;
	}
	if (at == 1) {
		tmp->next = head;
		head = tmp;
		count++;
		return true;
	}
	pre = find(at-1);
	cur = pre->next;
	tmp->next = cur;
	pre->next = tmp;
	count++;
	return true;
}

bool List::remove(int from) {
	Node *pre, *cur;

	if (from < 1 || from > count) return false;
	if (from == 1) {
		cur = head;
		head = head->next;
		count--;
		free(cur);
		return true;
	}
	pre = find(from-1);
	cur = pre->next;
	pre->next = cur->next;
	free(cur);
	count--;
	return true;
}

//insert in ascending
bool List::insert(type newItem) {
	Node *pre, *cur, *tmp;

	tmp = new Node(newItem);

	if (!tmp) return false;
	if (empty()) {
		head = tmp;
		count++;
		return true;
	}
	count++;
	if (head->item >= newItem) {
		tmp->next = head;
		head = tmp;
		return true;
	}
	pre = head;
	cur = pre->next;
	for (; cur != NULL;) {
		if (cur->item >= newItem) break;
		pre = cur;	cur = cur->next;
	}
	tmp->next = cur;
	pre->next = tmp;
	return true;
}

void List::printAll() {
	Node* cur = head;

	if (empty()) cout << "The list is empty.\n";

	while (cur != NULL) {
		cout << cur->item << " ";
		cur = cur->next;
	}
}