#include <iostream>
using namespace std;
int main(){
	int s,n;
	float max=0;
	float Secmax=0;
	int count;
	cout<<"Enter the size of array";  //size of array
	cin>>s;
	float* A=new float[s];
	cout<<"Enter the array elements"; //entering array elements
	for (int i=0; i<s; i++){
		cin>>*(A+i);
	}
	for (int i=0;i<s;i++){
		for (int j=i+1; j<s;j++){
			if (A[j]>A[i]){
				max=A[j];
				count++;   //max element
			}
		}
}
	for (int i=0;i<s;i++){
		for (int j=i+1;j<s;j++){
			if (A[j]>A[i] && A[j]<max){
				Secmax=A[j];
				count++;   //second max element
				
			}
		}
	}
	cout<<"Second max is :"<<Secmax;
	cout<<"Index of second largest element is:"<<count;
		
    system("pause");
}

	      
		






}