//Programa que nos pide los dos catetos y la hipotenusa
//Ejemplo: 5*5 +2*2=29, luego raiz de 29 es.. Eso es lo que calcula el programa
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float a;
	float b;
	float resultado;
	
	cout<<"Bienvenido"<<endl;
	cout<<"Ingrese el valor de cateto 1"<<endl;
	cin>> a;
	cout<<"Ingrese el valor del cateto 2"<<endl;
	cin>> b;
	resultado=sqrt((a*a)+(b*b));
	cout<<"El resultado es "<<resultado<<endl;
	
	return 0;
}
