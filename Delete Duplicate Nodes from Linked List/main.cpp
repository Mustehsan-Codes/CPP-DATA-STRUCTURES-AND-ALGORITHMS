#include"MyLinkedList.h"
int main(){
	MyLinkedList ml;
	ml.InsertNode(10);
	ml.InsertNode(10);
	ml.InsertNode(20);
	ml.InsertNode(20);
	ml.InsertNode(30);
	ml.InsertNode(30);
	ml.InsertNode(40);
	ml.InsertNode(40);
	ml.InsertNode(50);
	ml.InsertNode(50);
	cout << "Linked List before removing duplicate nodes\n";
	ml.PrintList();
	ml.DeleteDuplicates();
	ml.PrintList();
	cout << "\n";
	return 0;
}