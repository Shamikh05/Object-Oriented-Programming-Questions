#include<iostream>
using namespace std;
int main()
{
	int n,max,min,i;
	cout << "Enter the no. of integers : ";
	cin >> n;
	int a[n];
	cout << "Enter the numbers :\n";
	for(i=0;i<n;i++)
		{
			cin >> a[i];
		}
	max = a[0];
    	for (i = 0; i < n; i++)
	    {
	        if (max < a[i])
	            max = a[i];
	    }
    	min = a[0];
    	for (i = 0; i < n; i++)
	    {
	        if (min > a[i])
	            min = a[i];
	    }
	    cout << "Largest element : " << max << endl;
   	    cout << "Smallest element : " << min << endl;
	return 0;
}
