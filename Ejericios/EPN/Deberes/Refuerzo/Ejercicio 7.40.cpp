//Ejercicio 7.39
#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
	int n;
	int M;
	
	cout<<"Introduzca el numero de elementos: "<<endl;
	cin>>n;
	cout<<"Resultado: "<<n<<endl;
	
	int lista[n];
	for (int i=0; i<n; i++){
		cout<<"Introduzca un numero: ";
		cin>>lista[i];
	}
	

  int min=lista[0];
  for( int i=0; i<n; i++){
  	if(lista [i]<min){
  		min=lista[i];
	  }
  }
  cout<<"El numero mas pequeño de la lsita es: "<<min<<endl;
  
}
