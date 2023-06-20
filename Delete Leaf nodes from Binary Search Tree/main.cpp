#include"Binary Search Tree.h"
int main(){
	Binary_Search_Tree BST;
	cout << "your tree is \n\n";
	BST.insert(10);
	BST.insert(20);
	BST.insert(25);
	BST.insert(15);
	BST.insert(8);
	BST.insert(9);
	BST.insert(7);
	BST.inorder();
	BST.deleteleaf();
	BST.inorder();
	return 0;
	cout << "\n";
}