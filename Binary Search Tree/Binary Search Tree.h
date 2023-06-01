#include"Tree.h"
class Binary_Search_Tree :public Tree
{
	//we dont need to call default constructor of parent class in derived class 
public:
	void Insert_Node(int);
	void In_order_Triversal();
	void Pre_order_Triversal();
	void Post_order_Triversal();
private:
	void InReverse(Node*);
	void PreReverse(Node*);
	void PostReverse(Node*);
};
void Binary_Search_Tree::Insert_Node(int value)
{
	Node*NewNode = new Node;
	NewNode->data = value;
	NewNode->right = nullptr;
	NewNode->left = nullptr;
	if (root == nullptr)
	{
		root = NewNode;
	}
	else{
		Node*temp = root;
		while (1){
			if (value < temp->data)
			{
				if (temp->left == nullptr){
					temp->left = NewNode;
					break;
				}
				else
				{
					temp = temp->left;
				}
			}
			else{
				if (temp->right == nullptr){
					temp->right = NewNode;
					break;
				}
				else
				{
					temp = temp->right;
				}
			}
		}
	}

}
void Binary_Search_Tree::InReverse(Node*p){
	if (p != nullptr){
		InReverse(p->left);
		cout << p->data << endl;
		InReverse(p->right);
	}
}
void Binary_Search_Tree::PreReverse(Node*p)
{
	if (p != nullptr){
		cout << p->data << endl;
		InReverse(p->left);
		InReverse(p->right);
	}
}
void Binary_Search_Tree::PostReverse(Node*p){
	if (p != nullptr){
		InReverse(p->left);
		InReverse(p->right);
		cout << p->data << endl;
	}
}
void Binary_Search_Tree::In_order_Triversal()
{
	if (root == nullptr){
		cout << "Tree is Empty \n";
	}
	else{
		InReverse(root);
	}
}
void Binary_Search_Tree::Pre_order_Triversal()
{
	if (root == nullptr){
		cout << "Tree is Empty \n";
	}
	else{
		PreReverse(root);
	}
}
void Binary_Search_Tree::Post_order_Triversal()
{
	if (root == nullptr){
		cout << "Tree is Empty \n";
	}
	else{
		PostReverse(root);
	}
}