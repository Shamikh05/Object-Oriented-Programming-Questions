#include<iostream>
using namespace std;
struct book
{
	char author[50];
	char title[50];
	int price;
};
int main()
{
	int n,i;
	cin >> n;
	book b[n];
	for(i=0;i<n;i++)
	{
		book b[i];
	}
	cout << "Enter the details :\n";
	for (i = 0; i<n; i++)
	{
		cin >> b[i].author >> b[i].title >> b[i].price;
	}
	for (i = 0; i<n; i++)
	{
		cout << "Details of book " << i+1 << " are:\n" << endl;
		cout << b[i].author << endl << b[i].title << endl << b[i].price << endl << endl;
	}
	return 0;
}
