#pragma once

#include<iostream>
#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"

/*
int main(void)
{
	SinglyLinkedList newElement;

	newElement.append(10);
	newElement.append(20);
	newElement.append(30);
	newElement.append(40);
	newElement.append(50);

	newElement.print();

	newElement.pop(30);

	cout << "after popping element..." << endl;
	newElement.print();

}
*/

int main(void)
{
	DoublyLinkedList testObj;
	testObj.append(10);
	testObj.append(20);
	testObj.append(30);
	//testObj.append(40);
	//testObj.append(50);

	testObj.print();

	testObj.pop(10);

	testObj.print();
}