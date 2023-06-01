#include"Binary Search Tree.h"
int main()
{
	Binary_Search_Tree BST;
	BST.Insert_Node(10);
	BST.Insert_Node(20);
	BST.Insert_Node(5);
	BST.Insert_Node(30);
	BST.Insert_Node(7);
	cout << " Tree In Order Triversal \n";
	BST.In_order_Triversal();
	cout << " \nTree Pre Order Triversal \n";
	BST.Pre_order_Triversal();
	cout << " \nTree Post Order Triversal \n";
	BST.Post_order_Triversal();
	cout << "\n";
	return 0;
}