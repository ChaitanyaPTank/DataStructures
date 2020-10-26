#include<iostream>
#include"Source.h"

using namespace std;

int main() {
	for (int i = 0; i < 10; ++i) {
		insertNode(createNode(i));
	}

	cout << "before removing node" << endl;
	printList();

	//removing node
	removeNode(1);
	removeNode(5);

	cout << "After removing node" << endl;
	printList();
}

//This will create node in and put value in it

node* createNode(int value) {
	node* temp = (node*)malloc(sizeof(node));
	if (temp != NULL) {
		temp->v = value;
		temp->next = NULL;
	}
	return temp;
}

//Address of newly created node will be passed here and node will be attached at the end of last element of existing list

void insertNode(node* address) {
	if (head == NULL) {
		head = address;
		return;
	}
	node* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = address;
}

//Testing Linked List

int testList() {
	for (int i = 0; i < 10; i++)
	{
		insertNode(createNode(i));
	}

	node* temp = head;

	int i = 0;
	while (temp != NULL)
	{
		if (temp->v != i) {
			return 0;
		}
		++i;
		temp = temp->next;
	}

	return -1;
}

//remove entry from list

void removeNode(int value)
{
	node* leader = head;
	node* follower = head;

	while (leader->v != value)
	{
		follower = leader;
		leader = leader->next;
	}
	follower->next = leader->next;
}

// Prnting List
void printList() {
	node* temp = head;
	while (temp != NULL)
	{
		cout << temp->v << endl;
		temp = temp->next;
	}
}