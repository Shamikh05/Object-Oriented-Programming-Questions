#include<iostream>
using namespace std;
class CIRCLE{
protected:
	int r;
public:
	CIRCLE(){
		r = 0;
	}
	void getr(){
		cin >> r;
	}
};
class RECTANGLE : public CIRCLE{
protected:
	int l, b;
public:
	RECTANGLE(){
		l = 0;
		b = 0;
	}
	void getb(){
		cin >> b;
	}
	void circlearea(){
		cout << "Area of circle is : " << 3.14*r*r << endl;
	}
	void rectarea(){
		l = r;
		cout << "Area of Rectangle is : " << l*b << endl;
	}
};
int main(){
	RECTANGLE r1;
	cout << "Enter radius of the circle : ";
	r1.getr();
	cout << "Enter breadth of the rectangle : ";
	r1.getb();
	r1.circlearea();
	r1.rectarea();
	return 0;
}
