//Funciones

#include <iostream>
using namespace std;
int areacuadrado (int ); 
int areatriangulo (int, int );
int areacirculo (int );
void menu ();

int main (){

	int opcion;
	float lado,base,altura,radio;
	do{
		menu ();
	}while (opcion!=4);
	
	
	//El area del cuadrado
	
	return 0;
}


 int areacuadrado(int lado){ 
 cout<<lado*lado;
 	return 0;
 }
 int areatriangulo (int base, int altura){
 cout<<(base*altura)/2;
 	return 0; 	
 	
 }
 
  int areacirculo (int radio){ 
 	cout<<(3.1416)*radio*radio;
 	
 	return 0;
 }
 void menu(){
 	int opcion;
	cout<<"Elija su opcion"<<endl;
	cout<<"Presione 1 para el cuadrado"<<endl;
	cout<<"Presione 2 para triangulo"<<endl;
	cout<<"Presione 3 para circulo"<<endl;
	cout<<"Presione 4 para salir"<<endl;
	cin>>opcion;
	
	if (opcion==1){
		areacuadrado(2);
	}
	else if (opcion==2){
		areatriangulo(3,4);
	}
	else if (opcion==3){
		areacirculo (3);
	}
 
	
}

