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
	Item i1, *ptr;
	ptr = &i1;
	cout << "Enter the item number and its price in Rs : ";
	ptr->input();
	cout << "By normal object i1 :" << endl << endl;
	i1.display();
	cout << endl << "By pointer variable ptr :" << endl << endl;
	ptr->display();
	return 0;
}
