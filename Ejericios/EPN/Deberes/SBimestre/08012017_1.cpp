//Porgrama para hallar la sucecion de Fibonaci.
//Programa para calcular el factorial de un numero.
//La sucesion de fibonacci la hice que llegue hasta que el contador sea igual a 10.
#include <iostream>
#include <conio.h>

using namespace std;

int factorial(int);
int fibonacci(int);
int main(){
	int m;
	int n=2;
	int numero = 1;
	int numero2=0;
	int contador = 0;
	
	cout<<"La serie de Fibonacci:"<<endl;
	//cout<<factorial(n);
	for(int contador = 0; contador <= 10; contador++){
		cout<<fibonacci(contador)<<endl;
	}
	cout<<endl;
	
	cout<<"El factorial de un numero"<<endl;
	cout<<"Ingrese un numero: ";
	cin>>m;
	cout<<"El factorial de "<<m<<" es: "<<factorial(m);

	getch();
	return 0;
}
int factorial(int numero2){
	int m;

	
	if(numero2 <=1){
		return 1;
	}else{
		return numero2*factorial(numero2-1);
	}
	
}
int fibonacci(int numero){
if((numero==0)||(numero == 1)){
		return numero;
	}else{
		return fibonacci(numero - 1) + fibonacci(numero - 2);
	
	
	}	
}
	
	
