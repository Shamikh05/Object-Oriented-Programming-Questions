#include<iostream>
using namespace std;
class polyarea{
private:
	int length, breadth, side;
public:
	void input1(){
		cin >> length >> breadth;
	}
	void input2(){
		cin >> side;
	}
	friend void area(polyarea, polyarea);
};
void area(polyarea p3, polyarea p4){
	cout << "Area of the rectangle is : " << p3.length*p3.breadth << endl;
	cout << "Area of the square is : " << p4.side*p4.side << endl;
}
int main(){
	polyarea p1, p2;
	cout << "Enter length and breadth of the rectangle : ";
	p1.input1();
	cout << "Enter length of side of the square : ";
	p2.input2();
	area(p1, p2);
	return 0;
}
