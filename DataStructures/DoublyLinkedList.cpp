#include "DoublyLinkedList.h"

Dnode* DoublyLinkedList::createNode(int value)
{
	Dnode* temp = (Dnode*)malloc(sizeof(Dnode));
	if (temp != NULL)
	{
		temp->next = NULL;
		temp->prev = NULL;
		temp->v = value;
	}
	return temp;
}

void DoublyLinkedList::insertNode(Dnode* node_addr)
{
	if (head == NULL)
	{
		head = node_addr;
		tail = node_addr;
		return;
	}

	Dnode* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = node_addr;
	if (head->next != NULL)
	{
		node_addr->prev = temp;
		tail = node_addr;
	}

	if (head->next == NULL)
	{
		if (head->prev != NULL)
		{
			cout << "Printing prev to head" << endl;
			cout << head->prev->v << endl;
		}
		else cout << "Prev is NULL" << endl;
	}
}

void DoublyLinkedList::printList()
{

	if (head == NULL)
	{
		cout << "List is empty" << endl;
		return;
	}

	Dnode* temp = head;

	while (temp != NULL)
	{
		cout << "Eelement : " << temp->v << endl;
		temp = temp->next;
	}

	cout << "Finished printing list" << endl;
}

void DoublyLinkedList::reverseList()
{
	if (tail == NULL)
	{
		cout << "List is empty" << endl;
		return;
	}

	Dnode* temp = tail;

	while (temp != NULL)
	{
		cout << "Element : " << temp->v << endl;
		temp = temp->prev;
	}

	cout << "Finished reverse printing" << endl;
}