#include <iostream>
using namespace std;
void copyArray(int* arr, int *&arr1, int s){  
	for (int i=0; i<s;i++){
		for (int j=0; j<s;j++){
			arr[i]=arr1[j];
		}
	}
		for (int i=0; i<s;i++){
			cout<<arr1[i];
			 reduceArray(int arr, int arr1, int s);

}
int reduceArray(int *arr, int *&arr1, int s){ 
	int n;
	cout<<"Enter the reduced size of the array";
	cin>>n;
	for (int i=
}
int main(){
	int s;
	cout<<"enter size";
	cin>>s;
	int* arr=new int[s];
	for (int i=0; i<s;i++)
	{
		cout<<"Enter the array";
		cin>> arr[i];
	}
	int* arr1=new int[s];
	copyArray(arr,arr1,s);
	system("pause");
}