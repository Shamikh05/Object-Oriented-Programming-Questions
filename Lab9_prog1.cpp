#include<iostream>
using namespace std;
template <class T>
void minValue(T arr[], int &x){
	T min = arr[0];
	for(int i=0;i<x;i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	cout << "Minimum value is : " << min << endl;
}
int main(){
	int n;
	cout << "Enter the size of the array : ";
	cin >> n;
	int a[n];
	float b[n];
	cout << "Enter the integer elements of the array :" << endl;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	minValue(a,n);
	cout << "Enter the float elements of the array :" << endl;
	for(int i=0;i<n;i++){
		cin >> b[i];
	}
	minValue(b,n);
	return 0;
}
