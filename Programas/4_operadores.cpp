//TEMAS
//Operadores Artiméticos
//Operadores de asignacion
//Operadores de incremento/decremento
//Operadores Relacionales
// Operadores Lógicos

#include <iostream>
using namespace std;

int main(){
    //Operadores Aritméticos
    // El orden de resolución de operaciones es el mismo que el del álgebra y aritmétca: primero las multipliciones, luego las diviones, luego sumas y al final restas
    //  * Si se tiene alguna operacion entre paréntesis () eso se hará primero
    //  *  + (addition), - (subtraction), * (multiplication), / (division), and % (modulus division).
    //  *  C++ tiene loa peculariadad de que el operador "/" devolverá un entero si ambos operandos son enteros o no
    //  *  Cuando alguno de los operandos o los 2 operandos son flotantes o decimales, el resultado será un numero decimal
    //  *  El operador % devuelve solo el resto de la división de enteros. La división de módulos no se puede realizar en flotadores o dobles.

    //Operadores de Asignación
    //    int x = 2;
    //    x += 1 -> x = x + 1 ;  // 3
    //    x -= 1 -> x = x - 1;  // 2
    //    x *= 3;  // 6
    //    x /= 2;  // 3
    //    x %= 2;  // 1
    //    x += 3 * 2;  // 7   La expresión completa de la derecha se evalúa y luego se agrega a x antes de asignarse a x. Puedes pensar en el enunciado como x = x + (3 * 2).

    //Operadores de incremento/decrementeo
    //Solo se usan para enteros, ojo
    // int x = 2;
    // x++; //es como decir x = x + 1 => 2 = 2 +1 = 3
    // x--; //es como decir x = x - 1 => 2 = 2 - 1 = 1

    //Posfijo: x++; Evalua la expresion y luego añade 1
    //Prefijo: ++x; Añade 1 y luego evalua la expresion
    //Aplica el mismo concepto para el decremento.

    //Operadores Relacionales
    //< menor que
    //<= menor o igual que
    //> mayor que
    //> = mayor o igual que
    //== igual a
    //! = No igual a
    // = asignación

    // Operadores Lógicos
    // && AND
    // || OR
    // ! NOT



    return 0;
}
