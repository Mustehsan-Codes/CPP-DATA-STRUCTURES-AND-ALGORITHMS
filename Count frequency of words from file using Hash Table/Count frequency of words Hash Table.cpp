#include<iostream>
#include<fstream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
	ifstream fin;
	fin.open("input.txt");
	if (fin.is_open()){
		unordered_map<string, int> umap;
		string temp;
		while (!fin.eof()){
			fin >> temp;
			umap[temp]++;
		}
		cout << "FREQUENCY OF EACH WORD IN GIVEN FILE IS \n";
		cout << "WORDS		:		FREQUENCY			" << endl;
		for (auto i : umap){
			cout << i.first << "                              " << i.second << endl;
		}
	}
	else{
		cout << "FILE NOT FOUND OF GIVEN NAME \n";
	}
	system("pause");
	cout << "\n";
	return 0;
}