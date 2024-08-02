#include <iostream> 
using namespace std;
void Output (int *p, int s){
	p[0]=1;
	p[1]=1;
	for (int i=2; i<s; i++){ // Fibonacci Numbers
		p[i]=p[i-1]+p[i-2];
	}
	for (int i=0; i<s;i++){ 
       cout<<p[i]<<" ";  // printing Fibonacci Numbers
	}
}
int main(){
	int s;
	cout<<"Enter the size of array";
	cin>>s;
	int* p=new int[s];    //creating a dynamic array
	Output(p,s); //function call
	system ("pause");
}



