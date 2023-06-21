#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
	//first perameter is the data type for key 
	//second perameter is the data type for value 
	unordered_map<int, int> umap;
	//insertion in Hash Table when key is of type int and value is of type int 
	umap[1] = 10;
	umap[2] = 20;
	umap[3] = 30;
	umap[4] = 40;
	umap[5] = 50;
	umap[6] = 60;
	//display hash table
	for (auto i : umap){
		cout << "KEY : " << i.first << "  " << "VALUE  : " << i.second << endl;
	}
	//searching in hash table 
	int key;
	cout << "ENTER A KEY WHO'S VALUE YOU WANT TO SEARCH \n";
	cin >> key;
	if (umap.find(key) != umap.end()){
		cout << "VALUE FOUND IN HASH TABLE \n";
		cout << "KEY : " << key<< "  " << "VALUE  : " << umap[key] << endl;
	}
	else{
		cout << "VALUE NOT FOUND IN HASH TABLE \n";
	}
	//deletion in hash table 
	int del;
	cout << "ENTER KEY WHO'S VALUE YOU WANT TO DELETE \n";
	cin >> del;
	if (umap.find(del) != umap.end())
	{
		umap.erase(del);
		cout << "VALUE HAS REMOVED FROM HASH TABLE \n";
	}
	else{
		cout << "VALUE NOT FOUND IN HASH TABLE \n";
	}
	cout << "HASH TABLE AFTER REMOVING GIVEN VALUE \n";
	for (auto i : umap){
		cout << "KEY : " << i.first << "  " << "VALUE  : " << i.second << endl;
	}
	system("pause");
	cout << "\n";
	return 0;
}