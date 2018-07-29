#include <iostream>
#include "LinkedList.h"
\

//typedef int element;
//
//typedef struct ListNode
//{	
//	element data;
//	struct ListNode *link;
//}ListNode;
//
//ListNode* CreateNode(int value)
//{
//	cout << "CreateNode()" << endl;
//	ListNode* newNode;
//	newNode = new ListNode();
//	newNode->data = value;
//	newNode->link = NULL;
//
//	return newNode;
//}
//
//void InsertNode(ListNode** pHead, ListNode* newNode)
//{
//	cout << "InsertNode()" << endl;
//	
//	if (*pHead == NULL)
//	{
//		*pHead = newNode;
//		return;
//	}
//
//	newNode->link = *pHead;
//	*pHead = newNode;
//}
//
//void DeleteNode(ListNode** pHead, int value)
//{
//	cout << "DeleteNode() " << value << endl;
//	ListNode *currentNode = *pHead;
//	ListNode *prevNode = NULL;
//	
//	if ((*pHead)->data == value)
//	{
//		ListNode *removeNode = *pHead;
//		*pHead = (*pHead)->link;
//		delete removeNode;
//		return;
//	}
//
//	while (currentNode != NULL && currentNode->data != value)
//	{
//		prevNode = currentNode;
//		currentNode = currentNode->link;
//	}
//
//	if (currentNode->data == value)
//	{
//		cout << "found!" << endl;
//		prevNode->link = currentNode->link;
//		delete currentNode;
//		cout << "deleted!" << endl;
//		return;
//	}
//
//}
//
//void PrintList(ListNode* pHead)
//{
//	cout << "PrintList()" << endl;
//	ListNode* currentNode = pHead;
//	while (currentNode != NULL)
//	{
//		cout << currentNode->data << "->";
//		currentNode = currentNode->link;
//	}
//	cout << endl;
//}
//
//ListNode* SearchNode(ListNode** pHead, int value)
//{
//	ListNode* currentNode = *pHead;
//
//	while (currentNode != NULL)
//	{
//		if (currentNode->data == value)
//		{
//			return currentNode;
//		}
//	}
//	return NULL;
//}
//
//ListNode* SearchFirstNode(ListNode** pHead)
//{
//	if (*pHead == NULL)
//	{
//		return NULL;
//	}
//
//	return *pHead;
//}

int main()
{

	LinkedList linkedlist;

	std::cout << "생성 완료" << std::endl;

	linkedlist.InsertNode(1);
	linkedlist.InsertNode(2);
	linkedlist.InsertNode(3);
	linkedlist.InsertNode(4);
	linkedlist.InsertNode(5);

	linkedlist.PrintNode();

	return 0;
}