

#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
	
	//Comenzamos ingresando el limite para el array 
	int lim;
	cout<< "\t 	Numero de ingresos: ";
	cin>>lim;
	int valores [lim];
	cout<<endl;
	
	for (int i=0; i <lim ;i++ ){
	cout<< "Introduzca el ["<<i<<"] valor: ";
	cin>>valores[i];	
	}
	
	cout<<endl;
	cout<<"\Valores ingresados son: "<<endl;
	
	for (int a=0; a<lim; a++){
		cout<< "El valor "<< a << " es: "<< valores[a]<< endl;
	}
	
	cout<<endl;
	int temp;
	for (int i=0; i<lim; i++){
   	for (int j=i+1; j<lim;j++){
   
       		if (valores[i] > valores[j])
       			{
	           		temp = valores[i];
	           		valores[i] = valores[j];
	           		valores[j] = temp;
           		}
		   }
		}

		cout<<endl;
		cout<<"El arreglo ardenado es: \n";
		for (int i=0; i<lim; i++)
		{
			cout<<valores[i]<<"  ";
		}
  getch();   
  return 0;
}
