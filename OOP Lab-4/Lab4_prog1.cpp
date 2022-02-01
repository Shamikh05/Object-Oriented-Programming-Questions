#include<iostream>
using namespace std;
class Rectangle{
private:
	int length;
	int breadth;
public:
	void getData(){
		cin >> length >> breadth;
	}
	void mfarea(){
		cout << "Area of the rectangle by member function is : " << (length*breadth) << endl;
	}
	friend void area(Rectangle &r1);
};
void area(Rectangle &r1){
	cout << "Area of the rectangle by friend function is : " << (r1.length*r1.breadth) << endl;
}
int main(){
	Rectangle r1;
	printf("Enter length of the rectangle and breadth of the rectangle : ");
	r1.getData();
	r1.mfarea();
	area(r1);
	return 0;
}
