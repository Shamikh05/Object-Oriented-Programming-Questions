#include<iostream>
using namespace std;
class DISTANCE{
private:
	float feet, inches;
public:
	DISTANCE(int f=0, int i=0){
		feet = f;
		inches = i;
	}
	void inputdist(){
		cin >> feet >> inches;
	}
	void output(){
		cout << feet << " feets and " << inches << "inches." << endl;
	}
	void sum(DISTANCE *p1, DISTANCE *p2);
};
void DISTANCE::sum(DISTANCE *p1, DISTANCE *p2){
	feet = p1->feet + p2->feet;
	inches = p1->inches + p2->inches;
}
int main(){
	DISTANCE d1(0,1), d2 = DISTANCE(0,1), d3;
	cout << "Enter the first distance in feets and inches : ";
	d1.inputdist();
	cout << "Enter the second distance in feets and inches : ";
	d2.inputdist();
	cout << "First distance is :\n";
	d1.output();
	cout << "Second distance is :\n";
	d2.output();
	d3.sum(&d1, &d2);
	cout << "Sum of two distances is :\n";
	d3.output();
	return 0;
}
