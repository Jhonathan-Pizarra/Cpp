// ejercicio 7.3
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int cuentas[10]={0,0,0,0,0,0,0,0,0,0};// parte 1
	int bono[15];
	double temperaturaMensual[12];
	int valor;
	
	
	//parte 2
	for(int i=0; i<15; i++){
	cout << "ingrese el valor de cada bono ";
	cin>>valor;
	bono[i]=valor+1; 
	}
	
	//parte 3
	cout<<endl;
	for(int i=0; i<12 ; i++){
	cout << "ingrese temperatura mensula: ";
	cin>>temperaturaMensual[i]; 
	}
	
	//parte 4
	int mejor=0,aux=0,limite=0;
	cout << "Ingrese el limite "<<endl;
	cin>>limite;
	int mejorPuntuaciones [limite];
	for (int i=0; i< limite; i++){
		cout << "Ingrese las puntuaciones "<<i<<" ";
		cin>>mejorPuntuaciones [i];
	}
	
	int temp;
	for (int i=0; i<limite; i++){
   		for (int j=i+1; j<limite;j++){
       		if (mejorPuntuaciones[i] < mejorPuntuaciones[j])
       			{
	           		temp = mejorPuntuaciones[i];
	           		mejorPuntuaciones[i] = mejorPuntuaciones[j];
	           		mejorPuntuaciones[j] = temp;
           		}
		   }
	}
	
	//impresiones
	for(int i=0; i<10; i++){
	cout<<cuentas[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0; i<15; i++){
	cout<<bono[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0; i<12 ; i++){
	cout << " temperatura es: " << temperaturaMensual[i]<<endl; 
	}
	cout<<endl;
	
	for(int i=0; i<5 ; i++){
	cout << " Mejor puntuacion es: " << mejorPuntuaciones[i]<<endl; 
	}
	cout<<endl;
	
	getch();
	return 0;
}
