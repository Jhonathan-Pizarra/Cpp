#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass();
    void myPrint();
};

MyClass::MyClass() {
}
void MyClass::myPrint() {
    cout <<"Hello"<<endl;
}

int main() {
    MyClass obj;
    MyClass *ptr = &obj;
    ptr->myPrint(); //Con objetos, accedemos a el mediante ".", pero con objetos en memoria, accedemos a este mediante "->"
}
