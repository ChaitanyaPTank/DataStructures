#pragma once
<<<<<<< HEAD

#include<iostream>
#include"SinglyLinkedList.h"

int main(void) {
	SinglyLinkedList newElement;

	newElement.append(10);
	newElement.append(20);
	newElement.append(30);
	newElement.append(40);
	newElement.append(50);

=======

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
>>>>>>> cee239671ed1a8121a990c09d449c9dec656284f
	newElement.print();

}