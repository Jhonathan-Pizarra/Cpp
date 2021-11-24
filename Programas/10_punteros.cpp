#include <iostream>
using namespace std;

int main()
{
    int score = 5;
    cout << &score << endl;

    //Asignar la dirección de una variable a un puntero
    int score2 = 10;
    int *score2Ptr; //declaro puntero
    score2Ptr = &score2; //apunto a la dirección de score2 y la asigno en memoria

    //También puede ser *score2Ptr = &score2;
    cout << score2Ptr << endl; //output: 0x7ffcc9151bb4 es la dirección de score2

    return 0;
}



