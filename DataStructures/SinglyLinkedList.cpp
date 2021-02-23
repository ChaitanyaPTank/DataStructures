#pragma once
#include"SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList()
{
	this->head = nullptr;
	this->tail = nullptr;
}

SinglyLinkedList::~SinglyLinkedList()
{

}

node* SinglyLinkedList::createNode(int value)
{
	node* temp = new node();
	temp->value = value;
	temp->next = nullptr;
	return temp;
}

int SinglyLinkedList::insertNode(node* element)
{
	if (this->head == nullptr) {
		cout << "appending first element" << endl;
		this->head = element;
		this->tail = element;
		return 1;
	}
	node* temp = this->head;

	while (temp->next != nullptr)
	{
		temp = temp->next;
	}
	temp->next = element;
	return 1;
}

void SinglyLinkedList::print() {
	node* temp = this->head;
	while (temp != nullptr)
	{
		cout << temp->value << endl;
		temp = temp->next;
	}
}

void SinglyLinkedList::append(int val) {
	insertNode(createNode(val));
}