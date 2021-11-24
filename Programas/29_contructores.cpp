#include <iostream>
using namespace std;

class myClass {
public:
    myClass() { //Este es el constructor, y es automaticamete llamado cuando un objeto de clase es creado
        cout <<"Hey";
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
    myClass myObj;

    return 0;
}