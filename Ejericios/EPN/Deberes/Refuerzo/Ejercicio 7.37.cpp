// Ejercicio 7.37
#include <stdio.h>
#include <iostream>
using namespace std;
 int main(){
 	
 	int num [10];
 	int menor;
 	int i;
 	cout<<"Ingrese 10 numeros: "<<endl;
 	
 	for(i=0; i<10; i++){
 		cin>>num[i];
	 }
	 menor=num[0];
 	
 	for(i=1; i<10; i++){
 		if (num[i]<menor){
 			menor=num[i];
		 }
	 }
 	
 	cout<<"En numero menor es: "<<menor;
 	
 	
 	
 	
 	return 0;
 }
