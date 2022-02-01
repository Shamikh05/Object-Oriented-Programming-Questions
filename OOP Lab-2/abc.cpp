#include<iostream>
using namespace std;
void swapaddress(int &n1, int &n2)
{
	int temp3;
	temp3 = n1;
	n1 = n2;
	n2 = temp3;
	cout << "Numbers after swapping with call by address are :\n" << "x = " << n1 << endl << "y = " << n2 << endl;
}
int main()
{
	int x,y;
	cin >> x >> y;
	cout << "Numbers before swapping are :\n" << "x = " << x << endl << "y = " << y << endl;
	swapaddress(x,y);
	return 0;
}
