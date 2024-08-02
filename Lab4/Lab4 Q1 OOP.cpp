#include<iostream>
#include<string>
using namespace std;
class Student{
	string Cnic,Name,Degree,address,Roll_no;
public:
	void SetA(string val1)
	{
		Roll_no=val1;
	}
	void SetB(string val2)
	{
		Cnic=val2;
	}
	void SetC(string val3)
	{
		Name=val3;
	}
	void SetD(string val4)
	{
		Degree=val4;
	}
	void SetE(string val5)
	{
		address=val5;
	}
	string getA(){
		return Roll_no;
	}
	string getB(){
		return Cnic;
	}
	string getC(){
		return Name;
	}
	string getD(){
		return Degree;
	}
	string getE(){
		return address;
	}
	void print(){
		cout<<"Name is "<<Name<<endl;
		cout<<"Roll-no is "<<Roll_no<<endl;
		cout<<"Cnic is "<<Cnic<<endl;
		cout<<"Degree is "<<Degree<<endl;
		cout<<"Address is "<<address<<endl;
	}
};
int main(){
	string Name,address,Degree,Roll_no,Cnic;
	cout<<"Enter Roll no"<<endl;
	getline(cin,Roll_no);
	cout<<"Enter Cnic"<<endl;
	getline(cin,Cnic);
	cout<<"Enter Name"<<endl;
	getline(cin,Name);
	cin.ignore();
	cout<<"Enter Degree"<<endl;
	getline(cin,Degree);
	cout<<"Enter address"<<endl;
	getline(cin,address);
	

	Student obj1;
	obj1.SetA(Roll_no);
	obj1.SetB(Cnic);
	obj1.SetC(Name);
	obj1.SetD(Degree);
	obj1.SetE(address);
	obj1.print();

	system("pause");


}