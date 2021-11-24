/*
 * Si bien el tamaño asignado para los diferentes tipos de datos depende de la arquitectura de la computadora que usa para ejecutar sus programas,
 * C ++ garantiza un tamaño mínimo para los tipos de datos básicos:
 */

#include <iostream>
using namespace std;

int main()
{
    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    int var = 50;
    cout << "var: " << sizeof(var) << endl;

    //Sizeof Array - double
    double myArr[10];
    cout << sizeof(myArr) << endl; //output: 80

    //Sizeof Array - int
    int numbers[100];
    cout << sizeof(numbers) / sizeof(numbers[0]); //output: 100

    return 0;
}