#include <iostream>
using namespace std;

int addNumbers(int x, int y) {
    int result = x + y;
    return result;
}

int addNumbers2(int x, int y, int z, int a) {
    int result = x + y + z + a;
    return result;
}


int main() {
    cout << addNumbers(4, 5);
    cout << endl;
    //También puedes asignar el valor retornado a una variable:
    int z = addNumbers(25, 5);
    cout << z << endl;

    //También pueden tener n parámetros
    cout << addNumbers2(1, 7, 8, 3);
}

