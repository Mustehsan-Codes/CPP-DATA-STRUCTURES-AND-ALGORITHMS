#include"node.h"
class Binary_Search_Tree
{
private:
	node*root;

public:
	Binary_Search_Tree(){
		root = nullptr;
	}
	void redo(node*p, int v){
		if (v < p->data){
			if (p->left == nullptr){
				node*nn = new node;
				nn->right = nullptr;
				nn->left = nullptr;
				nn->data = v;
				p->left = nn;
			}
			else{
				redo(p->left, v);
			}
		}
		else{
			if (p->right == nullptr){
				node*nn = new node;
				nn->right = nullptr;
				nn->left = nullptr;
				nn->data = v;
				p->right = nn;
			}
			else{
				redo(p->right, v);
			}
		}

	}
	void in_order_traversal(){
		if (root == nullptr){
			cout << "empty ";
		}
		else{
			Redoit(root);
		}
	}
	void Redoit(node*p){
		if (p != nullptr){
			Redoit(p->left);
			cout << p->data << "  " << endl;
			Redoit(p->right);
		}
	}
	void Recursive_insert(int v){
		if (root == nullptr){
			node*nn = new node;
			nn->right = nullptr;
			nn->left = nullptr;
			nn->data = v;
			root = nn;
		}
		else{
			node*temp = root;
			redo(temp, v);
		}
	}
};