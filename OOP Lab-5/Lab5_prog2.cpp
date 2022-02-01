#include<iostream>
using namespace std;
class complex{
private:
	float real,img;
public:
	complex(){
		real = 0;
		img = 0;
	}
	complex(int r=0){
		real = r;
		img = r;
	}
	complex(int r=5, int i=10){
		real = r;
		img = i;
	}
	void getcomp(){
		cin >> real >> img;
	}
	void display(){
		cout << "Sum = " << real << " + i" << img;
	}
	void addcomp(complex c1, complex c2);
};
void complex::addcomp(complex c1, complex c2){
	real = c1.real + c2.real;
	img = c1.img + c2.img;
}
int main(){
	complex c1(1,2), c2(3,4), temp(0,0);
	cout << "Enter real and imaginary parts of the 1st complex no. : ";
	c1.getcomp();
	cout << "Enter real and imaginary parts of the 2nd complex no. : ";
	c2.getcomp();
	temp.addcomp(c1, c2);
	temp.display();
	return 0;
}
