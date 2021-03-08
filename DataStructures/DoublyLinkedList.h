#pragma once

#include <iostream>

using namespace std;

// This class is just simpal DllNode class and is able to make 
struct DLLNode
{
	int v;
	DLLNode* next;
	DLLNode* prev;
};

class DoublyLinkedList
{
private:
	DLLNode* head = nullptr;
	DLLNode* tail = nullptr;

public:
	DLLNode* createNode(int value);
	void insertNode(DLLNode* address);
	void printList();
	void reversePrint();
	void pop(int value);
	void append(int value);
};