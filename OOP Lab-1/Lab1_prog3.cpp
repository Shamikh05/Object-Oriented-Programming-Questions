#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, c, x1, x2, disc;
	cout << "Enter a, b and c: ";
	cin >> a >> b >> c;
	disc = (b*b - 4*a*c);

	    if (disc > 0)
		    {
		        x1 = (-b + sqrt(disc)) / (2*a);
		        x2 = (-b - sqrt(disc)) / (2*a);
		        cout << "Roots are real and different." << endl;
		        cout << "x1 = " << x1 << endl;
		        cout << "x2 = " << x2 << endl;
		    }

	    else if (disc == 0)
		    {
		        cout << "Roots are real and same." << endl;
		        x1 = (-b + sqrt(disc)) / (2*a);
		        cout << "x1 = x2 =" << x1 << endl;
		    }

	    else
		    {
			cout << "The roots are imaginary." << endl;
		    }

	    return 0;
}
