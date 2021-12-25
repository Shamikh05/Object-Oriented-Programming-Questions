#include<iostream>
using namespace std;
template <class T>
void swapTemp(T a, T b){
	cout << "Before swapping :\n" << "a = " << a << "\nb = " << b << endl;
	T temp;
	temp = a;
	a = b;
	b = temp;
	cout << "After swapping :\n" << "a = " << a << "\nb = " << b << endl;
}
int main(){
	int n1, n2;
	float f1, f2;
	string c1, c2;
	cout << "Enter the two integer numbers : ";
	cin >> n1 >> n2;
	swapTemp(n1,n2);
	cout << "Enter the two float numbers : ";
	cin >> f1 >> f2;
	swapTemp(f1,f2);
	cout << "Enter the two strings : ";
	cin >> c1 >> c2;
	swapTemp(c1,c2);
	return 0;
}
