///*
// * Muchas veces, no sabe de antemano cuánta memoria necesitará para almacenar información particular en una variable definida
// * pero el tamaño de la memoria requerida se puede determinar en tiempo de ejecución.
// * Puedes asignar memoria en tiempo de ejecución dentro del montón para la variable de un tipo determinado utilizando el operador new,
// * new devuelve la dirección del espacio asignado.
// *
// * Por ejemplo:
// * new int  , asigna el tamaño de memoria necesario para almacenar un número entero en el montón y devuelve esa dirección
// */
//
///*
// * MEMORIA DINÁMICA
// * Para las variables locales en la pila, la gestión de la memoria se realiza automáticamente.
// * En el montón, es necesario manejar manualmente la memoria asignada dinámicamente y usar el operador de eliminación para liberar la memoria cuando ya no sea necesaria.
// * esto se logra con "delete", por ejemplo:
// * delete pointer;
// */
//
#include <iostream>
using namespace std;

int main()
{
    int *p = new int; // request memory
    *p = 5; // store value

    cout << *p << endl; // use value

    //Esta declaración libera la memoria apuntada por el puntero.
    delete p; // free up the memory

    /*
     * Olvidar liberar memoria que se ha asignado con la nueva palabra clave resultará en pérdidas de memoria,
     * porque esa memoria permanecerá asignada hasta que el programa se apague.
     */

    //Punteros colgantes
    /*El operador de eliminación libera la memoria asignada para la variable, pero no elimina el puntero en sí, ya que el puntero se almacena en la pila.
    Los punteros que se dejan apuntando a ubicaciones de memoria inexistentes se denominan punteros colgantes. */
    int *p2 = new int; // request memory
    *p2 = 5; // store value

    delete p2; // free up the memory
    // now p is a dangling pointer

    p2 = new int; // reuse for a new address

    //Puntero nulo
    /*
     * El puntero NULL es una constante con un valor de cero que se define en varias de las bibliotecas estándar, incluido iostream.
     * Es una buena práctica asignar NULL a una variable de puntero cuando la declara, en caso de que no tenga una dirección exacta para asignar.
     * Un puntero asignado a NULL se denomina puntero nulo. Por ejemplo: int * ptr = NULL;
     */
    int *p3 = NULL; // Pointer initialized with null
    p3 = new int[20]; // Request memory
    delete [] p3; // Delete array pointed to by p

    /*
     * La asignación de memoria dinámica es útil en muchas situaciones, como cuando su programa depende de la entrada.
     * Por ejemplo, cuando su programa necesita leer un archivo de imagen,
     * no sabe de antemano el tamaño del archivo de imagen y la memoria necesaria para almacenar la imagen.
     */


    return 0;
}


