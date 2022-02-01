#include<iostream>
using namespace std;
class ABC{
protected:
	int x;
public:
	void get1(){
		cin >> x;
	}
	void display(){
		cout << "x is " << x << endl;
	}
};
class BBC : public ABC{
protected:
	int y;
public:
	void get2(){
		cin >> y;
	}
	void display(){
		cout << "y is " << y << endl;
	}
};
class KBC : public ABC{
protected:
	int z;
public:
	void get3(){
		cin >> z;
	}
	void display(){
		cout << "z is " << z << endl;
	}
};
int main(){
	ABC a, *ptr;
	BBC b;
	KBC c;
	cout << "Enter the values of x, y and z : ";
	a.get1();
	b.get2();
	c.get3();
	ptr = &a;
	ptr->display();
	ptr = &b;
	ptr->display();
	ptr = &c;
	ptr->display();
	return 0;
}
