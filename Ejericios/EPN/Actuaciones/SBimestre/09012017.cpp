//Declare un arreglo de 10 elementos, inicialize sus valores y sobreescriba los numeros pares.
#include <iostream>
using namespace std;
int main(){
	
	//             (0,1,2,3,4,5,6,7,8,9)
	float arreglo[]={0,1,2,3,4,5,6,7,8,9,10};
	//             (25,3,88,5,37,7,3,9)
	
	cout<<"Uso del sizeof"<<endl;
	cout<<sizeof(arreglo)<<endl;
	cout<<sizeof(arreglo[4])<<endl; //4 bits
	cout<<sizeof(arreglo)/sizeof(int)<<endl; //Numero de elementos que tiene
	cout<<endl;
	
	cout<<"Arreglos"
	//Ten en cuenta que se comienza a contar desde cero
	cout<<arreglo[1];cout<<" ";
	cout<<arreglo[3];cout<<" ";
	cout<<arreglo[5];cout<<" ";
	cout<<arreglo[7];cout<<" ";
	cout<<arreglo[9];cout<<" ";
	cout<<endl;
	
	cout<<"Ingrese un numero: "<<endl;
	cin>>arreglo[1];//=25;
	cin>>arreglo[3];//=88;
	cin>>arreglo[5];//=57;
	cin>>arreglo[7];//=12;
	cin>>arreglo[9];//=24;
	cout<<endl;
	
    cout<<arreglo[1];cout<<" ";
	cout<<arreglo[3];cout<<" ";
	cout<<arreglo[5];cout<<" ";
	cout<<arreglo[7];cout<<" ";
	cout<<arreglo[9];cout<<" ";
	
	
	// for (int i=0; i<0; i++){
	// cout<<arreglo[i <<endl;
	
//Deber:	//Crear un arreglo de 10 elementos e ingresar mediante el teclado con un for los elementos, posterirormente imprimir su contenido
	
}
