#include<iostream>
using namespace std;
template <class tem>
class Stack
{
private:
	tem* stack;
	int maxSize;
	int currentSize;
public:
	Stack();
	Stack(int);
	~Stack();
	bool empty();
	bool full();
	void push(tem);
	tem pop();
	void display();
};
template <class tem>
Stack<tem>::Stack()//stack constructor
{
	stack = nullptr;
	maxSize = 0;
	currentSize = 0;
}
template <class tem>
Stack<tem>::Stack(int size)//stack perameterized constructor
{
	stack = new tem[size];
	maxSize = size;
	currentSize = 0;
}
template <class tem>
Stack<tem>::~Stack()//stack destructor
{
	while (!empty())
	{
		pop();
	}
	delete stack;
	stack = nullptr;
}
//stack functions
template <class tem>
bool Stack<tem>::empty()
{
	if (currentSize == 0)
	{
		return true;
	}
	return false;
}
template <class tem>
bool Stack<tem>::full()
{
	if (currentSize == maxSize)
	{
		return true;
	}
	return false;
}
template <class tem>
void Stack<tem>::push(tem value)
{
	if (!full())
	{
		stack[currentSize] = value;
		currentSize++;
	}
	else{
		cout << "Stack is full \n";
	}
}
template <class tem>
tem Stack<tem>::pop()
{
	if (!empty())
	{
		currentSize--;
		return stack[currentSize];
	}
	else
	{
		cout << "Stack is empty\n";
	}
}
template <class tem>
void Stack<tem>::display()
{
	if (!empty())
	{
		for (int i = 0; i < currentSize; i++)
		{
			cout << stack[i] << " ";
		}
		cout << endl;
	}
	else {
		cout << "Stack is empty \n";
	}
}