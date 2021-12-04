// Ejercicio 7.11 

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	char ordenacion;
	cout<<endl;
	int valores [9];
	cout<<endl;
	
	for (int i=0; i<10 ; i++ ){
		cout<< "Ingrese el "<<i<<" valor: ";
		cin>>valores[i];	
	}
	
	cout<<endl;
	cout<<" Los valores ingresados son: ";
	for (int a=0; a< 10; a++){
		cout<< "El valor "<< a << " es: "<< valores[a]<< endl;
	}
	
	cout<<endl;
	cout<<endl;
	
	
	int temp;
	for (int i=0; i< 10 ; i++){
   	for (int j=i+1; j< 10 ;j++){
       		if (valores[i] > valores[j])
       			{
	           		temp = valores[i];
	           		valores[i] = valores[j];
	           		valores[j] = temp;
           		}
		   }
		}
	
		cout<<endl;
		cout<<" Arreglo ordenado: ";
		for (int i=0; i< 10; i++){
				cout<<valores[i]<<"  ";
		}
		
  getch();   
  return 0;
}
