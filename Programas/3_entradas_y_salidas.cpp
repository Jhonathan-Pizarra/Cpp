#include <iostream>
using namespace std;

int main() {

    //Para las salidas usamos:
    cout<<"Hola Mundo!"<<endl;

    //Para las entradas usamos:
    int numero = 0;
    cout<<"Escribe un numero: ";
    cin>>numero; //El IDE espera a que un numero sea ingresado

    //Encadenar un flujo de impresión:
    cout<<"El numero ingresado fue: "<<numero<<endl;

    //Encadenar un flujo de incersion
    int numero1, numero2 = 0;
    cout<<"Escribe dos numeros: ";
    cin>>numero1>>numero2;

    cout<<"Los numeros ingresados fueron: "<<numero1<<" y "<<numero2;

    return 0;
}

