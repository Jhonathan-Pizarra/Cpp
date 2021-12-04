// Realizar una aplicacion que permita el ingreso de una cadena y la invierta
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string cadena ;
    string cadena_invertida ;
    
    cout<<"Ingrese una cadena (No use espacios): ";
    cin>>cadena;
    cout<<endl;
 
    for (int i = cadena.size(); i >=0 ; i--)
        cadena_invertida += cadena[i];
 
    cout<<"El texto normal es: "<<cadena<<endl;
    
    cout<<"El texto invertido es: "<<cadena_invertida<<endl;
    
    
    return 0;
}
