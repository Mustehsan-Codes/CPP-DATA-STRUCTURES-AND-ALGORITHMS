#include"Node.h"
class Binary_Search_Tree
{
private:
	Node*root;
public:
	//default constructor
	Binary_Search_Tree(){
		root = nullptr;
	}
	//destructor
	~Binary_Search_Tree(){
		cout << "\n DESTRUCTOR OF BINARY SEARCH TREE HAS CALLED \n";
		cout << "ALL NODES OF BINARY SEARCH TREE ARE DELETING TO FREE UP MEMORY AND TO AVOID MEMORY LEAKAGE \n";
		while (root != nullptr){
			deleteValue(root->getdata());
		}
	}
	int count_before_insert(int value){
			Node*temp = root;
			while (1){
				if (value == temp->getdata()){
					int cnt = temp->getcount();
					temp->setcount(temp->getcount() + 1);
					return cnt;
				}
				else if (value < temp->getdata()){
					temp = temp->getleft();
				}
				else{
					temp = temp->getright();
				}
				if (temp == nullptr){
					break;
				}
			}return 0;
		
	}
	//insert function
	void insert(int value){
		if (root == nullptr){
			Node*newNode = new Node;
			newNode->setdata(value);
			newNode->setright(nullptr);
			newNode->setleft(nullptr);
			newNode->setcount(0);
			root = newNode;
			newNode->setcount(1);
		}
		else{
			if (count_before_insert(value) == 0){
				Node*newNode = new Node;
				newNode->setdata(value);
				newNode->setright(nullptr);
				newNode->setleft(nullptr);
				newNode->setcount(0);
				Node*temp = root;
				while (1)
				{
					if (value < temp->getdata()){
						if (temp->getleft() == nullptr){
							temp->setleft(newNode);
							newNode->setcount(1);
							break;
						}
						else{
							temp = temp->getleft();
						}
					}
					else{
						if (temp->getright() == nullptr){
							temp->setright(newNode);
							newNode->setcount(1);
							break;
						}
						else{
							temp = temp->getright();
						}
					}
				}
			}
			else {
				cout << "THE VALUE " << value << " IS COMING DUPLICATE WE CANNOT GET IT \n";
				return;
			}
			
		}
	}
	//delete value
	bool deleteValue(int value){
		//when tree is empty 
		if (root == nullptr){
			cout << "TREE IS EMPTY \n";
			return false;
		}//when root has no child and value equal to root 
		else if (root->getleft() == nullptr&&root->getright() == nullptr){
			if (root->getdata() == value){
				if (root->getcount() > 1){
					root->setcount(root->getcount() - 1);
					cout << "VALUE'S COUNT HAS BEEN DECREMENTED BY 1 \n";
					return true;
				}
				else
				{
					delete root;
					root = nullptr;
					cout << "VALUE'S COUNT HAS BEEN DECREMENTED BY 1 \n";
					return true;
				}
			}
			cout << "VALUE NOT FOUND IN TREE \n";
			return false;
		}//when root's left child not wxist and right child exist and value = root
		else if (root->getleft() == nullptr&&root->getright() != nullptr && value == root->getdata()){
			if (root->getcount() > 1)
			{
				root->setcount(root->getcount() - 1);
				cout << "VALUE'S COUNT HAS BEEN DECREMENTED BY 1 \n";
				return true;
			}
			else
			{
				Node*temp = root;
				root = root->getright();
				delete temp;
				temp = nullptr;
				cout << "YOUR VALUE HAS BEEN DELETED FROM TREE \n";
				return true;
			}
		}//root has left children 
		else if (root->getleft() != nullptr&&root->getright() == nullptr && value == root->getdata()){
			if (root->getcount() > 1){
					root->setcount(root->getcount() - 1);
					cout << "VALUE'S COUNT HAS BEEN DECREMENTED BY 1 \n";
					return true;
			}
			else{
					Node*temp = root;
					root = root->getleft();
					delete temp;
					temp = nullptr;
					cout << "YOUR VALUE HAS BEEN DELETED FROM TREE \n";
					return true;
				}

		}//root hase two childrens and equal to value 
		else if (root->getright() != nullptr&& root->getleft() != nullptr&&value == root->getdata()){
			if (root->getcount() > 1){
				root->setcount(root->getcount() - 1);
				cout << "VALUE'S COUNT HAS BEEN DECREMENTED BY 1 \n";
				return true;
			}
			Node*d = root;
			Node*p = root;
			Node*n = root;
			n = n->getright();
			if (n->getleft() == nullptr){
				d->setdata (n->getdata());
				p->setright ( n->getright());
				delete n;
				n = nullptr;
				cout << "YOUR VALUE HAS BEEN DELETED FROM TREE \n";
				return true;
			}
			else{
				while (1){
					p = n;
					n = n->getleft();
					if (n->getleft() == nullptr){
						break;
					}
				}
				d->setdata( n->getdata());
				p->setleft( n->getright());
				delete n;
				n = nullptr;
				cout << "YOUR VALUE HAS BEEN DELETED FROM TREE \n";
				return true;
			}

		}
		else{
			Node*p = root;
			Node*n = root;
			int count = 0;
			while (1){
				if (value < n->getdata()){
					p = n;
					n = n->getleft();
				}
				else if(value > n->getdata()){
					p = n;
					n = n->getright();
				}
				if (n == nullptr) {
					count++;
					break;
				}
				if (value == n->getdata()){
					break;
				}
			}
			if (count >= 1){
				cout << "VALUE NOT FOUND IN TREE \n";
				return false;
			}
			//infinite loop will break at the time when n = value 
			//two child case 
			if (n->getleft()!= nullptr&&n->getright() != nullptr){
				Node*d = n;
				p = n;
				n = n->getright();
				if (n->getleft() == nullptr){
					d->setdata(n->getdata());
					p->setright( n->getright());
					delete n;
					n = nullptr;
					return true;
				}
				else{
					while (1){
						p = n;
						n = n->getleft();
						if (n->getleft() == nullptr){
							break;
						}
					}
					d->setdata( n->getdata());
					value = n->getdata();

				}

			} 
			//LEAF NODE CASE
			if (n->getleft() == nullptr&&n->getright() == nullptr)
			{
				if (value < p->getdata()){
					if (n->getcount()>1){
						n->setcount(n->getcount() - 1);
						cout << "VALUE'S COUNT HAS BEEN DECREMENTED BY 1 \n";
						return true;
					}
					delete n;
					p->setleft(nullptr) ;
					n = nullptr;
					cout << "YOUR VALUE HAS BEEN DELETED FROM TREE \n";
					return true;
				}
				else{
					if (n->getcount()>1){
						n->setcount(n->getcount() - 1);
						cout << "VALUE'S COUNT HAS BEEN DECREMENTED BY 1 \n";
						return true;
					}
					p->setright( nullptr);
					delete n;
					n = nullptr;
					cout << "YOUR VALUE HAS BEEN DELETED FROM TREE \n";
					return true;
				}
			}
			//SINGLE CHILD CASE left child not exist but right child exist 
			else if (n->getleft() == nullptr&&n->getright() != nullptr){
				if (value < p->getdata()){
					if (n->getcount()>1){
						n->setcount(n->getcount() - 1);
						cout << "VALUE'S COUNT HAS BEEN DECREMENTED BY 1 \n";
						return true;
					}
					p->setleft(n->getright());
					delete n;
					n = nullptr;
					cout << "YOUR VALUE HAS BEEN DELETED FROM TREE \n";
					return true;
				}
				else{
					if (n->getcount()>1){
						n->setcount(n->getcount() - 1);
						cout << "VALUE'S COUNT HAS BEEN DECREMENTED BY 1 \n";
						return true;
					}
					p->setright(n->getright());
					delete n;
					n = nullptr;
					cout << "YOUR VALUE HAS BEEN DELETED FROM TREE \n";
					return true;
				}
			}
			//SINGLE CHILD CASE left child  exist but right child not exist 
			else if (n->getleft() != nullptr&&n->getright() == nullptr){
				if (value < p->getdata()){
					if (n->getcount()>1){
						n->setcount(n->getcount() - 1);
						cout << "VALUE'S COUNT HAS BEEN DECREMENTED BY 1 \n";
						return true;
					}
					p->setleft( n->getleft());
					delete n;
					n = nullptr;
					cout << "YOUR VALUE HAS BEEN DELETED FROM TREE \n";
					return true;
				}
				else{
					if (n->getcount()>1){
						n->setcount(n->getcount() - 1);
						cout << "VALUE'S COUNT HAS BEEN DECREMENTED BY 1 \n";
						return true;
					}
					p->setright( n->getleft());
					delete n;
					n = nullptr;
					cout << "YOUR VALUE HAS BEEN DELETED FROM TREE \n";
					return true;
				}
			}
			
		}
	}
	//trverse functions
	//in order traverse
	void in_order_traverse(){
		if (root == nullptr){
			cout << "TREE IS EMPTY \n";
			return;
		}
		else{
			in_reverse(root);
		}
	}
	//pre order traverse
	void pre_order_traverse(){
		if (root == nullptr){
			cout << "TREE IS EMPTY \n";
			return;
		}
		else{
			pre_reverse(root);
		}
	}
	//post order traverse
	void post_order_traverse(){
		if (root == nullptr){
			cout << "TREE IS EMPTY \n";
			return;
		}
		else{
			post_reverse(root);
		}
	}
	//recursive functions for traversing of tree 
	//in order 
	void in_reverse(Node*p){
		if (p != nullptr){
			in_reverse(p->getleft());
			cout << "\nNode : " << p->getdata() << endl;
			cout << "Count  : " << p->getcount() << endl;
			in_reverse(p->getright());
		}
	}
	//pre order
	void pre_reverse(Node*p){
		if (p != nullptr){
			cout << "\nNode : " << p->getdata() << endl;
			cout << "Count  : " << p->getcount() << endl;
			in_reverse(p->getleft());
			in_reverse(p->getright());
		}
	}
	//post order
	void post_reverse(Node*p){
		if (p != nullptr){
			in_reverse(p->getleft());
			in_reverse(p->getright());
			cout << "\nNode : " << p->getdata() << endl;
			cout << "Count  : " << p->getcount() << endl;
		}
	}
	//count function to count a specific node in tree 
	int count_node(int value){
		if (root == nullptr){
			cout << "TREE IS EMPTY \n";
			return NULL;
		}
		else{
			Node*temp = root;
			while (1){
				if (value == temp->getdata()){
					return temp->getcount();
				}
				else if (value < temp->getdata()){
					temp = temp->getleft();
				}
				else{
					temp = temp->getright();
				}
				if (temp == nullptr){
					break;
					
				}
			}return 0;
		}
	}
	//searchTree function
	bool searchTree(int value, int& comparison, int& level){
		if (root == nullptr){
			cout << "TREE IS EMPTY \n";
			return false;
		}
		else {
			Node*temp = root;
			while (1){
				if (value == temp->getdata()){
					comparison++;
					return true;
				}
				if (value < temp->getdata()){
					temp = temp->getleft();
					level++;
					comparison++;
				}
				else if (value>temp->getdata()){
					temp = temp->getright();
					level++;
					comparison++;
				}
			
				if (temp == nullptr){
					cout << "VALUE NOT FOUND IN TREE \n";
					break;
				}
			}return false;
		}
	
	}
};


