#include "DoublyLinkedList.h"

DLLNode* DoublyLinkedList::createNode(int value)
{
	DLLNode* temp = new DLLNode;
	temp->next = nullptr;
	temp->prev = nullptr;
	temp->v = value;

	return temp;
}

void DoublyLinkedList::insertNode(DLLNode* newNode)
{
	if (head == nullptr)
	{
		head = newNode;
		tail = newNode;
		return;
	}

	DLLNode* temp = head;
	while (temp->next != nullptr)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	if (head->next != nullptr)
	{
		newNode->prev = temp;
		tail = newNode;
	}
}

// apend node in list
void DoublyLinkedList::append(int value)
{
	insertNode(createNode(value));
}

// pop a node from list
void DoublyLinkedList::pop(int value)
{
	if (this->head == nullptr)
	{
		cout << "List is empty !!!" << endl;
		return;
	}
	else
	{
		DLLNode* temp = this->head;
		if (temp->v == value) {
			this->head = this->head->next;
			return;
		}
		while (temp->v != value)
		{
			temp = temp->next;
		}
		temp->prev->next = temp->next;
	}
}

//This method prints the list
void DoublyLinkedList::print()
{

	if (this->head == nullptr)
	{
		cout << "List is empty" << endl;
		return;
	}

	DLLNode* temp = this->head;

	while (temp != nullptr)
	{
		cout << "Element : " << temp->v << endl;
		temp = temp->next;
	}

	cout << "Finished printing list" << endl;
}


//This method reverse prints a list
void DoublyLinkedList::reversePrint()
{
	if (tail == nullptr)
	{
		cout << "List is empty" << endl;
		return;
	}

	DLLNode* temp = tail;

	while (temp != nullptr)
	{
		cout << "Element : " << temp->v << endl;
		temp = temp->prev;
	}

	cout << "Finished reverse printing" << endl;
}