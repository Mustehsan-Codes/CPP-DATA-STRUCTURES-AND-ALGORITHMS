#include"Tree.h"
static int Sum = 0;
class MyTree :public Tree
{
public:
	MyTree() :Tree(){

	}
	void insert_node(int value) {
		node*newNode = new node;
		newNode->data = value;
		newNode->right = nullptr;
		newNode->left = nullptr;
		if (root == nullptr){
			root = newNode;
		}
		else{
			node*temp = root;
			while (1){
				if (value < temp->data){
					if (temp->left == nullptr){
						temp->left = newNode;
						break;
					}
					else{
						temp = temp->left;
					}
				}
				else{
					if (temp->right == nullptr){
						temp->right = newNode;
						break;
					}
					else{
						temp = temp->right;
					}
				}
			}
		}
	}
	void in_Reverse(node*p){
		if (p != nullptr){
			in_Reverse(p->left);
			cout << p->data << " " << endl;
			in_Reverse(p->right);
		}
	}
	//TRAVERSALS 
	void in_order_traversal() {
		if (root == nullptr){
			cout << "Tree is empty \n";
		}
		else{
			in_Reverse(root);
		}
	}
	void sum_nodes(){
		if (root == nullptr){
			cout << "Tree is empty \n";
		}
		else{
			sum(root);
		}
		cout << "\n Sum of all nodes of your tree is  "<<Sum<< endl;
	}
	void sum(node*p){
		if (p != nullptr){
			sum(p->left);
			Sum = Sum + p->data;
			sum(p->right);
		}
	}
};