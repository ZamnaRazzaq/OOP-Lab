#include<iostream>
using namespace std;
template <class operate>
operate performOperation(operate x,operate y,char z){
	if (z=='*'){
		return x*y;}
	else if (z=='+'){
		return x+y;}
	else if (z=='-'){
		return y-x;}
	else if(z=='/'){
		return y/x; 
	}
}
	




int  main()
{
	int a, b;
	char op;
	cout<<"Enter the first operand";
	cin>>a;
	cout<<"Enter the second operand";
	cin>>b;
	cout<<"Enter operation";
	cin>>op;
	if (op == '*' || op == '+' || op == '-' || op == '/')
{
cout<<performOperation( a, b, op);
}
else
{
cout << "Wrong operation";
}
	system("pause");

}


