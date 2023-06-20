#include"BST.h"
int main(){
	Binary_Search_Tree bst;
	char check = {'\0'};
	int n = 0;
	while (1){
		cout << "******************************ASSLAM U ALIKUM!*********************************\n";
		cout << "********************YOU ARE WORKING WITH BINARY SEARCH TREE********************\n\n";
		cout << "PRESS 1 TO INSERT ANY NODE IN BINARY SEARCH TREE \n";
		cout << "PRESS 2 TO DELETE ANY NODE FROM BINARY SEARCH TREE \n";
		cout << "PRESS 3 TO SEARCH ANY NODE COUNT IN BINARY SEARCH TREE \n";
		cout << "PRESS 4 TO IN ORDER TRAVERSE OF BINARY SEARCH TREE \n";
		cout << "PRESS 5 TO PRE ORDER TRAVERSE OF BINARY SEARCH TREE \n";
		cout << "PRESS 6 TO post ORDER TRAVERSE OF BINARY SEARCH TREE \n";
		cout << "PRESS 7 TO SEARCH A VALUE AND FIND LEVELS AND COMPARISONS TO SEARCH GIVEN VALUE \n";
		cout << "PRESS 8 TO EXIT PROGRAM \n";
		cin >> n;
		if (n == 1){
			int value;
			cout << "ENTER A VALUE THAT YOU WANT TO INSERT IN YOUR TREE \n";
			cin >> value;
			bst.insert(value);
		}
		else if (n == 2){
			int value;
			cout << "ENTER A VALUE THAT YOU WANT TO DELETE FROM YOUR TREE \n";
			cin >> value;
			bst.deleteValue(value);
		}
		else if (n == 3){
			int value;
			cout << "ENTER A VALUE YOU WANT TO SEARCH COUNT IN YOUR TREE \n";
			cin >> value;
			cout << "TOTAL COUNT OF  " << value << " is : " << bst.count_node(value) << endl;
		}
		else if (n == 4){
			cout << "YOUR TREE IS \n";
			bst.in_order_traverse();
		}
		else if (n == 5){
			cout << "YOUR TREE IS \n";
			bst.pre_order_traverse();
		}
		else if (n == 6){
			cout << "YOUR TREE IS \n";
			bst.post_order_traverse();
		}
		else if (n == 7){
			int level = 0, comparison = 0;
			int value;
			cout << "ENTER A VALUE THAT YOU WANT TO SEARCH AND FIND LEVELS AND COMPARISONS \n";
			cin >> value;
			if (bst.searchTree(value, comparison, level) == true){
				cout << "THERE ARE " << level << " LEVELS  AND " << comparison << " Comparisons to search " << value << " IN BINARY SEARCH TREE \n";
			}
			else{

			}
		}
		else if (n == 8){
			cout << "\n********************PROGRAM HAS BEEN TERMINATED********************\n";
			cout << "***************************ALLAH HAFIZ*****************************\n";
			break;
		}
		else{
			cout << "ENTER CORRECT INPUT \a\n";
		}
		cout << "PRESS Y/y IF YOU WANT TO EXCUSTE THIS PROGRAM AGAIN \n";
		cout << "PRESS N/n IF YOU WANT TO TERMINATE(STOP) THIS PROGRAM \n";
		cin >> check;
		if (check == 'Y' || check == 'y'){

		}
		else if (check == 'N' || check == 'n')
		{
			cout << "\n********************PROGRAM HAS BEEN TERMINATED********************\n";
			cout << "***************************ALLAH HAFIZ*****************************\n";
			break;
		}
		else  {
			cout << "INVALID INPUT \a\n";
			break;
		}
	}
	cout << "\n";
	return 0;
}