//Realizar  una  función  que  reciba  un  arreglo  y  su  tamaño,  y  entregue  la  suma  de  los elementos pares que contenga el arreglo


#include <iostream>
using namespace std;
int main(){
	
int arreglo[1],tamanio;
	
int suma_par = 0;
cout<<"Ingrese el tamanio de su arreglo: "<<endl;
cin>>tamanio;
cout<<endl;

    for(int i = 0 ; i < tamanio; i++){
    	
 cout<<"Ingrese un numero: ";
 cin>>arreglo[1];
 cout<<endl;
        if(arreglo[1] % 2 == 0){
            suma_par = suma_par + arreglo[1];
        }
        
    }
   
    cout<<"La suma de los numeros pares de su arreglo es: "<<suma_par;
        cout<<endl;
        
   return 0;        
        
 }
        
         
   
    
 
  
	
     
  
	

