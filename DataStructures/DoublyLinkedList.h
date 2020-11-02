#pragma once

#include <iostream>
#include "Variable.h"

using namespace std;

class DoublyLinkedList
{
private:
	Dnode* head = NULL;
	Dnode* tail = NULL;

public:
	Dnode* createNode(int value);
	void insertNode(Dnode* addr);
	void printList();
	void reverseList();

};