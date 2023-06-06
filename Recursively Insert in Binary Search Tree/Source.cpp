#include"tree.h"
int main(){
	Binary_Search_Tree t;
	t.Recursive_insert(10);
	t.Recursive_insert(20);
	t.Recursive_insert(30);
	t.Recursive_insert(40);
	t.Recursive_insert(50);
	t.Recursive_insert(1);
	t.in_order_traversal();
	cout << "\n";
	return 0;
}