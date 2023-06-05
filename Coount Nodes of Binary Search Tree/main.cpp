#include"BST.h"
int main(){
	MyTree mt;
	mt.insert_node(100);
	mt.insert_node(150);
	mt.insert_node(200);
	mt.insert_node(500);
	mt.insert_node(70);
	mt.insert_node(80);
	mt.insert_node(90);
	mt.insert_node(125);
	mt.insert_node(130);
	mt.insert_node(135);
	mt.in_order_traversal();
	mt.count_nodes();
	cout << "\n";
	return 0;
}