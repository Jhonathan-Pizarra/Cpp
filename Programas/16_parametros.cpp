#include <iostream>
using namespace std;

//Function declaration
void printSomething(int x); //si queremos usar argumentos, debemos definir parámetros

int main() {
    printSomething(5); //El valor 5 es pasado a la funcion como argumento
}

//Function definition
void printSomething(int x) { //Y al llegar aca es asignado como parámetro formal de la función
    cout << x <<endl;
    //Hacer cambios al parámetro dentro de la función no latero el argumento
}
