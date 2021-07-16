#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cin >> n1 >> n2;
	n1=n1%10;
	n2=n2%10;
	if(n1==n2)
	{
		cout << "They have same last digit.\n";
	}
	else
	{
		cout << "They does not have same last digit.\n";
	}
	return 0;
}
