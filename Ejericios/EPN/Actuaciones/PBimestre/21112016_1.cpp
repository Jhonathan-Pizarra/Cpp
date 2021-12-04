//Programa para ver si un numero es positivo o negativo
#include <iostream>
using namespace std;
int main()
{
	int a;
	
	cout<<"Bienvenido"<<endl;
	cout<<"Ingrese a"<<endl;
	cin>>a;
	
	if(a>0){
		cout<<"Su numero ingresado es positivo"<<endl;
	}
	else if(a<0){
		cout<<"Su numero ingresado es negativo"<<endl;
	}
	else {
		cout<<"Su numero ingresado es cero"<<endl;
	}
	
}
