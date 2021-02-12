#pragma once

#include <iostream>

using namespace std;

// This class is just simpal DllNode class and is able to make 
class DLLNode
{
protected:

	int v;
	DLLNode* next;
	DLLNode* prev;

public:

	DLLNode* createNode(int value);
	void insertNode(DLLNode* addr);
};

class DoublyLinkedList : public DLLNode
{
private:

	DLLNode* head = nullptr;
	DLLNode* tail = nullptr;

public:

	DLLNode* createNode(int value);
	void insertNode(DLLNode* addr);
	void printList();
	void reverseList();
	void removeNode(int value);
};