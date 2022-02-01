#include<iostream>
using namespace std;
class A{
public:
	virtual void func(){
		cout << "In base class!!" << endl;
	}
};
class B : public A{
public:
	void func(){
		cout << "In derived class!!" << endl;
	}
};
int main(){
	A a1, *ptr;
	B b1;
	a1.func();
	b1.func();
	ptr = &a1;
	ptr->func();
	ptr = &b1;
	ptr->func();
	return 0;
}
