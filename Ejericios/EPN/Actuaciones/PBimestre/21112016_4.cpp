//Programa para pedirle al usuario un entero del 1 al 5, cuando ingrese 1, nos muestre la palabra 1 
#include <iostream>
using namespace std;
int main ()
{
	int a;
	char opcion;
	
	cout<<"Bienvenido"<<endl;
	cout<<"Ingrese un numero del 1 al 5"<<endl;
	cin>>opcion;
	
	if (opcion=='1'){
		cout<<"Uno"<<endl;
		cout<<"Lunes"<<endl;
	}
	else if (opcion=='2'){
		cout<<"Dos"<<endl;
		cout<<"Martes"<<endl;
	}
	else if (opcion=='3'){
		cout<<"Tres"<<endl;
		cout<<"Miercoles"<<endl;
	}
	else if (opcion=='4'){
		cout<<"Cuatro"<<endl;
		cout<<"Jueves"<<endl;
	}
	else if (opcion=='5'){
		cout<<"Cinco"<<endl;
		cout<<"Viernes"<<endl;
	}
	else if(opcion=='6'){
		cout<<"Seis"<<endl;
		cout<<"Sabado"<<endl;
	}
	else if(opcion=='7'){
		cout<<"Siete"<<endl;
		cout<<"Domingo"<<endl;
	}
	else{
		cout<<"opcion no valida"<<endl;
	}
	 
		system ("pause");	
		
		
	}
	
