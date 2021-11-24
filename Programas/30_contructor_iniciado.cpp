#include <iostream>
using namespace std;

class myClass {
public:
    myClass(string nm) { //Es posible tener n constructores que tomen n parámetros
        setName(nm);
    }
    void setName(string x) {
        name = x;
    }
    string getName() {
        return name;
    }
private:
    string name;
};

int main() {
    //Tenemos 2 objetos y usamos el contructor para pasarle un valor inicial al atributo nombre
    myClass ob1("John");
    myClass ob2("George");
    cout << ob1.getName();
}