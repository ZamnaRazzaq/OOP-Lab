#include<iostream>
#include<string>
using namespace std;
class Date{
	int d;
    int month;
	int y;
public:
	class Invalidday{
	};
	class Invalidmonth{
	};
	class Invalidyear{
	};
	void setd(int val){
	if (val<0 || val>31){
		throw Invalidday();
	}

		else 
			d=val;
	}
	void setm(int val1){
		if(val1>12 || val1<0){
			throw Invalidmonth();
		}
		else 
			month=val1;
	}
	void sety(int val2){
		if(val2<0){
			throw Invalidyear();
		}
		else 
			y=val2;
	}
	
void print() {
	cout<<"Date of birth"<<d<<month<<y;
}
	
	int getd(){
		return d;}
	int getmonth(){
		return month;}
	int gety(){
		return y;}
};
int main(){
	int d, m,y;
	int c=0;
	cout<<"Enter your date of birth in numeric form: ";
	cout<<"Day";
	cin>>d;
	cout<<"month";
	cin>>m; 
	cout<<"year";
	cin>>y;
	Date D;
	try{
		D.setd(d);
	}
	catch(Date::Invalidday)
	{
		cout<<"The day is invalid";
	}
		try{
		D.setd(m);
	}
	catch(Date::Invalidmonth)
	{
		cout<<"The month is invalid";

	}
		try{
	D.setm(m);
	}
	catch(Date::Invalidyear)
	{
		cout<<"The year is invalid";
		
	}

		D.print();
	
	
	
	system("pause");

}





