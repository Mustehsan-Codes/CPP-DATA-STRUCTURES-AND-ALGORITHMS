#include<iostream>
using namespace std;
int factorial(int);//function prototype
int main(){
	int n;
	cout << "Enter a number to find factorial of a number \n";
	cin >> n;
	cout << "Factorial of " << n << "! is " << factorial(n);
	cout << "\n";
	return 0;
}
int factorial(int n){
	if (n == 0){
		return 1;
	}
	else{
		return n*factorial(n - 1);
	}
}