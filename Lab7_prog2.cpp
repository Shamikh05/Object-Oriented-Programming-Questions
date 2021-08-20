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
	friend void operator -(A &t);
};
void operator -(A &t){
	t.num1 = -t.num1;
	t.num2 = -t.num2;
	t.num3 = -t.num3;
}
int main(){
	A a;
	cout << "Enter the values of 3 numbers : ";
	a.get();
        cout << "Before using operator :\n";
	a.display();
	operator -(a);
	cout << "After using operator :\n";
	a.display();
	return 0;
}
