#include<iostream>
#include<string>
using namespace std;
class time{
int hr;
int min;
public:
time();
time(int,int);
void settime(int,int);
int gethours(int &h);
int getminutes(int &m);
void printtime();
void incrementhrs();
void incrementmins();

};
time::time(){
}
   time::time(int m,int h){
	   min=m;
	   hr=h;
   }
	int time:: gethours(int &h){
		hr=h;
		return hr;
}
	int time::getminutes(int &m){
		min=m;
		return min;
}
	void time::printtime(){
		cout<<"Time: "<<"\t";
		cout<<hr<<"-"<<min;
	}
	void time::incrementhrs(){
		++hr;
	}
	void time:: incrementmins(){
		++min;
	}

class Date{
	int month;
	int date;
	int year;
	public:
		Date();
	Date(int , int , int );
		void setDate(int ,int,int);
		int getmonth(int &m);
		int getdate(int &d);
		int getyear(int &y);
		void printDate();


};
Date::Date(){}
	Date::Date(int m, int d, int y){
		month=m;
		date=d;
		year=y;
	}
	void Date::setDate(int ,int,int){
	}
	int Date::getmonth(int &m){
		month=m;
    return month;	}
	int Date:: getdate(int &d){
		date=d;
    return date;	}
	int Date::getyear(int &y){
		year=y;
    return year;	}
	void Date::printDate(){
		cout<<"Date:"<<"\t";
		cout<<date<<"-"<<month<<"-"<<year;
	}
	class Event:public time,public Date{
		string eventname;
		time eventtime;
		Date eventday;
		public:
		Event(int hours=0, int minutes=0, int m=1, int d=0, int y=1900, string name="Christmas");
		void setEventdata(int hours,int minutes, int m, int d, int y, string name);
		void printEventData();
	};
	Event::Event(int hours, int minutes, int m, int d, int y, string name){
		eventtime.gethours(hours);
			eventtime.getminutes(minutes);
			eventday.getdate(d);
			eventday.getmonth(m);
			eventday.getyear(y);
			eventname=name;
	}
		void Event::setEventdata(int hours,int minutes, int m, int d, int y, string name){
			gethours(hours);
			getminutes(minutes);
			getdate(d);
			getmonth(m);
			getyear(y);
			eventname=name;

}
		void Event::printEventData(){
			cout<<eventname<<endl;
			printtime();
			cout<<endl;
			printDate();
		}


int main(){
	Event object;
	object.setEventdata(6,0,12,25,2010,"Christmas");
	object.printEventData();
	cout<<endl;
		Event object2;
		object2.setEventdata(1,15,7,4,2010,"Fourth of july");
		object2.printEventData();
		system("pause");

}