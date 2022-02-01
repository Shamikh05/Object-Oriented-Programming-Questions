#include<iostream>
using namespace std;
class A{
private:
	int num1, num2, num3;
public:
	A(){
		num1 = 0;
		num2 = 0;
		num3 = 0;
	}
	void get(){
		cin >> num1 >> num2 >> num3;
	}
	void display(){
		cout << "num1 is : " << num1 << endl << "num2 is : " << num2 << endl << "num3 is : " << num3 << endl << endl;
	}
	void operator -(){
		num1 = -num1;
		num2 = -num2;
		num3 = -num3;
	}
};
int main(){
	A a;
	cout << "Enter the values of 3 numbers : ";
	a.get();
        cout << "Before using operator :\n";
	a.display();
	-a;
	cout << "After using operator :\n";
	a.display();
	return 0;
}
