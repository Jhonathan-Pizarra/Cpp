//Ejercicio 7.31
#include <iostream>
#include <conio.h>
using namespace std;
int num[100];
int n;

void Ordenar_Seleccion(){
	int temp;
	
	for(int j=0; j<n-1; j++){
		for(int k=j+1; k<n; k++){
			if(num[k]<num[j]){
			temp=num[k];
			num[k]=num[j];
			num[j]=temp;	
			}
		}
	}
}
void Mostrar_Vector(){
	for(int t=0; t<n; t++){
		cout<<" "<<num[t]<<"\t";
	}
}
main (){
	cout<<"Ingrese una cantidad de numeros: ";
	cin>>n; 
	for(int i=0; i<n; i++){
		cout<<"Ingrese numero: ";
		cin>>num[i];
	}
	cout<<"Antes del ordenamiento: ";
	Mostrar_Vector();
	Ordenar_Seleccion();
	cout<<endl;
	
	cout<<"Ordenamiento por seleccion: ";
	Mostrar_Vector();
	getch();
	
	return 0;
}
