#include<iostream>
using namespace std;
class A{
protected:
	string city;
	int pin;
};
class B{
protected:
	string n;
	string g;
	int a;
};
class C : public B{
protected:
	float height, weight;
};
class D : public A, public C{
private:
	string game;
public:
	void get(){
		cout << "Enter city name : ";
		cin >> city;
		cout << "Enter city pin : ";
		cin >> pin;
		cout << "Enter the name : ";
		cin >> n;
		cout << "Enter gender : ";
		cin >> g;
		cout << "Enter age : ";
		cin >> a;
		cout << "Enter height : ";
		cin >> height;
		cout << "Enter weight : ";
		cin >> weight;
		cout << "Enter game name : ";
		cin >> game;
	}
	void displaydetail(){
		cout << city << endl << pin << endl << n << endl << g << endl << a << endl << height << endl << weight << endl << game << endl;
	}
};
int main(){
	D d;
	d.get();
	d.displaydetail();
	return 0;
}
