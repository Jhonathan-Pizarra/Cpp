//TEMAS
//While
//Do-While
//For

#include <iostream>
using namespace std;

int main() {

    //While
    int num = 1;
    while (num < 6) {
        cout << "Number: " << num << endl;
        num = num + 1; //Incremento o decremento: tiene la funcion de en algun punto hacer falsa la declaracion
    }

    //Do-While
    int a = 0;
    do {
        cout << a << endl;
        a++;
    } while(a < 5);

    //For
    for (int x = 1; x < 10; x++) {
       cout<<x<<endl;
    }

    return 0;
}

