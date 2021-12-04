//Ejercicio 7.36
#include<iostream>
#include <string>
using namespace std;
string cadena, cadena_invertida;
int main(){
	
	cout<<"Escriba una cadena: "<<endl;
	getline(cin, cadena); //leemos la cadena
	for(int i=cadena.size()-1; i>=0; i--){
		cadena_invertida+=cadena.at(i);
	}
	cout<<"La cadena invertida es: ";
	cout<<cadena_invertida<<endl;
	return 0;
}
