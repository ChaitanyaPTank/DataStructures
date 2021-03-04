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
	void pop(int value);
};

