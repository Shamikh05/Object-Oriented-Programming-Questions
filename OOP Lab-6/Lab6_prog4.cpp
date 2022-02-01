#include<iostream>
using namespace std;
class Student{
protected:
	string name;
	int roll;
};
class Sports : virtual public Student{
protected:
	char s_grade;
};
class Exam : virtual public Student{
protected:
	char e_grade;
};
class Results : public Sports, public Exam{
public:
	void get(){
		cin >> name;
		cin >> roll;
		cin >> s_grade;
		cin >> e_grade;
	}
	void displayresult(){
		cout << "Name : " << name << endl << "Roll no : " << roll << endl << "Sports grade : " << endl <<  s_grade << "Exam grade : " <<  e_grade << endl;
	}
};
int main(){
	Results s1;
	cout << "Enter the name, roll no., sports grade and exam grade of the student :" << endl;
	s1.get();
	s1.displayresult();
	return 0;
}
