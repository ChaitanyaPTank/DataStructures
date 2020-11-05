#include "DoublyLinkedList.h"

Dnode* DoublyLinkedList::createNode(int value)
{
	Dnode* temp = new Dnode;
	if (temp != nullptr)
	{
		temp->next = nullptr;
		temp->prev = nullptr;
		temp->v = value;
	}
	return temp;
}

void DoublyLinkedList::insertNode(Dnode* node_addr)
{
	if (head == nullptr)
	{
		head = node_addr;
		tail = node_addr;
		return;
	}

	Dnode* temp = head;
	while (temp->next != nullptr)
	{
		temp = temp->next;
	}
	temp->next = node_addr;
	if (head->next != nullptr)
	{
		node_addr->prev = temp;
		tail = node_addr;
	}
}

void DoublyLinkedList::printList()
{

	if (head == nullptr)
	{
		cout << "List is empty" << endl;
		return;
	}

	Dnode* temp = head;

	while (temp != nullptr)
	{
		cout << "Eelement : " << temp->v << endl;
		temp = temp->next;
	}

	cout << "Finished printing list" << endl;
}

void DoublyLinkedList::reverseList()
{
	if (tail == nullptr)
	{
		cout << "List is empty" << endl;
		return;
	}

	Dnode* temp = tail;

	while (temp != nullptr)
	{
		cout << "Element : " << temp->v << endl;
		temp = temp->prev;
	}

	cout << "Finished reverse printing" << endl;
}