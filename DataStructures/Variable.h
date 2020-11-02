#pragma once

struct node
{
	int v;
	node* next;
};

struct Dnode
{
	int v;
	Dnode* next = NULL;
	Dnode* prev = NULL;
};