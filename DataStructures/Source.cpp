#pragma once

#include<iostream>
#include"SinglyLinkedList.h"

int main(void) {
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