#include<iostream>
using namespace std;
template <class tem>
class My_Array
{
private:
	tem* my_Array;
	int maxSize;
	int currentSize;
public:
	My_Array();
	My_Array(int);
	~My_Array();
	bool empty();
	bool full();
	void addValue(tem);
	tem removeValue();
	void display();
};
template <class tem>
My_Array<tem>::My_Array()//My_Array constructor
{
	my_Array = nullptr;
	maxSize = 0;
	currentSize = 0;
}
template <class tem>
My_Array<tem>::My_Array(int size)//My_Array perameterized constructor
{
	my_Array = new tem[size];
	maxSize = size;
	currentSize = 0;
}
template <class tem>
My_Array<tem>::~My_Array()//My_Array destructor
{
	while (!empty())
	{
		removeValue();
	}
	delete my_Array;
	my_Array = nullptr;
}
//My_Array functions
template <class tem>
bool My_Array<tem>::empty()
{
	if (currentSize == 0)
	{
		return true;
	}
	return false;
}
template <class tem>
bool My_Array<tem>::full()
{
	if (currentSize == maxSize)
	{
		return true;
	}
	return false;
}
template <class tem>
void My_Array<tem>::addValue(tem value)
{
	if (!full())
	{
		my_Array[currentSize] = value;
		currentSize++;
	}
	else{
		cout << "Array is full \n";
	}
}
template <class tem>
tem My_Array<tem>::removeValue()
{
	if (!empty())
	{
		currentSize--;
		return my_Array[currentSize];
	}
	else
	{
		cout << "Array is empty\n";
	}
}
template <class tem>
void My_Array<tem>::display()
{
	if (!empty())
	{
		for (int i = 0; i < currentSize; i++)
		{
			cout << my_Array[i] << " ";
		}
		cout << endl;
	}
	else {
		cout << "Array is empty \n";
	}
}
