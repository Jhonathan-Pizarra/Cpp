#include "Constantes.h"
#include <iostream>
using namespace std;

void Constantes::myPrint() const {
    cout <<"Hello"<<endl;
}

int main() {
    const Constantes obj;
    obj.myPrint();
}