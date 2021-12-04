//Librerias
#include<iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main(){
	
	int matriz_A []={1,2,3,4,5};
	int matriz_B []={1,2,3,4,5};
	int matriz_C;
	
	matriz_C= ((matriz_A [0]*matriz_B [0]+ matriz_A [0]*matriz_B [1]+ matriz_A [0]*matriz_B [2]+matriz_A [0]*matriz_B [3]+matriz_A [0]*matriz_B [4])+matriz_A [0]*matriz_B [0]+matriz_A [1]*matriz_B [0]+matriz_A [2]*matriz_B [0]+matriz_A [3]*matriz_B [0]+matriz_A [4]*matriz_B [0]);
	
	cout<<"Matriz A: "<<endl;
	cout<<matriz_A[0];cout<<" ";
	cout<<matriz_A[1];cout<<" ";
	cout<<matriz_A[2];cout<<" ";
	cout<<matriz_A[3];cout<<" ";
	cout<<matriz_A[4];cout<<" ";
	cout<<endl;
	
	cout<<"Matriz B: "<<endl;
	cout<<matriz_B[0];cout<<" ";
	cout<<matriz_B[1];cout<<" ";
	cout<<matriz_B[2];cout<<" ";
	cout<<matriz_B[3];cout<<" ";
	cout<<matriz_B[4];cout<<" ";
	cout<<endl;
	cout<<endl;
	
	
	cout<<"A x B: "<<endl;
	cout<<matriz_A [0]*matriz_B [0];cout<<" ";
	cout<<matriz_A [0]*matriz_B [1];cout<<" ";
	cout<<matriz_A [0]*matriz_B [2];cout<<" ";
	cout<<matriz_A [0]*matriz_B [3];cout<<" ";
	cout<<endl;
	
	cout<<matriz_A [0]*matriz_B [0];cout<<" ";
	cout<<matriz_A [1]*matriz_B [1];cout<<" ";
	cout<<matriz_A [2]*matriz_B [2];cout<<" ";
	cout<<matriz_A [3]*matriz_B [3];cout<<" ";
	cout<<endl;
	
	cout<<matriz_A [0]*matriz_B [0];cout<<" ";
	cout<<matriz_A [2]*matriz_B [1];cout<<" ";
	cout<<matriz_A [2]*matriz_B [2];cout<<" ";
	cout<<matriz_A [2]*matriz_B [3];cout<<" ";
	cout<<endl;
	
	
	
	return 0;
}



