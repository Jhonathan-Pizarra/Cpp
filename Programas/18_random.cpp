#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    //Forma #1 de generar randoms
    cout << rand() <<endl;
    //Forma #2 de generar randoms
    for (int x = 1; x <= 5; x++) {
        cout << rand() << endl;
    }
    //Forma #3 de generar randoms(Del 1 al 6)
    for (int x = 1; x <= 5; x++) {
        cout << 1 + (rand() % 6) << endl;
    }
} //Sin embaro, la función rand() solo retornará un pseudo random, es decir, que cada vez que el código se ejecute se generarán los mismo numeros
