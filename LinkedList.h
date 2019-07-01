#pragma once
#include "Node.h"

class LinkedList
{
private:
	Node *pHead;
	Node* CreateNode(int value);

public:
	LinkedList();
	void InsertNode(Node* newNode);
	void InsertNode(Node* newNode, int after);
	void InsertNode(int newValue, int after);
	void InsertNode(int value);
	void DeleteNode(int value);
	void PrintNode();
};