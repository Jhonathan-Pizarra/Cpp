#include <iostream>
#include <cstdlib>
#include <ctime> //importamos esta librería para poder hacer uso del tiempo de nuestra máquina
using namespace std;

int main () {
    //Pero aun queda el problema ¿Cómo genero randoms x cada vez que se ejecute el programa sin cambiar el valor semilla?
    //Usando time:
    srand(time(0)); //usando time lograremos que los randoms cambien cada vez que ejecutemos el programa,

    //Usamos la funcion time() para conseguir el numero de segundos en nuestro sistema (que es de tipo solo lectura)
    //time(0) retorna la cuenta en segundos, y como está dentro de srand() el valor semilla se irá actualizando continuamente

    for (int x = 1; x <= 10; x++) {
        cout << 1 + (rand() % 6) << endl;
    }
}
