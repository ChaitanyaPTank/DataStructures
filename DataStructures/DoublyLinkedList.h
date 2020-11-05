#pragma once

#include <iostream>
#include "Variable.h"

using namespace std;

class DoublyLinkedList
{
private:
	Dnode* head = nullptr;
	Dnode* tail = nullptr;

public:
	Dnode* createNode(int value);
	void insertNode(Dnode* addr);
	void printList();
	void reverseList();

};