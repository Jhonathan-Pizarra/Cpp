//Correccion de la prueba
#include<iostream>
#include <string.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
//Multiplicacion

int multiplicar ( int matriz_a[3][2]);

int main()
{
int matriz_a[3][2];


cout<<multiplicar(matriz_a)<<"    "<<endl;


}


int multiplicar (int matriz_a[3][2] ){
	
int matriz [3][4];
int matriz_b[4][2];
srand(time(NULL));
matriz[3][4]=1 + rand() % 10;
matriz_b[4][2]=1 + rand() % 10;
cout<<"  "<<endl;

cout<<"Matriz a :"<<endl;
	for (int j=0; j<3; j++){
	for (int i=0; i<4; i++){
		
matriz[j][i]=1 + rand() % 10;
	cout<<matriz[j][i]<<"\t";
		}
cout<<endl;		
}
cout<<"  "<<endl;
cout<<"  "<<endl;
cout<<"Matriz b: "<<endl;
//generamos la matriz a

for (int j=0; j<4; j++){
	for (int i=0; i<2; i++){
matriz_b[j][i]=1 + rand() % 10;

	cout<<matriz_b[j][i]<<"\t";
		}
cout<<endl;		
}
cout<<"  "<<endl;
cout<<"  "<<endl;
for(int i=0; i<3; ++i)
        for(int j=0; j<2; ++j)
            matriz_a[i][j]= 0;
            
//multiplicamos las matrices
cout<<"Matriz AxB: "<<endl;
	for (int i=0; i<3; i++){
		for (int j=0; j<2; j++){
			for (int k=0; k<4; k++){
			matriz_a[i][j]=matriz[i][k]*matriz_b[k][j]+matriz_a[i][j];
			
			}
		
		cout<<matriz_a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"  "<<endl;
cout<<"  "<<endl;	
return 0;


}

