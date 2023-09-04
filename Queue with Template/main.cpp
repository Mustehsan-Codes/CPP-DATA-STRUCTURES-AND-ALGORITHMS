#include"queue.h"
int main()
{
	int size = 0;
	cout << "Enter the size of your Queue \n";
	cin >> size;
	Queue<int> queue1(size);
	int option = 0;
	while (1)
	{
		cout << "Press 1 to enqueue into Queue \n";
		cout << "Press 2 to dequeue from Queue \n";
		cout << "Press 3 to check Queue is empty or not  \n";
		cout << "Press 4 to check Queue is full or not  \n";
		cout << "Press 5 to display tack \n";
		cout << "Press 6 to exit \n";
		cin >> option;
		if (option == 1)
		{
			if (!queue1.full())
			{
				int value = 0;
				cout << "Enter value to enqueue into Queue \n";
				cin >> value;
				queue1.enqueue(value);
			}
			else{
				cout << "Queue is full \n";
			}
		}
		else if (option == 2)
		{
			if (!queue1.empty())
			{
				cout << "The value dequeueed from Queue is : " << queue1.dequeue() << endl;
			}
			else {
				cout << "Queue is empty \n";
			}
		}
		else if (option == 3)
		{
			if (queue1.empty())
			{
				cout << "Queue is empty \n";
			}
			else{
				cout << "Queue is not empty \n";
			}
		}
		else if (option == 4)
		{
			if (queue1.full())
			{
				cout << "Queue is full \n";
			}
			else{
				cout << "Queue is not full \n";
			}
		}
		else if (option == 5)
		{
			queue1.display();
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