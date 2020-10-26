#pragma once

struct node
{
	int v;
	node* next;
};

node* createNode(int value);
void insertNode(node* address);
int testList();
void removeNode(int value);
void printList();

node* head = NULL;