#include<iostream>
using namespace std;
class CIRCLE{
protected:
	int r;
public:
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
		int r1 = r;
		cout << "Area of circle is : " << 3.14*r1*r1 << endl;
	}
	void rectarea(){
		l = r;
		cout << "Area of Rectangle is : " << l*b << endl;
	}
};
class CYLINDER : public CIRCLE{
private:
	int r2, h;
public:
	CYLINDER(){
		r2 = 0;
		h = 0;
	}
	void geth(){
		cin >> h;
	}
	void cylindervol(){
		r2 = r;
		cout << "Volume of the cylinder is : " << 3.14*r2*r2*h << endl;
	}
};
int main(){
	RECTANGLE r1;
	CYLINDER c1;
	cout << "Enter radius of the circle : ";
	r1.getr();
	cout << "Enter breadth of the rectangle : ";
	r1.getb();
	cout << "Enter radius of the cylinder : ";
	c1.getr();
	cout << "Enter height of the cylinder : ";
	c1.geth();
	r1.circlearea();
	r1.rectarea();
	c1.cylindervol();
	return 0;
}
