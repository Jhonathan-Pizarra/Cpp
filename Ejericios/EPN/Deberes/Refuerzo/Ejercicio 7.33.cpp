//Busqueda Lineal
//Ejercicio 7.33

#include<iostream>
#include <conio.h>
using namespace std;
int main(){ 
	int a[]={3,4,2,1,5};
	int dato;
	int i;
	char band= 'F';
	
	dato= 4;
	
	//Busqueda Secuencial
	i=0;
	while ((band== 'F')&&(i<5)){
		if(a[i]== dato){
			band = 'V';
		}
		i++;
	}
	if(band== 'F'){
		cout<<"El numero a buscar no existe en el arreglo"<<endl;
		
	}
	else if(band=='V'){
		cout<<"El numero a sido encotnrado en: "<<i-1<<endl;
	}	
	
	getch();
	return 0;
	
}
