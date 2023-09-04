#include"circular queue.h"
int main()
{
	int size = 0;
	cout << "Enter the size of your Circular_Queue \n";
	cin >> size;
	Circular_Queue<int> myCircular_Queue1(size);
	int option = 0;
	while (1)
	{
		cout << "Press 1 to enqueue into Circular_Queue \n";
		cout << "Press 2 to dequeue from Circular_Queue \n";
		cout << "Press 3 to check Circular_Queue is empty or not  \n";
		cout << "Press 4 to check Circular_Queue is full or not  \n";
		cout << "Press 5 to display tack \n";
		cout << "Press 6 to exit \n";
		cin >> option;
		if (option == 1)
		{
			if (!myCircular_Queue1.full())
			{
				int value = 0;
				cout << "Enter value to enCircular_Queue into Circular_Queue \n";
				cin >> value;
				myCircular_Queue1.enqueue(value);
			}
			else{
				cout << "Circular_Queue is full \n";
			}
		}
		else if (option == 2)
		{
			if (!myCircular_Queue1.empty())
			{
				cout << "The value deCircular_Queueed from Circular_Queue is : " << myCircular_Queue1.dequeue() << endl;
			}
			else {
				cout << "Circular_Queue is empty \n";
			}
		}
		else if (option == 3)
		{
			if (myCircular_Queue1.empty())
			{
				cout << "Circular_Queue is empty \n";
			}
			else{
				cout << "Circular_Queue is not empty \n";
			}
		}
		else if (option == 4)
		{
			if (myCircular_Queue1.full())
			{
				cout << "Circular_Queue is full \n";
			}
			else{
				cout << "Circular_Queue is not full \n";
			}
		}
		else if (option == 5)
		{
			myCircular_Queue1.display();
		}
		else if (option == 6)
		{
			break;
		}
		else
		{
			cout << "Enter Correct Input\n";
			continue;
		}
		int check;
		cout << "Press 1 to repeat this program \n";
		cout << "Press 2 to stop this program \n";
		cin >> check;
		if (check == 1)
		{
			continue;
		}
		else if (check == 2)
		{
			break;
		}
		else
		{
			cout << "Invalid input \n";
			break;
		}
	}

	cout << "\n";
	return 0;
}