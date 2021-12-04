//Examen supletorio
//Ejercicio 1

#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;


void ejercicio_1(){
	//Triangulo hacia abajo
	
	for(int i=0; i<=2; i++){ //Para las filas
	cout<<"*"<<endl;
		for(int j=0; j<=i; j++){ //Para las columnas
		cout<<"*";
		cout<<" ";
		
		}
	}
	
	for(int i=0; i<=2; i++){ //Para las filas
	cout<<"*"<<endl;
		for(int j=3; j<=3; j++){ //Para las columnas
		cout<<"*";
		cout<<" ";
		
		}
	}
	
	
	return;
} 

//Ejercicio 2

void ejercicio_2_parte1(){
	//Parte 1
		int n; 
		int cuadrado;
		
		cout<<"Escriba un numero: ";
		cin>>n;
		
		cuadrado=n*n;
		cout<<"El cuadrado del numero ingresado es: "<<cuadrado<<endl;
		cout<<endl;
}

void ejercicio_2_parte2(){

	//Parte 2
	    int a; //cateto a
	    int b; //cateto b
	    int c; //un auxiliar
	    float hipo;
	    
	    
	    cout<<"Ingrese el valor del cateto a: ";
		cin>>a;
		
		cout<<"Ingrese el valor del cateto b: ";
		cin>>b;
		
		cout<<endl;
		
		c=(a*a+b*b);
		hipo=pow(c,0.5);
		
		cout<<"La hipotenusa del triangulo es: "<<hipo<<endl;
		
	
	
	return;
}

void ejercicio_2(){
	
	ejercicio_2_parte1();
	ejercicio_2_parte2();
	
	return;
	
}  


//Ejercicio 3
/*
void ejercicio_3(){
	
	int filas;
	int columnas;
	int matriz[filas][columnas];
	int aux;
	
	cout<<"Cuantas filas?: ";
	cin>>filas;
	cout<<endl;
	
	cout<<"Cuantas columnas?: ";
	cin>>columnas;
	cout<<endl;
	
	for(int i=0; i<=filas; i++){
		for(int j=0; j<=columnas; j++){
			

		}
	}
	
	
	return;
}
*/

//Ejercicio 4

void ejercicio_4(){
	
	int arreglo_1 []={1,2,3,4,5};
	int arreglo_2 []={1,2,3,4,5};
	int aux , aux1, aux2, aux3, aux4, aux5;
	int aux6, aux7, aux8, aux9, aux10;
	 //PARTE 1
	cout<<"Arreglo aleatorio: "<<endl;
	aux=arreglo_1 [0];	
	aux1=arreglo_1 [1];
	aux2=arreglo_1 [2];
	aux3=arreglo_1 [3];
	aux4=arreglo_1 [4];

	
	aux=rand()%6;
	aux1=rand()%6;
	aux2=rand()%6;
	aux3=rand()%6;
	aux4=rand()%6;
	
	cout<<aux;
	cout<<aux1;
	cout<<aux2;
	cout<<aux3;
	cout<<aux4;
//Parte 2
cout<<endl;
cout<<endl;
     cout<<"Arreglo aleatorio: "<<endl;
    
	aux=arreglo_2 [0];	
	aux1=arreglo_2 [1];
	aux2=arreglo_2 [2];
	aux3=arreglo_2 [3];
	aux4=arreglo_2 [4];

	
	aux6=rand()%10;
	aux7=rand()%10;
	aux8=rand()%10;
	aux9=rand()%10;
	aux10=rand()%10;
	
	cout<<aux6;
	cout<<aux7;
	cout<<aux8;
	cout<<aux9;
	cout<<aux10;

	
	
	return;
}


int main(){
	ejercicio_1();
	cout<<endl;
	cout<<endl;
	
  ejercicio_2();
   cout<<endl;
   cout<<endl;
//	ejercicio_3();
     ejercicio_4();
	
	return 0;
} 
