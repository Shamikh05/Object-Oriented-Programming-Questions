#include<iostream>
using namespace std;
class num2; //Forward declaration
class num1{
private:
	int n1;
public:
	void input1(){
		cin >> n1;
	}
	friend void compare(num1 a, num2 b);
};
class num2{
private:
	int n2;
public:
	void input2(){
		cin >> n2;
	}
	friend void compare(num1 a, num2 b);
};
void compare(num1 a, num2 b){
	if(a.n1 > b.n2){
		cout << a.n1 << " is greater than " << b.n2 << endl;
	}
	else if(a.n1 < b.n2){
		cout << b.n2 << " is greater than " << a.n1 << endl;
	}
	else
		cout << "Both are equal." << endl;
}
int main(){
	num1 a;
	num2 b;
	cout << "Enter the first number : ";
	a.input1();
	cout << "Enter the second number : ";
	b.input2();
	compare(a, b);
	return 0;
}
