// Deber: Realizar un porgrama con cualquera de los m�todos expuestos
// Yo escoj�: Ordenamiento por m�todo burbuja.

#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int numeros[]={4,1,2,3,5};
	int i,j,aux;
	

	cout<<"\t Metodo Burbuja"<<endl<<endl;
	
	//Algoritmo del m�todo burbuja
	cout<<"El orden de los numeros es: ";
	cout<<numeros[0]<<" ";
	cout<<numeros[1]<<" ";
	cout<<numeros[2]<<" ";	
	cout<<numeros[3]<<" ";	
	cout<<numeros[4]<<" ";
	cout<<endl;		
		
		
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(numeros[j]>numeros[j+1]){
				aux=numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]= aux;
			}
		}
	
	}
	
	cout<<"En orden Ascendente: ";
	for(i=0; i<5; i++){
		cout<<numeros[i]<<" ";
	
	}
	cout<<endl;
	cout<<"En orden Descendente: ";
	for(i=4; i>=0; i--){
		cout<<numeros[i]<<" ";
	
	}
	cout<<endl;
	
	
	
	
	getch();
	return 0;
	
}
