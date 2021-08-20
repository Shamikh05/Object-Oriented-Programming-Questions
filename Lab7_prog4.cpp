#include<iostream>
using namespace std;
class A{
private:
	int i, j;
public:
	A(){
		i = 0;
		j = 0;
	}
	void get(){
		cin >> i >> j;
	}
	void display(){
		cout << "i is : " << i << endl << "j is : " << j << endl;
	}
	friend void operator ++(A &t1);
	friend void operator --(A &t2);
};
void operator ++(A &t1){
	t1.i = t1.i + 1;
}
void operator --(A &t2){
	t2.j = t2.j - 1;
}
int main(){
	A a;
	cout << "Enter the values of 2 numbers : ";
	a.get();
        cout << "Before using ++ and -- operators :\n";
	a.display();
	operator ++(a);
	operator --(a);
	cout << "After using operator ++ and -- operators :\n";
	a.display();
	return 0;
}
