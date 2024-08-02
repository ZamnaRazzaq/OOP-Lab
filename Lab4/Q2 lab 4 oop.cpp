#include<iostream>
#include<fstream>
using namespace std;
class Matrix{
	int rows,cols;
		int**ptr;
public:
	void setA(int val1){
		rows=val1;
	}
	void setB(int val2){
		cols=val2;
	}
	int getA(){
		return rows;
	}
	int getB(){
		return cols;
	}
	void AllocateMemory(){
		ptr=new int*[rows];
		for(int i=0;i<rows;i++)
			ptr[i]=new int [cols];
	}
	int **input(){
		ifstream myfile;
		myfile.open("file.txt");
		for(int i=0; i<rows;i++){
			for(int j=0; j<cols;j++){
				myfile>>ptr[i][j];
			}
		}
		myfile.close();
}
	void Rotate_outer_layer(){
		for (int i=0; i<rows;i++)
			for(int j=0; j<cols;j++){
				if(i=0){
					ptr[i][j]=ptr[i+1][j];
				}
				if (j==cols){
					ptr[i][j]=ptr[i][j+1];
					j--;
				}
				if (rows==(cols-1)){
					ptr[i][j]=ptr[i-1][j];
				}
				if (i=1){
					ptr[i][j]==ptr[i][j-1];

				}
			}
			
	}



void display(){
	for (int i=0; i<rows;i++){
		for (int j=0;j<cols;j++){
			cout<<ptr[i][j]<<" ";
			cout<<endl;
		}
	}
}


		void deallocate(){ 
			for (int i=0; i<rows;i++){
				delete [] ptr[i];
				ptr[i]=nullptr;
			}
			delete [] ptr;
			ptr=nullptr;
		}
		
		
		};

void main(){
	Matrix obj1;
	int rows,cols;
	rows=3;
	cols=3;
	obj1.setA(rows);
	obj1.setB(cols);
	obj1.AllocateMemory();
	obj1.input();
	obj1.display();
	obj1.AllocateMemory();

	system("pause");
}





