#pragma once
#include "Variable.h"

class SinglyLinkedList {
private:
	node* head = nullptr;
public:
	node* createNode(int value);
	void insertNode(node* address);
	int testList();
	void removeNode(int value);
	void printList();
};