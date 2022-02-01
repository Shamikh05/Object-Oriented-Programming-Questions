#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class ABC{
protected:
	int x;
public:
	void get1(){
		cin >> x;
	}
	virtual void display() = 0;
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
	ABC *ptr;
	BBC b;
	KBC c;
	cout << "Enter the values of y and z : ";
	b.get2();
	c.get3();
	ptr = &b;
	ptr->display();
	ptr = &c;
	ptr->display();
	return 0;
}
