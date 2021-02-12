#include "DoublyLinkedList.h"

// This are old C like programming
//This method is to create the node of type Dnode
//Dnode* DoublyLinkedList::createNode(int value)
//{
//	Dnode* temp = new Dnode;
//	if (temp != nullptr)
//	{
//		temp->next = nullptr;
//		temp->prev = nullptr;
//		temp->v = value;
//		return temp;
//	}
//	else
//	{
//		cout << "Could not assign memory for the node || Memory full" << endl;
//	}
//}

//This mehtod is to insert node in singly linked list
//void DoublyLinkedList::insertNode(Dnode* node_addr)
//{
//	if (head == nullptr)
//	{
//		head = node_addr;
//		tail = node_addr;
//		return;
//	}
//
//	Dnode* temp = head;
//	while (temp->next != nullptr)
//	{
//		temp = temp->next;
//	}
//	temp->next = node_addr;
//	if (head->next != nullptr)
//	{
//		node_addr->prev = temp;
//		tail = node_addr;
//	}
//}

DLLNode* DoublyLinkedList::createNode(int value) {

}

DLLNode* DLLNode::createNode(int value)
{
	DLLNode* temp = new DLLNode;
	if (temp != nullptr)
	{
		temp->next = nullptr;
		temp->prev = nullptr;
		temp->v = value;
		return temp;
	}
	else
	{
		cout << "Could not assign memory for the node || Memory full" << endl;
	}
}


void DLLNode::insertNode(DLLNode* node_addr)
{
	if (head == nullptr)
	{
		head = node_addr;
		tail = node_addr;
		return;
	}

	DLLNode* temp = head;
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

void DoublyLinkedList::removeNode(int value)
{
	if (head == nullptr)
	{
		cout << "List is empty !!!" << endl;
		return;
	}
	else
	{
		DLLNode* temp = head;
		while (temp->v != value)
		{
			temp = temp->next;
		}
		temp = temp->next->next;
	}
}

//This method prints the list
void DoublyLinkedList::printList()
{

	if (head == nullptr)
	{
		cout << "List is empty" << endl;
		return;
	}

	DLLNode* temp = head;

	while (temp != nullptr)
	{
		cout << "Eelement : " << temp->v << endl;
		temp = temp->next;
	}

	cout << "Finished printing list" << endl;
}


//This method is to print list from the end
void DoublyLinkedList::reverseList()
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
