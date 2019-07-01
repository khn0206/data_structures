#include <iostream>
#include "LinkedList.h"
#include "CircularLinkedList.h"
#include "BTree.h"

using namespace std;

void TestLinkedList()
{
	LinkedList linkedlist;

	linkedlist.InsertNode(1);
	linkedlist.InsertNode(2);
	linkedlist.InsertNode(3);
	linkedlist.InsertNode(4);
	linkedlist.InsertNode(5);

	linkedlist.PrintNode();

	linkedlist.InsertNode(10, 3);

	linkedlist.PrintNode();
}

void TestCircularLinkedList()
{
	CLinkedList clinkedlist;

	clinkedlist.InsertNode(1);
	clinkedlist.InsertNode(2);
	clinkedlist.InsertNode(3);
	clinkedlist.InsertNode(4);
	clinkedlist.InsertNode(5);

	clinkedlist.PrintNode();

	clinkedlist.DeleteNode(1);
	clinkedlist.PrintNode();
	clinkedlist.DeleteNode(5);
	clinkedlist.PrintNode();
	clinkedlist.DeleteNode(2);
	clinkedlist.PrintNode();
	clinkedlist.DeleteNode(4);
	clinkedlist.PrintNode();
	clinkedlist.DeleteLastNode();

	clinkedlist.InsertNode(1);
	clinkedlist.InsertNode(2);
	clinkedlist.InsertNode(3);
	clinkedlist.PrintNode();
}

void TestBTree() 
{
	BTree btree;

	btree.InsertNode(10);
	btree.InsertNode(5);
	btree.InsertNode(1);
	btree.InsertNode(7);
	btree.InsertNode(9);
	btree.InsertNode(4);
	btree.InsertNode(2);

	cout << "Preorder" << endl;
	btree.Preorder(btree.GetRoot());
	cout << endl;
	cout << "Inorder" << endl;
	btree.Inorder(btree.GetRoot());
	cout << endl;
	cout << "Postorder" << endl;
	btree.Postorder(btree.GetRoot());
}

int main()
{
	//TestLinkedList();
	//TestCircularLinkedList();
	//

	TestBTree();

	return 0;
}
