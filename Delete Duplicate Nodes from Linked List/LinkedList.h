#include"Node.h"
class LinkedList
{
protected:
	Node*head;
	Node*tail;
public:
	LinkedList();
	virtual void InsertNode(int) = 0;
	virtual void PrintList() = 0;
	virtual void DeleteDuplicates() = 0;
};
LinkedList::LinkedList(){
	head = nullptr;
	tail = nullptr;
}