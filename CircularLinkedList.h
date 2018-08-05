#pragma once
#include "BNode.h"

class CLinkedList
{
private:
	int pCount;
	BNode * pAlwaysFirst;
	BNode * pLast;
	BNode* CreateNode(int value);

public:
	CLinkedList();
	void InsertNode(BNode* newNode);
	void InsertNode(int value);
	void DeleteNode(int value);
	void DeleteFirstNode();
	void DeleteLastNode();
	void PrintNode();
};