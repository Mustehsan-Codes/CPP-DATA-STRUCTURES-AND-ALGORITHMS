#include<iostream>
using namespace std;
void Reverse_String(char*);//function prototype
int main(){
	char str[100] = { '\0' };
	cout << "Enter a string that you want to reverse \n";
	cin.getline(str, 100);
	cout << "The string that you enter is : ";
	cout << str;
	cout << "\n Your string in reverse form is : ";
	Reverse_String(str);
	cout << "\n";
	return 0;
}
void Reverse_String(char* str){
	if (str[0] != '\0'&& str != nullptr){
		Reverse_String(str + 1);
		cout << str[0];
	}
}