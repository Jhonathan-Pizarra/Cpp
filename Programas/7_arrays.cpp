#include <iostream>
using namespace std;

int main()
{
    //En C++ los arreglos se comenzan contando desde 0
    int a[5] = {11, 45, 62, 70, 88}; //tamaño: 5
    int b[] = {11, 45, 62, 70, 88}; //tamaño: definido por los elementos

    cout << b[0] << endl;
    // Outputs 11

    cout<< b[3] << endl;
    // Outputs 70

    //Las posiciones de los elementos también pueden ser usados para reasiganr un valro al elemento
    b[2] = 42; //Ahora el elementos 2 entrá el valor 42, ya no 45. "Hemos accedido y modificado el valor de un elemento del array"

    return 0;
}
