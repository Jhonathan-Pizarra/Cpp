#include "Selectores.h"
#include <iostream>
using namespace std;

Selectores::Selectores() {
}

void Selectores::myPrint() {
    cout <<"Hello"<<endl;
}

int main() {
    Selectores obj;
    obj.myPrint(); //El "." es quien me da acceso al método!
}