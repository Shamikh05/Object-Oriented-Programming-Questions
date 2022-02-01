#include<iostream>
using namespace std;
class ABC{
private:
	int num1, num2;
public:
	void get(int num1, int num2){
		this->num1 = num1;
		this->num2 = num2;
	}
	void display(){
		cout << "Num 1 is : " << num1 << endl << "Num 2 is : " << num2 << endl;
	}
};
int main(){
	ABC a1;
	int n1, n2;
	cout << "Enter the two numbers : ";
	cin >> n1 >> n2;
	a1.get(n1, n2);
	a1.display();
	return 0;
}
