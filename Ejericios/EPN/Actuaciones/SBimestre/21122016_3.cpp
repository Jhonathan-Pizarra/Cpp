//Hcer una funcion principal que me llame a una funcion que sume dos numeros (Pasar parametros por refencia)
#include <iostream>
using namespace std;
void suma(int,int);
int main (){
	int a,b;
	
	cout<<"Ingrese un numero"<<endl;
	cin>>a;
	cout<<"Ingrese un numero"<<endl;
	cin>>b;
	cout<<"  "<<endl;
	cout<<"Funcion principal"<<endl;
	suma(a,b);

	cout<<"Funcion principal"<<endl;
	return 0;

}
void suma(int a, int b){
	cout<<a+b<<endl;
}


