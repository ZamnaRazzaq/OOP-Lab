#include<iostream>
using namespace std;
template <class Max>
	Max GetMax(Max i, Max j){
		if (i>j){
			return i;}
		else {
			return j;}
	
}
	template <class Min>
Min GetMin(Min l, Min m){
		if (m<l){
			return m;}
		else {
			return l;}
	}
int main () 
{
int i=5, j=6, k;
long l=10, m=5, n;
k=GetMax(i,j);
n=GetMin(l,m);
cout << k << endl;
cout << n << endl;
system("pause");
}