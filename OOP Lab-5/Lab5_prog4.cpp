#include<iostream>
using namespace std;
class TIME{
private:
	int hour,minute,second;
public:
	TIME(int h=0,int m=0, int s=0){
		hour = h;
		minute = m;
		second = s;
	}
	void input(){
		cin >> hour >> minute >> second;
	}
	void display(){
		cout << hour << " : " << minute << " : " << second;
	}
	void sum(TIME t1,TIME t2);
};
void TIME::sum(TIME t1,TIME t2){
	second = t1.second + t2.second;
	minute = second/60;
	second = second % 60;
	minute = minute + t1.minute + t2.minute;
	hour = minute/60;
	minute = minute % 60;
	hour = hour + t1.hour + t2.hour;
}
int main(){
	TIME t1(0,0),t2(0,0),t3(0,0);
	cout << "For time 1 :\n";
	cout << "Enter the no. of hours, minutes and seconds : " << endl;
	t1.input();
	cout << "For time 2 :\n";
	cout << "Enter the no. of hours, minutes and seconds : " << endl;
	t2.input();
	t3.sum(t1, t2);
	t3.display();
	return 0;
}
