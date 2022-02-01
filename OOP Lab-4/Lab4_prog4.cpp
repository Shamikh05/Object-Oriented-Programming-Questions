#include<iostream>
using namespace std;
class COMPLEX{
private:
	float real, img;
public:
	void getdata(){
		cin >> real >> img;
	}
	void display(){
		cout << real << " + i" << img;
	}
	friend void sumcomp(COMPLEX c1, COMPLEX c2);
};
void sumcomp(COMPLEX c1, COMPLEX c2){
	COMPLEX c3;
	c3.real = c1.real + c2.real;
	c3.img = c1.img + c2.img;
	c3.display();
}
int main(){
	COMPLEX c1, c2;
	cout << "Enter real and imaginary parts of first complex no. : ";
	c1.getdata();
	cout << "Enter real and imaginary parts of second complex no. : ";
	c2.getdata();
	sumcomp(c1, c2);
	return 0;
}
