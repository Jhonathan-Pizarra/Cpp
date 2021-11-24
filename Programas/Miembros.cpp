#include "Miembros.h"
#include <iostream>
using namespace std;

//The constructor is used to create the object, assigning two parameters to the member variables via the member initialization list.
Miembros::Miembros(int a, int b)
        : regVar(a), constVar(b) //Lee la teoría "Miembros" para entender esos ":"
{
    cout << regVar << endl;
    cout << constVar << endl;
}

int main() {
    Miembros obj(42, 33);
}
