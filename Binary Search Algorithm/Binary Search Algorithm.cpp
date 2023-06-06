#include<iostream>
using namespace std;
int Binary_Search(int*,int,int);
int main(){
	int size ;
	cout << "ENTER SIZE OF YOUR ARRAY \n";
	cin >> size;
	int *arr = new int[size];//DYNAMIC ARRAY CREATION
	cout << "ENTER DATA IN YOUR ARRAY \n";
	for (int i = 0; i < size; i++){
		cin >> arr[i];
	}
	cout << "\n YOUR ARRAY IS  : ";
	for (int i = 0; i < size; i++){
		cout << arr[i] << "  ";
	}
	cout << endl;
	int value;
	cout << "ENTER VALUE THAT YOU WANT TO SEARCH FROM ARRAY \n";
	cin >> value;
	cout <<value<<" IS PRESENT AT INDEX "<<Binary_Search(arr, size, value);
	delete[]arr;//ARRAY DELETION TO AVOID MEMORY LEAKAGE
	arr = nullptr;//TO DELETE POINTER 
	cout << "\n";
	return 9;
}
int Binary_Search(int*arr, int size,int value){
	//IT IS MUST TO SORT ARRAY BEFORE BINARY SEARCH
	//SORTING
	for (int i = 0; i < size; i++){
		for (int j = i+1; j < size; j++){
			if (arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	//BINARY SEARCH
	int high = size;
	int low = 0; 
	int mid = 0;
	while (low <= high){
		mid = (high + low) / 2;
		if (value == arr[mid]){
			return mid;
		}
		if (value < arr[mid]){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	cout << "THE NUMBER YOU ENTER IS NOT PRESENT IN ARRAY \n";
	return NULL;
}