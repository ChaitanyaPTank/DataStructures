#include<iostream>
#include "Variable.h"

using namespace std;

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

//This will create node in and put value in it

node* SinglyLinkedList::createNode(int value) {
	node* temp = new node;
	if (temp != nullptr) {
		temp->v = value;
		temp->next = nullptr;
	}
	return temp;
}

//Address of newly created node will be passed here and node will be attached at the end of last element of existing list

void SinglyLinkedList::insertNode(node* address) {
	if (head == nullptr) {
		head = address;
		return;
	}
	node* temp = head;
	while (temp->next != nullptr)
	{
		temp = temp->next;
	}
	temp->next = address;
}

//Testing Linked List

int SinglyLinkedList::testList() {
	for (int i = 0; i < 10; i++)
	{
		insertNode(createNode(i));
	}

	node* temp = head;

	int i = 0;
	while (temp != nullptr)
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

void SinglyLinkedList::removeNode(int value)
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
void SinglyLinkedList::printList() {
	node* temp = head;
	while (temp != nullptr)
	{
		cout << temp->v << endl;
		temp = temp->next;
	}
}