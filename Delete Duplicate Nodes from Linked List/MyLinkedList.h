#include"LinkedList.h"
class MyLinkedList :public LinkedList
{
public:
	void InsertNode(int);
	void PrintList();
	void DeleteDuplicates();
};
void MyLinkedList::InsertNode(int value){
	Node*NewNode = new Node;
	NewNode->data = value;
	NewNode->next = nullptr;
	if (head == nullptr&&tail == nullptr){
		head = NewNode;
		tail = NewNode;
	}
	else{
		tail->next = NewNode;
		tail = NewNode;
	}
}
void MyLinkedList::PrintList(){
	if (head == nullptr&&tail == nullptr){
		cout << "Linked List is Empty \n";
		return;
	}
	else{
		Node*temp = head;
		cout << "Your Linked List is  \n";
		while (1){
			cout << temp->data << "  " << endl;
			temp = temp->next;
			if (temp == nullptr){
				break;
			}
		}
		cout << endl;
	}
}
void MyLinkedList::DeleteDuplicates(){
	if (head == nullptr&&tail == nullptr){
		cout << "Linked List is Empty \n";
		return;
	}
	else if (head == tail){
		cout << "Single Node Duplicate Node not possible \n";
		return;
	}
	else{
		int count = 0;
		Node*t1 = head;
		Node*t2 = head;
		while (1){
			while (1){
				if (t1->data == t2->next->data){
					Node*t3 = t2->next;
					t2->next = t3->next;
					delete t3;
					t3 = nullptr;
					count++;
				}
				else{
					t2 = t2->next;
				}
				if (t2->next == nullptr){
					break;
				}
			}
			if (t1->next == nullptr){
				break;
			}
			else{
				t1 = t1->next;
				t2 = t1;
			}
		}
		if (count > 0){
			cout << "Duplicate Nodes have been removed from Linked List\n";
			return;
		}
		else{
			cout << "There is no Duplicate Node in your Linked List \n";
			return;
		}
	}

}