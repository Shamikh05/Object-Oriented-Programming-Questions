#include<iostream>
using namespace std;
	void SUM(int a,int b=10,int c=20){
	    cout<<"Sum = "<<a+b+c<<endl;
	}
	int main(){
	    int a,b,c,ch,c1;
	    c=0;
	    do{
	    cout << "\tFunction Overloading";
	    cout << "\n\n1.For 1 input ";
	    cout << "\n2. For 2 inputs ";
	    cout << "\n3. For 3 inputs ";
	    cout << "\n\tEnter your choice : ";
	    cin >> ch;

	    switch (ch)
	    {
	    case 1:
	        cout << "Enter 1 value : \n";
	        cin >> a;
	        SUM(a);
	        break;

	    case 2:
	        cout << "\nEnter 2 values : "<<endl;
	        cin >> a>>b;
	        SUM(a,b);
	        break;
	    case 3:
	        cout << "\nEnter 3 values: "<<endl;
	        cin >> a>>b>>c;
	        SUM(a,b,c);
	        break;
	    default:
	        cout << "\nThe choice entered is a wrong choice"<<endl;
	    }
	    cout<<"To continue press 1:"<<endl;
	    cin>>c1;
	    c=c1;
	    }while(c==1);
	    return 0;
}
