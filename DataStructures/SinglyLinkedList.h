#pragma once
#include<iostream>

using namespace std;

struct node
{
	int value;
	node* next;
};

class SinglyLinkedList
{
private:
	node* head;
	node* tail;

public:
	SinglyLinkedList();
	~SinglyLinkedList();
	int insertNode(node* element);
	node* createNode(int value);
	void print();
	void append(int val);
<<<<<<< HEAD
=======
	void pop(int value);
>>>>>>> cee239671ed1a8121a990c09d449c9dec656284f
};

