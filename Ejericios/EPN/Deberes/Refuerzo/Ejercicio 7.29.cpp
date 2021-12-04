// Ejercicio 7.29
// La Criba de Eratostenes
#include <iostream>
using namespace std;
int main(){
	
	int numero;
	int i,j ;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	cout<<"Los numero primos existentes entre 1 y "<<numero<<" son: "<<endl;
	bool primo [numero]; //tabla que indica si un numero es primo
	for(i=0; i<numero; i++){
		primo[i]=true;
	}	
	for (i=2; i<numero; i++){
		// Tachar multiplos: i*2, i*3; i*4...
		if(primo[i]){
			for(j=2; i*j<numero; j++){
			primo[i*j]=false; 
	}
	}
	}
	for(i=2; i<numero; i++){
		if(primo[i]) cout<<i<<" ";
	}
	cout<<endl;
		
	
	
	return 0;
}
