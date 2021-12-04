//Programa para pedirle al usuario un entero del 1 al 5, cuando ingrese 1, nos muestre la palabra 1 
#include <iostream>
using namespace std;
int main ()
{
	int a;
	char op;

	
	cout<<"Bienvenido"<<endl;
	cout<<"Ingrese una letra"<<endl;
	cin>>op;
		switch (op){
	case 'a':
	cout<<"ingresaste a"<<endl;
	cout<<"Hola"<<endl;
		break;
	case 'b':
	cout<<"Ingresaste b"<<endl;
	cout<<"Hasta pronto"<<endl;
		break;
	default:
		cout<<"Opcion no valida"<<endl;
		cout<<"Vuelve a intentar"<<endl;
	break;
		}
	
		
	 
		system ("pause");	
		
		
	}
	
