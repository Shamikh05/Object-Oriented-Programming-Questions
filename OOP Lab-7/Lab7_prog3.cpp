#include<iostream>
using namespace std;
class A{
private:
	int i, j;
public:
	A(){
		i = 0;
		j = 0;
	}
	void get(){
		cin >> i >> j;
	}
	void display(){
		cout << "i is : " << i << endl << "j is : " << j << endl;
	}
	void operator ++(){
		i = i + 1;
	}
	void operator --(){
		j = j - 1;
	}
};
int main(){
	A a;
	cout << "Enter the values of 2 numbers : ";
	a.get();
        cout << "Before using ++ and -- operators :\n";
	a.display();
	++a;
	--a;
	cout << "After using operator ++ and -- operators :\n";
	a.display();
	return 0;
}
