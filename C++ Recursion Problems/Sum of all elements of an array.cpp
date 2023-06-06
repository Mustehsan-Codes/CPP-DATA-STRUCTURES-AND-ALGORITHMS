#include<iostream>
using namespace std;
int sum_of_array(int arr[], int);
int main(){
	int size;
	cout << "Enter size of your array \n";
	cin >> size;
	int*arr = new int[size];
	for (int i = 0; i < size; i++){
		cin >> arr[i];
	}
	cout << "Your array is \n";
	for (int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << "\n Sum of all the values of your array is : " << sum_of_array(arr, size);
	cout << "\n";
	return 0;
}
int sum = 0;
int sum_of_array(int* arr, int size)
{
	if (size == 0)
	{
		return 0;
	}
	else{
		sum = sum + arr[size-1];
		sum_of_array(arr,size-1);
		return sum;
	}
}