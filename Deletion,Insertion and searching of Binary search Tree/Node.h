#include<iostream>
using namespace std;
class Node
{
private:
	int data;
	Node*right;
	Node*left;
	int count;
public:
	Node(){
		data = 0;
		right = nullptr;
		left = nullptr;
		count = 0;
	}
	Node(Node &obj){
		setdata(obj.data);
		setright(obj.right);
		setleft(obj.left);
		setcount(obj.count);
	}
	~Node(){
	}
	Node& operator =(Node obj){
		setdata(obj.data);
		setright(obj.right);
		setleft(obj.left);
		setcount(obj.count);

		return *this;
	}
	//setters
	void setdata(int d){
		data = d;
	}
	void setright(Node*r){
		right = r;
	}
	void setleft(Node*l){
		left = l;
	}
	void setcount(int c){
		count = c;
	}
	//getters
	int getdata(){
		return data;
	}
	Node* getright(){
		return right;
	}

	Node*getleft(){
		return left;
	}
	int getcount(){
		return count;
	}
};