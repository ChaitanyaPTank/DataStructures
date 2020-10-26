//#include<iostream>
//#include"Structure.h"
//
//using namespace std;
//
//node* head = NULL;
//
//int main() {
//
//	for (int i = 0; i < 10; ++i) {
//		insertNode(createNode(i * 10));
//	}
//
//	printList();
//
//}
//
//void printList(void) {
//	if (head == NULL) {
//		cout << "Empty List" << endl;
//		return;
//	}
//	node* temp = NULL;
//	while (temp->next != NULL)
//	{
//		cout << temp->value << endl;
//	}
//}
//
//void insertNode(node* v)
//{
//	if (head == NULL) {
//		head = v;
//		return;
//	}
//	node* temp = head;
//	while (temp->next != NULL)
//	{
//		temp = temp->next;
//	}
//	temp->next = v;
//}
//
//node* createNode(int val) {
//	node* temp = (node*)malloc(sizeof(node));
//	temp->value = val;
//	temp->next = NULL;
//	return temp;
//}


#include<iostream>

using namespace std;

struct node
{
	int v;
	node* next;
};

node* createNode(int value);
void insertNode(node* address);

node* head = NULL;

int main() {

	int length = 10;

	for (int i = 0; i < length; i++)
	{
		insertNode(createNode(i));
	}


	node* temp = head;

	while (temp != NULL)
	{
		cout << temp->v << endl;
		temp = temp->next;
	}
}

node* createNode(int value) {
	node* temp = (node*)malloc(sizeof(node));
	temp->v = value;
	temp->next = NULL;
	return temp;
}

void insertNode(node* address) {
	if (head == NULL) {
		head = address;
		return;
	}
	node* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = address;
}