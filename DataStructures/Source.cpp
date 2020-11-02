#include<iostream>
#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"

using namespace std;

int main() {
	DoublyLinkedList list1;

	/*for (int i = 0; i < 10; ++i)
	{
		list1.insertNode(list1.createNode(i * 10));
	}*/

	list1.insertNode(list1.createNode(10));

	cout << "Printing List" << endl;

	list1.printList();

	cout << "Reverse Printing" << endl;

	list1.reverseList();
}