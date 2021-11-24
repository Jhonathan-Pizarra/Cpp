#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
    //La función srand se usa para generar numeros aleatarios, usa el mismo algoritmo que rand()
    srand(98); //Pero, a diferencia, nos permite especificar un valor semilla como parámetro
    //Camboar el valor de la semmilla cambiará el valor que retorne el rand, sin embargo si le especifico el mismo argumento el reusltado será el mismo que se genere (como en rand)

    for (int x = 1; x <= 5; x++) {
        cout << 1 + (rand() % 6) << endl;
    }
}
