#include <iostream>
using namespace std;

//Declarar una funcion antes de llamarla
void printSomething() {
    cout << "Hi there!";
}

int main() {
    printSomething();
}

//Declarar una función antes de un main() resultará en un error, sin embargo, si se quiere definir despúes de main, o incluso en otro archivo, se deberán usar prototipos
