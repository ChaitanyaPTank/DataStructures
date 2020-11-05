#include<iostream>
#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"

using namespace std;

int main() {
	DoublyLinkedList list1;

	list1.insertNode(list1.createNode(10));
	list1.insertNode(list1.createNode(20));
	list1.insertNode(list1.createNode(30));

	cout << "Printing List" << endl;

	list1.printList();

	//reverse printing test

	cout << "Reverse Printing" << endl;

	list1.reverseList();
}