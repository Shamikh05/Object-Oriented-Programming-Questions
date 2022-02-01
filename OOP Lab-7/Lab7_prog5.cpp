#include<iostream>
using namespace std;
class complex{
private:
	float real, img;
public:
	complex(){
		real = 0;
		img = 0;
	}
	void getdata(){
		cin >> real >> img;
	}
	void display(){
		cout << real << " + " << "i " << img << endl;
	}
	complex operator +(complex &t){
		complex temp1;
		temp1.real = real + t.real;
		temp1.img = img + t.img;
		return temp1;
	}
	complex operator *(complex &t){
		complex temp2;
		temp2.real = ((real * t.real) - (img * t.img));
		temp2.img = ((real * t.img) + (t.real * img));
		return temp2;
	}
};
int main(){
	complex c1, c2, c3, c4;
	cout << "Enter the real and imaginary parts of 1st complex number :" << endl;
	c1.getdata();
	cout << "Enter the real and imaginary parts of 2nd complex number :" << endl;
	c2.getdata();
	c3 = c1 + c2;
	c4 = c1 * c2;
	cout << "After addition the complex number is :" << endl;
	c3.display();
	cout << "After mutiplication the complex number is :" << endl;
	c4.display();
	return 0;
}
