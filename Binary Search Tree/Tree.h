#include"Node.h"
class Tree
{
protected:
	Node* root;//root node 
public:
	Tree();
	virtual ~Tree();
	virtual void Insert_Node(int) = 0;//to insert any node in tree
	virtual void In_order_Triversal() = 0;//to display tree in LNR
	virtual void Pre_order_Triversal() = 0;//to display node in NLR
	virtual void Post_order_Triversal() = 0;//to display node in LRN
};
Tree::Tree()
{
	root = nullptr;
}
Tree::~Tree()
{
	delete root;
}