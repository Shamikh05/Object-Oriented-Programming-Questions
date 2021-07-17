#include<iostream>
using namespace std;
void AREAVOL(int t);
void AREAVOL(float x);
int main()
{
	int ch;
	cout << "1. Area of circle\n2. Volume of circle\n\n";
	cout << "Enter your choice : ";
	cin >> ch;
	switch(ch)
	{
		case 1 : int r1;
			 cout << "\nEnter the radius : ";
			 cin >> r1;
			 AREAVOL(r1);
			 break;
		case 2 : float r2;
			 cout << "\nEnter the radius : ";
			 cin >> r2;
			 AREAVOL(r2);
			 break;
		default : "Invalid input!!!";
	}
	return 0;
}
void AREAVOL(int t)
{
	cout << "\nArea of circle is : " << 3.14*t*t;
}
void AREAVOL(float x)
{
	cout << "\nVolume of sphere is : " << 4*3.14*x*x*x;
}
