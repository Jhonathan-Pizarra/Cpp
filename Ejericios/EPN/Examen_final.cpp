#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

// Uso de funciones para facilidad..
void matriz_a(){
	

	int opc=0;
	do{
		int filas;
		int columnas;
		int num; //num es un auxiliar
		int matriz[filas][columnas];
		srand(time(NULL));
		
		cout<<"Cuantas filas?: ";
		cin>>filas;
		
		
		cout<<"Cuantas columnas?: ";
		cin>>columnas;
		
		for(int i=0; i<filas; i++){
			cout<<endl;
			for(int j=0; j<columnas; j++){
			    num=rand()%6;
				matriz[i][j]=num;
				num=0;
				
				cout<<" "<<matriz[i][j];
		
			}	
		}
		cout<<endl;
	cout<<"Desea pasar a la siguiente pregunta? (1=Si, 2=No): ";
	cin>>opc;

	}while (opc!=1); 
	
	cout<<endl;
	cout<<"Pregunta 2)"<<endl;
	
	return; 
}

void matriz_b(){
	
	int cpo=0;
	
	do{
		int f;
		int c;
		int n; //num es un auxiliar
		int matriz2[f][c];
		srand(time(NULL));
		
		cout<<"Cuantas filas?: ";
		cin>>f;
		
		
		cout<<"Cuantas columnas?: ";
		cin>>c;
		
		for(int i=0; i<f; i++){
			cout<<endl;
			for(int j=0; j<c; j++){
			    n=rand()%6*0;
				matriz2[i][j]=n;
				n=0;
				
				cout<<" "<<matriz2[i][j];
		
			}	
		}
		cout<<endl;
	cout<<"Desea pasar a la siguiente pregunta? (1=Si, 2=No): ";
	cin>>cpo;

	}while (cpo!=1); 
	
	cout<<endl;
	cout<<"Pregunta 3)"<<endl;
	cout<<"..Continuara.."<<endl;

	return; //Funcion void, no retorna nada..
}

/* void matriz_c(){
	
	int x1_1, x1_2, x1_3, x2_1, x2_2, x2_3;
	int m;
	int matriz3[]

	
	
	cout<<"Ingrese los valores de la matriz A; (Fila 1 -Columna 1): ";
	cin>>x1_1;
	cout<<"Ingrese los valores de la matriz A; (Fila 1 -Columna 2): ";
	cin>>x1_2;
	cout<<"Ingrese los valores de la matriz A; (Fila 1 -Columna 3): ";
	cin>>x1_3;
	cout<<"Ingrese los valores de la matriz A; (Fila 2  Columna 1): "; 
	cin>>x2_1;
	cout<<"Ingrese los valores de la matriz A; (Fila 2  Columna 2): "; 
	cin>>x2_2;
	cout<<"Ingrese los valores de la matriz A; (Fila 2  Columna 3): "; 
	cin>>x2_3;
	
	for(int i=0; i<x1_1 && i<x1_2 &&  i<x1_3 &&  i<x2_1 &&  i<x2_2 &&  i<x2_2 ; i++){
		cout<<endl;
		for(int j=0; j<6; j++){
			m=rand()%6;
				matriz3[i][j]=m;
				m=0;
				
				cout<<" "<<matriz3[i][j];
			
		}
	} */
	
int main(){
	
	//Llamada a las funciones..
	matriz_a(); //Funciones llamadas o invocadas
	matriz_b();

	
	
	return 0;
}
