#include<iostream>
using namespace std;
class DB;
class DM{
private:
	float meters, cm;
public:
	void input1(){
		cin >> meters >> cm;
	}
	void display1(){
		cout << meters << " meters and " << cm << " cm" << endl;
	}
	friend void sum(DM *p1, DB *p2);
};
class DB{
private:
	float feet, inches;
public:
	void input2(){
		cin >> feet >> inches;
	}
	void display2(){
		cout << feet << " feet and " << inches << " inches" << endl;
	}
	friend void sum(DM *p1, DB *p2);
};
void sum(DM *p1, DB *p2){
	p1->meters = p1->meters + (p2->feet*0.3048);
	p1->cm = p1->cm + (p2->inches*2.54);
	p2->feet = (p1->meters*3.280) + p2->feet;
	p2->inches = (p1->cm*0.3937) + p2->inches;
}
int main(){
	DM o1;
	DB o2;
	cout << "Enter the distance in meters and cm : ";
	o1.input1();
	cout << "Enter the distance in feets and inches : ";
	o2.input2();
	int ch;
	sum(&o1, &o2);
	while(1){
		cout << "1. Display the result in meters and cm\n2. Display the result in feets and inches\n3. Exit" << endl;
		cout << "Enter your choice : ";
		cin >> ch;
		switch(ch){
			case 1 :
				o1.display1();
				break;
			case 2 :
				o2.display2();
				break;
			case 3 :
				exit(1);
				break;
			default :
				cout << "Invalid input !!!" << endl;
		}
	}
	return 0;
}
