#include<iostream>
using namespace std;
class Triangle{
private:
	float base;
	float height;
public:
	void getData(){
		cin >> base >> height;
	}
	float areaTrin(){
		return (0.5*base*height);
	}
};
int main(){
	Triangle t[10];
	for(int i=0;i<10;i++){
		cout << "Enter the base and height of triangle " << i+1 << " :" << endl;
		t[i].getData();
	}
	cout << "\nTRIANGLE\tAREA\n";
	for(int i=0;i<10;i++){
		cout << "\n" << i+1 << "\t\t" << t[i].areaTrin();
	}
	return 0;
}
