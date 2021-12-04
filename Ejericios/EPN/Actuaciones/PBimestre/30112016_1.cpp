//Programa que le pida al usuario un numero de inicio y un numero de fin y que me muestre los numeros pares que hay entre esos numeros y aparte me muestres cuantos numeros pares hay entre esos nuemros
#include <iostream>
using namespace std;
int main ()
{
	int i,j;
	int k=0;
	
	cout<<"Bienvenido Usuario"<<endl;
	cout<<"Ingrese dos numeros"<<endl;
	cin>>i;
	cin>>j;
	
	cout<<"Los numeros que pares que hay entre sus numeros son: "<<endl;
	while (i<=j){ //Le he puesto <= porque eso dennota que va desde el inicio hasta el fin si no lo pongo el igual solo me imprime los numeros pero no incluye a los originales
		if(i%2==0){
			cout<<i<<endl;
			k++;
		}
		i++; 
	}
	cout<<"Entre sus numeros hay: "<<endl;
	cout<<k<< " Digitos "<<endl;
	
	
}
