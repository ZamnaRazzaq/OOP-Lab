#include<iostream>
using namespace std;
int** AllocateMemory(int& rows , int& cols){
	int** arr=nullptr;
	arr=new int* [rows];
	for(int i=0; i<rows;i++)
	{ arr[i]= new int [cols];
	}
	return arr;
  }
void InputMatrix(int** matrix, const int rows, const int cols){
for(int i=0; i<rows;i++){
	for(int j=0;j<cols;j++){
		cin>>*(*(matrix+i)+j);
	}
}
}
void DisplayMatrix(int** matrix, const int& rows, const int& cols){
	for(int i=0;i<rows;i++){
		for (int j=0;j<cols;j++){
			cout<<matrix[i][j]<<" ";

		}
		cout<<endl;
	}
}
int* maxCol(int** matrix, const int& rows, const int& cols){
	int *arr=new int [cols];
	int max=0;
	for (int i=0; i<cols;i++){
		for(int j=0; j<rows;j++){
			if (matrix[j][i]>=max){
				max=matrix[j][i];
		}
			
		}
		arr[i]=max;
		max=0;
	}
  
	return arr;
}
void DeallocateMemory(int** matrix, const int& rows){
	for (int i=0;i<rows;i++)
	{
		delete[] matrix[i];
		matrix[i]=nullptr;
	}
	delete[] matrix;
	matrix=nullptr;

}

		

void main(){
	int rows, cols;
cout<<"Enter the size of rows";
cin>>rows;
cout<<"Enter the size of coloumn";
cin>>cols;
int ** matrix = AllocateMemory (rows, cols);
cout<<"Enter the elements of matrix"<<endl;
InputMatrix(matrix, rows, cols);
cout<<"Display the matrix"<<endl;
DisplayMatrix(matrix, rows, cols);
cout<<"Maximum elements of all the columns:";
int* maxColvalues=maxCol(matrix,rows,cols);
for(int i=0;i<cols;i++){
cout<<* (maxColvalues+i)<<",";}
DeallocateMemory(matrix,rows);
 delete []maxColvalues;
 maxColvalues=nullptr;


 system("pause");



}