#include <iostream>
using namespace std;
int main(){
	int s;
	int count;
	cout<<"Enter the size of the numbers"; //size of array
	cin>>s;
	int* p=new int[s];    //creating a dynamic array
	p[0]=1;
	p[1]=1;
	for (int i=2; i<s; i++){ // Fibonacci Numbers
		p[i]=p[i-1]+p[i-2];
	}
	for (int i=0; i<s;i++){ 
       cout<<p[i]<<" ";  // printing Fibonacci Numbers
	}
	 delete []p;

	system ("pause");
}

	

