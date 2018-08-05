#include <iostream>
#include "CircularLinkedList.h"

using namespace std;

BNode* CLinkedList::CreateNode(int value)
{
	BNode* newNode = new BNode();
	newNode->next = NULL;
	newNode->value = value;

	return newNode;
}

CLinkedList::CLinkedList()
{
	pAlwaysFirst = NULL;
	pLast = NULL;

	pCount = 0;
}

void CLinkedList::InsertNode(BNode* newNode)
{
	pCount++;
	if (pCount == 1)
	{
		newNode->prev = newNode;
		newNode->next = newNode;
		pAlwaysFirst = newNode;
		pLast = newNode;
	}
	else if (pCount == 2)
	{
		pAlwaysFirst->next = newNode;
		newNode->prev = pAlwaysFirst;
		newNode->next = pAlwaysFirst;
		pLast = newNode;
	}
	else
	{
		pLast->next = newNode;
		newNode->prev = pLast;
		newNode->next = pAlwaysFirst;
		pLast = newNode;
	}
}

void CLinkedList::InsertNode(int value)
{
	BNode* newNode = CreateNode(value);
	
	InsertNode(newNode);
}

void CLinkedList::DeleteNode(int value)
{
	if (pAlwaysFirst == NULL || pLast == NULL)
	{
		cout << "List is Empty." << endl;
		return;
	}

	BNode* currentNode = pAlwaysFirst;
	
	while (currentNode->value != value)
	{
		currentNode = currentNode->next;

		if (currentNode == pAlwaysFirst)
			break;
	}

	if (currentNode->value == value)
	{
		BNode* prevNode = currentNode->prev;
		BNode* nextNode = currentNode->next;
		prevNode->next = nextNode;
		nextNode->prev = prevNode;
		 
		if (currentNode == pAlwaysFirst)
		{
			pAlwaysFirst = nextNode;
			pLast->next = nextNode;
		}
		else if (currentNode == pLast)
		{
			pAlwaysFirst->prev = prevNode;
			pLast = prevNode;
		}

		delete currentNode;
		pCount--;

		return;
	}

	cout << "Not found " << value << endl;
}

void CLinkedList::DeleteFirstNode()
{
	if (pAlwaysFirst == NULL || pLast == NULL)
	{
		cout << "List is Empty." << endl;
		return;
	}

	if (pAlwaysFirst == pLast)
	{
		delete pAlwaysFirst;
		pLast = NULL;
		pAlwaysFirst = NULL;
		pCount--;

		return;
	}

	BNode* deleteNode = pAlwaysFirst;
	BNode* newFirstNode = pAlwaysFirst->next;
	newFirstNode->prev = pLast;
	pLast->next = newFirstNode;
	pAlwaysFirst = newFirstNode;

	delete deleteNode;
	pCount--;
}

void CLinkedList::DeleteLastNode()
{
	if (pAlwaysFirst == NULL || pLast == NULL)
	{
		cout << "List is Empty." << endl;
		return;
	}

	if (pAlwaysFirst == pLast)
	{
		delete pAlwaysFirst;
		pLast = NULL;
		pAlwaysFirst = NULL;
		pCount--;

		return;
	}
	
	BNode* deleteNode = pLast;
	BNode* newLastNode = pLast->prev;
	newLastNode->next = pAlwaysFirst;
	pAlwaysFirst->prev = newLastNode;
	pLast = newLastNode;

	delete deleteNode;
	pCount--;
}

void CLinkedList::PrintNode()
{
	if (pAlwaysFirst == NULL || pLast == NULL)
	{
		cout << "List is Empty." << endl;
		return;
	}

	BNode* currentNode = pAlwaysFirst;
	do
	{
		if (currentNode == pLast)
			cout << currentNode->value << endl;
		else
			cout << currentNode->value << "->";
		currentNode = currentNode->next;
	} while (currentNode != pAlwaysFirst);
}