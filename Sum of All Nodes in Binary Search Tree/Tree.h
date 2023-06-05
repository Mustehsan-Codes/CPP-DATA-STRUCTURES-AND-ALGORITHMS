#include"Node.h"
class Tree
{
protected:
	node*root;
public:
	Tree(){
		root = nullptr;
	}
	virtual void insert_node(int) = 0;
	virtual void in_order_traversal() = 0;
	virtual void  sum_nodes() = 0;
	virtual void in_Reverse(node*) = 0;
	virtual void sum(node*) = 0;
};