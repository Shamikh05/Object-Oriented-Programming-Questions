#include<iostream>
using namespace std;
void FUNAREA(int a);
void FUNAREA(int a, int b);
void FUNAREA(int a, int b, int c);
int main()
{
	int l,b,h,ch;
	while(1)
	{
		cout << "1. One argument" << endl;
		cout << "2. Two argument" << endl;
		cout << "3. Three argument" << endl;
		cout << "4. Quit" << endl;
		cout << "Choose any operation given above :";
		cin >> ch;
		switch (ch)
		{
			case 1 :
				 cout << "Enter the argument : ";
				 cin >> l;
				 FUNAREA(l);
				 break;
			case 2 : cout << "Enter the arguments : ";
				 cin >> l >> b;
				 FUNAREA(l,b);
				 break;
			case 3 : cout << "Enter the arguments : ";
				 cin >> l >> b >> h;
				 FUNAREA(l,b,h);
				 break;
			case 4 : exit(1);
				 break;
			default : cout << "Invalid input!!!";
		}
	}
	return 0;
}
void FUNAREA(int a)
{
	cout << "\nArea of circle is : " << 3.14*a*a << endl;
}
void FUNAREA(int a, int b)
{
	cout << "\nArea of rectangle is : " << a*b << endl;
}
void FUNAREA(int a, int b, int c)
{
	cout << "\nVolume of box is : " << a*b*c << endl;
}
