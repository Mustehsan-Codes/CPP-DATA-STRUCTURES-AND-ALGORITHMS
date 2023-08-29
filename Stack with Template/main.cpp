#include"stack.h"
int main()
{
	int size = 0;
	cout << "Enter the size of your stack \n";
	cin >> size;
	Stack<int> stk(size);
	int option = 0;
	while (1)
	{
		cout << "Press 1 to push into stack \n";
		cout << "Press 2 to pop from stack \n";
		cout << "Press 3 to check stack is empty or not  \n";
		cout << "Press 4 to check stack is full or not  \n";
		cout << "Press 5 to display tack \n";
		cout << "Press 6 to exit \n";
		cin >> option;
		if (option == 1)
		{
			if (!stk.full())
			{
				int value = 0;
				cout << "Enter value to push into stack \n";
				cin >> value;
				stk.push(value);
			}
			else{
				cout << "Stack is full \n";
			}
		}
		else if (option == 2)
		{
			if (!stk.empty())
			{
				cout << "The value poped from stack is : " << stk.pop() << endl;
			}
			else {
				cout << "Stack is empty \n";
			}
		}
		else if (option == 3)
		{
			if (stk.empty())
			{
				cout << "Stack is empty \n";
			}
			else{
				cout << "Stack is not empty \n";
			}
		}
		else if (option == 4)
		{
			if (stk.full())
			{
				cout << "Stack is full \n";
			}
			else{
				cout << "Stack is not full \n";
			}
		}
		else if (option == 5)
		{
			stk.display();
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