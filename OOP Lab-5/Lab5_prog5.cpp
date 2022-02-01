#include<iostream>
using namespace std;
class copyc{
private:
	int num1, num2;
public:
	copyc(int n1, int n2){
		num1 = n1;
		num2 = n2;
	}
	copyc(const copyc &c2){
		num1 = c2.num1;
		num2 = c2.num2;
	}
	void display(){
		cout << "Numbers are "<< num1 << " and " << num2 << endl;
	}
};
int main(){
	copyc c1(5,10);
	copyc c2 = c1;
	c1.display();
	c2.display();
	return 0;
}
