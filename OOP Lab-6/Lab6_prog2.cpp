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
};
class BOX : public RECTANGLE{
protected:
	int len, width, h;
public:
	BOX(){
		len = 0;
		width = 0;
		h = 0;
	}
	void getbox(){
		cin >> h;
	}
	void circlearea(){
		cout << "Area of circle is : " << r*r << endl;
	}
	void rectarea(){
		l = r;
		cout << "Area of Rectangle is : " << l*b << endl;
	}
	void boxvol(){
		len = l;
		width = b;
		cout << "Volume of the box is : " << len*width*h << endl;
	}
};
int main(){
	BOX b;
	cout << "Enter radius of the circle : ";
	b.getr();
	cout << "Enter breadth of the rectangle / box : ";
	b.getb();
	cout << "Enter height of the box : ";
	b.getbox();
	b.circlearea();
	b.rectarea();
	b.boxvol();
	return 0;
}
