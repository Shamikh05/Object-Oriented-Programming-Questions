#include<iostream>
#include<string.h>
using namespace std;
class abc{
private:
 	char *st;
	int length;
public:
	abc(){
		length = 0;
		st = new char[length+1];
	}
	abc(char *n){
		length = strlen(n);
		st = new char[length+1];
                strcpy(st, n);
	}
	void display(){
		cout << st << endl;
	}
	void concatenate(abc c1, abc c2);
};
void abc::concatenate(abc c1, abc c2){
	length = c1.length + c2.length;
        delete st;
	st = new char[length+1];
        strcpy(st, c1.st);
	strcat(st, c2.st);
}
int main(){
	abc s1;
	abc s2("Hello ");
	abc s3("World");
	s1.concatenate(s2, s3);
	s1.display();
	return 0;
}
