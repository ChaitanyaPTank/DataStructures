#include<iostream>
#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"

using namespace std;

int main() {
	DoublyLinkedList list1;

	list1.insertNode(list1.createNode(10));
	list1.insertNode(list1.createNode(20));
	list1.insertNode(list1.createNode(30));
	list1.insertNode(list1.createNode(40));
	list1.insertNode(list1.createNode(50));
	list1.insertNode(list1.createNode(60));
	list1.insertNode(list1.createNode(70));
	list1.insertNode(list1.createNode(80));
	list1.insertNode(list1.createNode(90));
	list1.insertNode(list1.createNode(100));

	cout << "Printing List" << endl;

	list1.printList();

	//reverse printing test

	cout << "Reverse Printing" << endl;

	list1.reverseList();

	//After removing node
	list1.removeNode(30);

	list1.printList();
}
