#include<iostream>
using namespace std;
template <class T>
void search_Key(T arr[], int &x, T &k){
	int found = 0, l;
	for(int i=0;i<x;i++){
		if(arr[i] == k){
			l = i;
			found = 1;
			break;
		}
	}
	if(!found)
		cout << k << " is not found in the array." << endl;
	else
		cout << k << " is found at" << " location : " << l+1 << endl;
}
int main(){
	int n, key1;
	char key2;
	double key3;
	cout << "Enter the size of the array : ";
	cin >> n;
	int a[n];
	char b[n];
	double c[n];
	cout << "Enter the integer elements of the array :" << endl;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cout << "Enter the value you want to search : ";
	cin >> key1;
	search_Key(a,n,key1);
	cout << "Enter the character elements of the array :" << endl;
	for(int i=0;i<n;i++){
		cin >> b[i];
	}
	cout << "Enter the character you want to search : ";
	cin >> key2;
	search_Key(b,n,key2);
	cout << "Enter the double elements of the array :" << endl;
	for(int i=0;i<n;i++){
		cin >> c[i];
	}
	cout << "Enter the value you want to search : ";
	cin >> key3;
	search_Key(c,n,key3);
	return 0;
}
