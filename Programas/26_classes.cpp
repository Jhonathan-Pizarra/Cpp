#include <iostream>
using namespace std;

class BankAccount {
public: //Especificador de acceso
    void sayHi() {
        cout << "Hi" << endl;
    }
};

int main()
{
    BankAccount test; //Objeto test de tipo BanckAccount
    test.sayHi(); //Accedemos a uno de sus métodos
}