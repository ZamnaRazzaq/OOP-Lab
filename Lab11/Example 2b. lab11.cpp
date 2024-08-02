#include<iostream>
using namespace std;
template <class Max>
	Max GetMax(char i, long m){
		if (i>m){
			return i;}
		else {
			return m;}
	
}
	template <class Min>
Min GetMin(Min j, long  l){
		if (j<l){
			return j;}
		else {
			return l;}
	}




int main () 
{
  char i='Z';
  int  j=6, k;
  long l=10, m=5, n;
  k=GetMax<char,long>(i,m);
  n=GetMin<int,long>(j,l);
  cout << k << endl;
  cout << n << endl;
  return 0;
}
