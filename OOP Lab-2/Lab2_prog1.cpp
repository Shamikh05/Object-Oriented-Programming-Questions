#include<iostream>
using namespace std;
void swap(int a,int b);
void swap(int *a,int *p);
void swapaddress(int &a, int &b);
int main()
{
	int x,y,temp;
	cin >> x >> y;
	cout << "Numbers before swapping are :\n" << "x = " << x << endl << "y = " << y << endl;
	swap(x,y);
	swap(&x,&y);
	temp = x;
	x = y;
	y = temp;
	swapaddress(x,y);
	return 0;
}
void swap(int a,int b)
{
	int temp1;
	temp1=a;
	a=b;
	b=temp1;
	cout << "Numbers after swapping with call by value are :\n" << "x = " << a << endl << "y = " << b << endl;
}
void swap(int *a,int *p)
{
	int temp2;
	temp2=*a;
	*a=*p;
	*p=temp2;
	cout << "Numbers after swapping with call by reference are :\n" << "x = " << *a << endl << "y = " << *p << endl;
}
void swapaddress(int &n1, int &n2)
{
	int temp3;
	temp3 = n1;
	n1 = n2;
	n2 = temp3;
	cout << "Numbers after swapping with call by address are :\n" << "x = " << n1 << endl << "y = " << n2 << endl;
}
