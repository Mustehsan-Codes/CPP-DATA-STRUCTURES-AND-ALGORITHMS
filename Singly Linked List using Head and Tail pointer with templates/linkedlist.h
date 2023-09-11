#include"node.h"
template<class template1>
class Linked_List
{
private:
	node<template1>*head;
	node<template1>*tail;
public:
	Linked_List();
	void insert_At_Head(template1);
	void insert_At_Tail(template1);
	template1 delete_from_Head();
	template1 delete_from_Tail();
	void display();

};
template<class template1>
Linked_List<template1>::Linked_List()
{
	head = nullptr;
	tail = nullptr;
}
template<class template1>
void Linked_List<template1>::insert_At_Head(template1 value)
{
	node<template1>*newNode;
	newNode = new node<template1>;
	newNode->data = value;
	newNode->next = nullptr;
	if (head == nullptr && tail == nullptr)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		newNode->next = head;
		head = newNode;
	}
}
template<class template1>
void Linked_List<template1>::insert_At_Tail(template1 value)
{
	node<template1>*newNode;
	newNode = new node<template1>;
	newNode->data = value;
	newNode->next = nullptr;
	if (head == nullptr && tail == nullptr)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		tail->next = newNode;
		tail = newNode;
	}
}
template<class template1>
template1 Linked_List<template1>::delete_from_Head()
{
	if (head == nullptr && tail == nullptr)
	{
		cout << "LinkedList is empty returning 0\n";
		return NULL;
	}
	else if (head == tail)
	{
		template1 return_value = head->data;
		delete head;
		head = nullptr;
		tail = nullptr;
		return return_value;
	}
	else
	{
		template1 return_value = head->data;
		node<template1>*temp = head;
		head = head->next;
		delete temp;
		temp = nullptr;
		return return_value;
	}
}
template<class template1>
template1 Linked_List<template1>::delete_from_Tail()
{
	if (head == nullptr && tail == nullptr)
	{
		cout << "LinkedList is empty returning 0\n";
		return NULL;
	}
	else if (head == tail)
	{
		template1 return_value = head->data;
		delete head;
		head = nullptr;
		tail = nullptr;
		return return_value;
	}
	else
	{
		node<template1>*temp1 = head;
		node<template1>*temp2 = tail;
		template1 return_value = tail->data;
		while (1)
		{
			if (temp1->next == tail)
			{
				break;
			}
			else
			{
				temp1 = temp1->next;
			}
		}
		tail = temp1;
		delete temp2;
		temp2 = nullptr;
		tail->next = nullptr;
		return return_value;
	}
}
template<class template1>
void Linked_List<template1>::display()
{
	if (head == nullptr && tail == nullptr)
	{
		cout << "LinkedList is empty \n";
		return;
	}
	else
	{
		cout << "Your LinkedList is \n";
		node<template1>*temp = head;
		while (1)
		{
			cout << temp->data << "  ";
			temp = temp->next;
			if (temp == nullptr)
			{
				break;
			}
		}
	}
}