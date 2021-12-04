//Calcular las raices de una funcion cuadrática, (De la forma ax2+bx+c)
#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int a;
	int b;
	int c;
	int D;
	float resultado;
	float resultado2;
	
	cout<<"Bienvenido"<<endl;
	cout<<"Ingrese a"<<endl;
	cin>> a;
	cout<<"Ingrese b"<<endl;
	cin>> b;
	cout<<"Ingrese c"<<endl;
	cin>>c;
	D=sqrt((b*b)-(4*a*c));
	resultado=((-1*b)+D/(2*a));
	resultado2=(((-1*b)-D)/(2*a));
	
	if(D<0){
		cout<<"Su determiante: Es imaginaria"<<endl; 
	}
	else if(D==0){
		cout<<"El valor de la Determinante es: 0"<<endl;
	}
	else {
		cout<<"El valor de la Determinante es: "<<resultado<<endl;
	}
	cout<<"El valor su raiz x1 es: "<<resultado<<endl;
	cout<<"El valor de raiz x2 es: "<<resultado2<<endl;
	
}
