//Ejercicio 7.35
#include <iostream>
using namespace std;
void Imprimir_Arreglo (int [1][3]);
int main(){
	
	int arreglo1 [2][2]= {(1,2,3),(4,5,6)};
	int arreglo2 [2][3]= {1,2,3,4,5};
	int arreglo3 [2][2]= {(2,2),(4)};
	
	cout<<"Los valores del arreglo 1 por filas son: ";
	cout<<endl;
	Imprimir_Arreglo(arreglo1);
	
	cout<<"Los valores del arreglo 2 por filas son: ";
	cout<<endl;
	Imprimir_Arreglo(arreglo2);
	
	cout<<"Los valores del arreglo 3 por filas son: ";
	cout<<endl;
	Imprimir_Arreglo(arreglo3);
	system ("pause");
}
void Imprimir_Arreglo(int a[][2]);
{
	for (int i=0; i<2; i++){
	}
	for (int j=0; j<2; j++)
	cout<<a[i][j]<<" ";
	cout<<endl;
}
