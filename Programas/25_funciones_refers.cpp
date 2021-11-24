#include <iostream>
using namespace std;

void myFunc_Val(int x) {
    x = 100;
}

void myFunc_Ref(int *x) {
    *x = 100;
}

int main() {
    int varVal = 20;
    myFunc_Val(varVal);
    cout << varVal;

    cout << endl;

    int varRef = 10;
    myFunc_Ref(&varRef);
    cout << varRef;
}

/*
 * En general, pasar por valor es más rápido y efectivo.
 * Pase por referencia cuando su función necesite modificar el argumento, o cuando necesite pasar un tipo de datos, que use mucha memoria y sea costoso de copiar
 */