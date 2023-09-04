#include<iostream>
using namespace std;
template <class tem>
class Queue
{
private:
	tem* myQueue;
	int maxSize;
	int currentSize;
public:
	Queue();
	Queue(int);
	~Queue();
	bool empty();
	bool full();
	void enqueue(tem);
	tem dequeue();
	void display();
};
template <class tem>
Queue<tem>::Queue()//Queue constructor
{
	myQueue = nullptr;
	maxSize = 0;
	currentSize = 0;
}
template <class tem>
Queue<tem>::Queue(int size)//Queue perameterized constructor
{
	myQueue = new tem[size];
	maxSize = size;
	currentSize = 0;
}
template <class tem>
Queue<tem>::~Queue()//Queue destructor
{
	while (!empty())
	{
		dequeue();
	}
	delete myQueue;
	myQueue = nullptr;
}
//Queue functions
template <class tem>
bool Queue<tem>::empty()
{
	if (currentSize == 0)
	{
		return true;
	}
	return false;
}
template <class tem>
bool Queue<tem>::full()
{
	if (currentSize == maxSize)
	{
		return true;
	}
	return false;
}
template <class tem>
void Queue<tem>::enqueue(tem value)
{
	if (!full())
	{
		myQueue[currentSize] = value;
		currentSize++;
	}
	else{
		cout << "Queue is full \n";
	}
}
template <class tem>
tem Queue<tem>::dequeue()
{
	if (!empty())
	{
		tem temp = myQueue[0];
		for (int i = 0; i < currentSize-1; i++)
		{
			myQueue[i] = myQueue[i + 1];
		}
		currentSize--;
		return temp;
	}
	else
	{
		cout << "Queue is empty\n";
	}
}
template <class tem>
void Queue<tem>::display()
{
	if (!empty())
	{
		for (int i = 0; i < currentSize; i++)
		{
			cout << myQueue[i] << " ";
		}
		cout << endl;
	}
	else {
		cout << "Queue is empty \n";
	}
}