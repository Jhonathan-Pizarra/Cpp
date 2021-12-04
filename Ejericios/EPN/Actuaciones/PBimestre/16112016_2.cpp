// Programa para Hacer que calcule el valor total : Subrtotal + (el iva por el Subtotal)
// Hacer que calcule el valor total (Subrtotal mas el iva) declaremos datos, uno ue sea subtotal y uno iva y no total, al iva icicial de 0.14
#include <iostream>
#define I 0.14
using namespace std;
int main ()
{
	float S; // T representa a el total, , representa al iva, y S , representa al subtotal
	cout<<"Ingrese el valor del Subtotal:"<<endl;
	cin>>S;
	cout<<"Su valor total es:"<<endl;
	cout<<S+(S*I)<<endl;
	system("pause");
	return 0;
}
// Si pongo float IVA= x valor, 
// en cout<<"Iva", me saldra la palabra Iva.Pero si pongo <<Iva
