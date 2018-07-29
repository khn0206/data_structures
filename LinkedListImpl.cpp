#include <iostream>
#include "LinkedList.h"

using namespace std;

Node* LinkedList::CreateNode(int value)
{
	Node* newNode = new Node();
	newNode->ptr = NULL;
	newNode->value = value;

	return newNode;
}

LinkedList::LinkedList()
{
	pHead = NULL;
}

void LinkedList::InsertNode(Node* newNode)
{
	if (pHead == NULL)
	{
		cout << "phead is null" << endl;
		pHead = newNode;
		return;
	}

	newNode->ptr = pHead;
	pHead = newNode;
}

void LinkedList::InsertNode(Node* newNode, int after)
{
	Node* currentNode = pHead;

	while (currentNode != NULL && currentNode->value != after)
	{
		currentNode = currentNode->ptr;
	}

	if (currentNode->value == after)
	{
		newNode->ptr = currentNode->ptr;
		currentNode->ptr = newNode;
		return;
	}

	cout << "No such Node" << endl;
}

void LinkedList::InsertNode(int newValue, int after)
{
	Node* newNode = CreateNode(newValue);

	Node* currentNode = pHead;

	while (currentNode != NULL && currentNode->value != after)
	{
		currentNode = currentNode->ptr;
	}

	if (currentNode->value == after)
	{
		newNode->ptr = currentNode->ptr;
		currentNode->ptr = newNode;
		return;
	}

	cout << "No such Node" << endl;
}

void LinkedList::InsertNode(int value)
{
	LinkedList::InsertNode(LinkedList::CreateNode(value));
}

void LinkedList::DeleteNode(int value)
{
	Node* prevNode = NULL;
	Node* currentNode = pHead;

	if (currentNode->value == value)
	{
		cout << "First Node Deleted" << endl;
		pHead = currentNode->ptr;
		delete currentNode;
		return;
	}

	while (currentNode != NULL && currentNode->value != value)
	{
		prevNode = currentNode;
		currentNode = currentNode->ptr;
	}

	if (currentNode->value == value)
	{
		prevNode->ptr = currentNode->ptr;
		delete currentNode;
		return;
	}

	cout << "No such node" << endl;
}

void LinkedList::PrintNode()
{
	Node* currentNode = pHead;
	while (currentNode != NULL)
	{
		cout << currentNode->value << "->";
		currentNode = currentNode->ptr;
	}
	cout << endl;
}