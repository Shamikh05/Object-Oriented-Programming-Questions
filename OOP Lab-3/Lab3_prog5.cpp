#include<iostream>
using namespace std;
class FRACTION{
private:
	int numerator, denominator;
public:
	void getfr(){
		cin >> numerator >> denominator;
	}
	void displayfr(){
		cout << numerator << " / " << denominator << endl;
	}
	int gcd(int numerator, int denominator);
	void addfr(FRACTION f1, FRACTION f2);
	void subtractfr(FRACTION &f1, FRACTION &f2);
	void multiplyfr(FRACTION *p1, FRACTION *p2);
};
int FRACTION::gcd(int a, int b){
    	if (a == 0){
        	return b;
	}
	else
    		return gcd(b % a, a);
}
void FRACTION::addfr(FRACTION f1, FRACTION f2){
	numerator = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);
	denominator = f1.denominator * f2.denominator;
	int cf = gcd(numerator, denominator);
	numerator = numerator/cf;
	denominator = denominator/cf;
}
void FRACTION::subtractfr(FRACTION &f1, FRACTION &f2){
	numerator = (f1.numerator * f2.denominator) - (f2.numerator * f1.denominator);
	denominator = (f1.denominator * f2.denominator);
	int cf = gcd(numerator, denominator);
	numerator = numerator/cf;
	denominator = denominator/cf;
}
void FRACTION::multiplyfr(FRACTION *p1, FRACTION *p2){
	numerator = p1->numerator *  p2->numerator;
	denominator = p1->denominator * p2->denominator;
	int cf = gcd(numerator, denominator);
	numerator = numerator/cf;
	denominator = denominator/cf;
}
int main(){
	FRACTION f1, f2, temp1, temp2, temp3;
	cout << "Enter the numerator and denominator of fraction 1 : ";
	f1.getfr();
	cout << "Enter the numerator and denominator of fraction 2 : ";
	f2.getfr();
	temp1.addfr(f1, f2);
	temp2.subtractfr(f1, f2);
	temp3.multiplyfr(&f1, &f2);
	temp1.displayfr();
	temp2.displayfr();
	temp3.displayfr();
	return 0;
}
