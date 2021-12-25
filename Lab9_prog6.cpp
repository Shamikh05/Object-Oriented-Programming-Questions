#include<iostream>
using namespace std;
template <class T1>
void sumTemp(T1 a, T1 b, T1 c){
	cout << "Sum : " << a+b+c << endl;
}
void sumTemp(int a, int b, int c){
	cout << "Sum : " << a+b+c << endl;
}
void sumTemp(float a, float b, float c){
	cout << "Sum : " << a+b+c << endl;
}
void sumTemp(double a, double b, double c){
	cout << "Sum : " << a+b+c << endl;
}
int main(){
	int n1, n2, n3;
	cout << "Enter the three numbers : ";
	cin >> n1 >> n2 >> n3;
	sumTemp(n1,n2,n3);
	return 0;
}
