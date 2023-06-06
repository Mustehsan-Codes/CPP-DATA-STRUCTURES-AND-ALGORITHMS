#include<iostream>
using namespace std;
int sum(int);//function prototype
int main(){
	int n;
	cout << "Enter a number to find sum till that number  \n";
	cin >> n;
	cout << "Sum of all numbers from 1 to " << n << " is " << sum(n);
	cout << "\n";
	return 0;
}
int sum(int n){
	if (n == 0){
		return 0;
	}
	else{
		return n+sum(n - 1);
	}
}