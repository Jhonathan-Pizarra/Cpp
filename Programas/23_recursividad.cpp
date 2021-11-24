#include <iostream>
using namespace std;

int factorial(int n) {
    //Otro nombre para el caso de salida es "caso base", siempre es necesario uno, de no, el programa se ejecturaá para siempre
    if (n==1) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

int main() {
    cout << factorial(5);
}
