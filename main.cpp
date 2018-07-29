#include <iostream>
#include "LinkedList.h"

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

	linkedlist.InsertNode(10, 3);

	linkedlist.PrintNode();

	return 0;
}