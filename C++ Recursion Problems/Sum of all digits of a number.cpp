#include<iostream>
using namespace std;
int Sum_of_Digits_of_Number(int);//function prototype
int main(){
	int x;
	cout << "Enter a number to find sum of digits of that number  \n";
	cin >> x;
	cout << "Sum of all the digits of  " << x << " is " << Sum_of_Digits_of_Number(x);
	cout << "\n";
	return 0;
}
 int sum = 0;
int Sum_of_Digits_of_Number(int n){
	if (n == 0){
		return 0;
	}
	else{
		sum += n % 10;
		Sum_of_Digits_of_Number(n / 10);
		return sum;
	}


}