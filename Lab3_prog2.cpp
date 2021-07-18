#include<iostream>
using namespace std;
class bill{
private:
	string code,name;
	int price;
	int quantity;
public:
	void input(){
		cin >> code >> name >> price >> quantity;
	}
	int final_bill(){
		int sum;
		sum = sum + (quantity*price);
		return sum;
	}
	void display(){
		cout << code << "\t" << name << "\t" << price << "\t" << quantity << "\t\t" << (quantity*price) << endl;
	}
};
int main(){
	int result;
	bill b[10];
	cout << "Enter Code, Name, Price and quantity of the item :\n";
	for(int i=0;i<10;i++)
		b[i].input();
	cout << "Sl. no.\tCode\tName\tPrice\tQuantity\tTotal\n\n";
	for(int i=0;i<10;i++){
		cout << i+1 << ".\t";
		b[i].display();
	}
	for(int i=0;i<10;i++){
		result = b[i].final_bill();
	}
	cout << "\t\t\t\t\t\tTotal = " << result;
	return 0;
}
