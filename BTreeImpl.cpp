#include <iostream>
#include "BTree.h"

using namespace std;

hahaha

BNode* BTree::CreateNode(int value)
{
	BNode* newNode = new BNode();
	newNode->next = NULL;
	newNode->prev = NULL;
	newNode->value = value;

	return newNode;
}

BNode* BTree::GetRoot() {
	return rootNode;
}

void BTree::InsertNode(BNode* newNode)
{
	BNode* prevNode = NULL;
	BNode* currentNode = rootNode;

	if (rootNode == NULL)
	{
		cout << "adding to root" << endl;
		rootNode = newNode;
		return;
	}

	while (currentNode != NULL)
	{

		if (currentNode->value == newNode->value)
		{
			cout << "Already exists" << endl;
			return;
		}
		else if (currentNode->value > newNode->value)
		{
			prevNode = currentNode;
			currentNode = currentNode->prev;
		}
		else
		{
			prevNode = currentNode;
			currentNode = currentNode->next;
		}

		if (currentNode == NULL)
		{
			if (prevNode->value > newNode->value)
			{
				cout << "adding left" << endl;
				prevNode->prev = newNode;

			}
			else
			{
				cout << "adding right" << endl;
				prevNode->next = newNode;
			}
			size++;
			return;
		}
	}
}

void BTree::InsertNode(int value)
{
	InsertNode(CreateNode(value));
}

bool BTree::FindNode(int value)
{
	BNode* currentNode = rootNode;
	
	while (currentNode != NULL) 
	{
		if (currentNode->value == value)
		{
			cout << "Found the node " << value << endl;
			if(currentNode->prev != NULL)
				cout << "left:" << currentNode->prev->value << endl;
			if(currentNode->next != NULL)
				cout << "right:" << currentNode->next->value << endl;
			return true;
		}
		else if (currentNode->value > value)
		{
			currentNode = currentNode->prev;
		}
		else
		{
			currentNode = currentNode->next;
		}
	}

	cout << "Not found " << value << endl;
	return false;
}

BNode* BTree::Preorder(BNode* currentNode)
{
	if (currentNode != NULL)
	{
		cout << currentNode->value << "->";
		Preorder(currentNode->prev);
		Preorder(currentNode->next);
	}
	return NULL;
}

BNode* BTree::Inorder(BNode* currentNode)
{
	if (currentNode != NULL)
	{
		Inorder(currentNode->prev);
		cout << currentNode->value << "->";
		Inorder(currentNode->next);
	}
	return NULL;
}

BNode* BTree::Postorder(BNode* currentNode)
{
	if (currentNode != NULL)
	{
		Postorder(currentNode->prev);
		Postorder(currentNode->next);
		cout << currentNode->value << "->";
	}
	return NULL;
}
	
bool BTree::DeleteNode(int value)
{
	return true;
}

int BTree::GetSize()
{
	return size;
}