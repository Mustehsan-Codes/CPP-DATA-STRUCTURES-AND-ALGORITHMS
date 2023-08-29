#include"array.h"
int main()
{
	int size = 0;
	cout << "Enter the size of your array \n";
	cin >> size;
	My_Array<int> array1(size);
	int option = 0;
	while (1)
	{
		cout << "Press 1 to addValue into array \n";
		cout << "Press 2 to removeValue from array \n";
		cout << "Press 3 to check array is empty or not  \n";
		cout << "Press 4 to check array is full or not  \n";
		cout << "Press 5 to display array \n";
		cout << "Press 6 to exit \n";
		cin >> option;
		if (option == 1)
		{
			if (!array1.full())
			{
				int value = 0;
				cout << "Enter value to addValue into array \n";
				cin >> value;
				array1.addValue(value);
			}
			else{
				cout << "Array is full \n";
			}
		}
		else if (option == 2)
		{
			if (!array1.empty())
			{
				cout << "The value removed from array is : " << array1.removeValue() << endl;
			}
			else {
				cout << "Array is empty \n";
			}
		}
		else if (option == 3)
		{
			if (array1.empty())
			{
				cout << "Array is empty \n";
			}
			else{
				cout << "Array is not empty \n";
			}
		}
		else if (option == 4)
		{
			if (array1.full())
			{
				cout << "Array is full \n";
			}
			else{
				cout << "Array is not full \n";
			}
		}
		else if (option == 5)
		{
			array1.display();
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