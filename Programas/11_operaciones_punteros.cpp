#include <iostream>
using namespace std;

/*
 * Operador de dirección (&): devuelve la dirección de memoria de su operando.
 * Operador de contenido de (o desreferencia) (*): devuelve el valor de la variable ubicada en la dirección especificada por su operando.
*/

/*
 * El asterisco (*) se usa para declarar un puntero con el simple propósito de indicar que es un puntero (el asterisco es parte de su especificador compuesto de tipo).
 * No confunda esto con el operador de desreferencia, que se utiliza para obtener el valor ubicado en la dirección especificada.
 * Son simplemente dos cosas diferentes representadas con el mismo signo.
*/

int main()
{
    int var = 50;
    int  *p;
    p = &var;

    cout << var << endl;
    // Outputs 50 (the value of var)

    cout << p << endl;
    // Outputs 0x29fee8 (var's memory location)

    cout << *p << endl;

/* Outputs 50 (the value of the variable stored in the pointer p) */

    return 0;
}

