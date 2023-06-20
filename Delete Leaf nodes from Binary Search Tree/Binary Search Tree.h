#include"tree.h"
class Binary_Search_Tree :public Tree
{
private:
	//for display
	void reverse(node*p){
		if (p != nullptr){
			reverse(p->left);
			cout << p->data << "  " << endl;
			reverse(p->right);
		}
	}
	void DELETINGLEAVES(node*p)
	{
		if (p != nullptr)
		{
			if (p->left != nullptr)
			{
				if (p->left->right == nullptr&&p->left->left == nullptr)
				{
					delete p->left;
					p->left = nullptr;
				}
			}
			if (p->right != nullptr)
			{
				if (p->right->right == nullptr&&p->right->left == nullptr)
				{
					delete p->right;
					p->right = nullptr;
				}
			}
			DELETINGLEAVES(p->left);
			DELETINGLEAVES(p->right);
		}

	}
public:
	Binary_Search_Tree() :Tree(){}
	void insert(int v){
		node*nn = new node;
		nn->data = v;
		nn->right = nullptr;
		nn->left = nullptr;
		if (root == nullptr){
			root = nn;
		}
		else{
			node*temp = root;
			while (1){
				if (v < temp->data){
					if (temp->left == nullptr){
						temp->left = nn;
						break;
					}
					else{
						temp = temp->left;
					}
				}
				else{
					if (temp->right == nullptr){
						temp->right = nn;
						break;
					}
					else{
						temp = temp->right;
					}
				}
			}
		}
	}
	bool deleteleaf(){
		if (root == nullptr){
			cout << "tree is empty \n";
			return false;
		}
		else if (root->left == nullptr&&root->right == nullptr){
			cout << "\nno leafs in tree \n";
			return false;
		}
		else{
			DELETINGLEAVES(root);
			cout << "\nleaf node has been deleted \n \n";
			return true;
		}
	}
	void inorder(){
		if (root == nullptr){
			cout << "tree is empty \n";
		}
		else{
			reverse(root);
		}
	}
};