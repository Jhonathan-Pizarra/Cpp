//Programa para hacer que se impriman los números múltiplos del 3.
#include <iostream>
using namespace std;
int main ()
{
	int i;
	int j;
	int k=0;
	
	cout <<"Bienvenido Usuario"<<endl;
	cout<<"Ingrese un numero"<<endl;
	cin>>i;
	cout<<"Ingrese otro numero"<<endl;
	cin>>j;
	
	cout<<"Los numero multiplos de 3 que hay entre sus numeros son:"<<endl;
	while (i<=j){
		if (i%3==0){
			cout<<i<<endl;
			k++;
		}
		i++;
	}
	cout<<"Entre sus numeros hay: "<<endl;
    cout<<k<< " Digitos multiplos del 3 "<<endl;
}
