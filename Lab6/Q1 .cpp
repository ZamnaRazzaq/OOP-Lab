#include <iostream>
using namespace std;
class Mybigint{
	int*big_int_;
	int _legnth_;
public:
	Mybigint(){
		cout<<"Default constructor"<<endl;

	}

	Mybigint(int size){
		_legnth_=size;
		big_int_=nullptr;
		big_int_=new int [_legnth_];
		cout<<"constructor"<<endl;
}
	Mybigint(const Mybigint& obj){
		_legnth_=obj._legnth_;
		big_int_=new int[_legnth_];
		for (int i=0; i<_legnth_;i++)
		{
			big_int_[i]=obj.big_int_[i];
		}
	}
	void assign(const Mybigint& obj){
		int* big_int_;
		big_int_ =new int[_legnth_];
		for(int i=0; i<_legnth_;i++){
			big_int_[i]=obj.big_int_[i];
		}

	}
	int compareTo(const Mybigint& obj){
		int count=0;

		for (int i =0; i<_legnth_;i++){
			count++;
		}
		if(_legnth_==count){
			for (int i=0; i<_legnth_;i++)
			{ if (big_int_[i]==obj.big_int_[i]){
				return 0;
			}
			if (big_int_[i]>obj.big_int_[i]){
				return 1;
			}
			if (big_int_[i]<obj.big_int_[i]){
				return 2;
			}
	}
		}
		else 
			return -1;
	}
	~Mybigint(){
		if(big_int_!=nullptr)
		{
			delete[] big_int_;
			big_int_=nullptr;
		}
	}
	void display(){
		for (int i=0; i<_legnth_;i++)
		{ cout<<big_int_[i];
		if (big_int_==nullptr){
			cout<<"No values assigned";
		}

		}
	}
	

};
void main(){
	Mybigint obj1(5);
	Mybigint obj2=obj1 ;
	cout<<"Compare the arrays";
	cout<<obj1.compareTo(obj2);
	obj1.assign(obj1);
	obj1.compareTo(obj2);
	obj1.display();
	obj1.~Mybigint();


	system("pause");



}
