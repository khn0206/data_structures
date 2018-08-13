#pragma once

#include "BNode.h"

enum class VisitMode
{
	PreOrder,
	InOrder,
	PostOrder
};

class BTree
{
private:
	BNode* rootNode;
	BNode* CreateNode(int value);

	int size;
public:

	BTree()
	{
		rootNode = NULL;
	}

	BNode* GetRoot();
	void InsertNode(int value);
	void InsertNode(BNode* newNode);
	bool DeleteNode(int value);
	BNode* Preorder(BNode* currentNode);
	BNode* Postorder(BNode* currentNode);
	BNode* Inorder(BNode* currentNode);
	bool FindNode(int value);
	int GetSize();

};