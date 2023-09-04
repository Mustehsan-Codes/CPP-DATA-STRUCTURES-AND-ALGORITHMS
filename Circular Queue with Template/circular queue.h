#include<iostream>
using namespace std;
template <class tem>
class Circular_Queue
{
private:
	tem* myCircular_Queue;
	int maxSize;
	int currentSize;
	int rare, front;
public:
	Circular_Queue();
	Circular_Queue(int);
	~Circular_Queue();
	bool empty();
	bool full();
	void enqueue(tem);
	tem dequeue();
	void display();
};
template <class tem>
Circular_Queue<tem>::Circular_Queue()//Circular_Queue constructor
{
	myCircular_Queue = nullptr;
	maxSize = 0;
	currentSize = 0;
	rare = 0;
	front = 0;
}
template <class tem>
Circular_Queue<tem>::Circular_Queue(int size)//Circular_Queue perameterized constructor
{
	myCircular_Queue = new tem[size];
	maxSize = size;
	currentSize = 0;
	rare = 0;
	front = 0;
}
template <class tem>
Circular_Queue<tem>::~Circular_Queue()//Circular_Queue destructor
{
	while (!empty())
	{
		dequeue();
	}
	delete myCircular_Queue;
	myCircular_Queue = nullptr;
}
//Circular_Queue functions
template <class tem>
bool Circular_Queue<tem>::empty()
{
	if (currentSize == 0)
	{
		return true;
	}
	return false;
}
template <class tem>
bool Circular_Queue<tem>::full()
{
	if (currentSize == maxSize)
	{
		return true;
	}
	return false;
}
template <class tem>
void Circular_Queue<tem>::enqueue(tem value)
{
	if (!full())
	{
		myCircular_Queue[rare % maxSize] = value;
		rare++;
		currentSize++;
	}
	else{
		cout << "Circular_Queue is full \n";
	}
}
template <class tem>
tem Circular_Queue<tem>::dequeue()
{
	if (!empty())
	{
		currentSize--;
		tem temp = myCircular_Queue[front % maxSize];
		front++;
		return temp;
	}
	else
	{
		cout << "Circular_Queue is empty\n";
	}
}
template <class tem>
void Circular_Queue<tem>::display()
{
	if (!empty())
	{
		for (int i = front; i < rare; i++)
		{
			cout << myCircular_Queue[i % maxSize] << " ";
		}
		cout << endl;
	}
	else {
		cout << "Circular_Queue is empty \n";
	}
}