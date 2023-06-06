#include<iostream>
using namespace std;
int Find_LCM(int,int);//function prototype
int main(){
	int x, y;
	cout << "Enter First numbers to find Least Common Multiple (LCM) \n";
	cin >> x;
	cout << "Enter Second numbers to find Least Common Multiple (LCM) \n";
	cin >> y;
	cout << "Least Common Multiple of " << x << " and " << y << " is "<< Find_LCM(x, y);
	cout << "\n";
	return 0;
}
static int multiple = 0;
int Find_LCM(int a, int b){
	multiple += a;
	if (multiple%a == 0 && multiple%b == 0){
		return multiple;
	}
	else{
		Find_LCM(a, b);
	}
}