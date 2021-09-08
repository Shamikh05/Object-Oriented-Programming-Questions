#include<iostream>
using namespace std;
class Item{
private:
	int itemnum, price;
public:
	Item(){
		itemnum = 0;
		price = 0;
	}
	void input(){
		cin >> itemnum >> price;
	}
	void display(){
		cout << "Item no. -> " << itemnum << endl << "Price -> " << price << endl;
	}
};
int main(){
	int n;
	cout << "Enter the number of items : ";
	cin >> n;
	Item *ptr;
	ptr = (Item*)malloc(n*sizeof(Item));
	for(int i=0;i<n;i++){
		cout << "Enter the item number and its price :\n";
		(ptr + i)->input();
	}
	for(int i=0;i<n;i++){
		cout << "Details of item "<< i+1 << " are :" << endl;
		(ptr + i)->display();
	}
	return 0;
}
