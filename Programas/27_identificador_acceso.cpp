#include <iostream>
#include <string>
using namespace std;

class myClass {
public: //s public; it can be accessed and modified from outside the code.
    void setName(string x) {
        name = x;
    }
private:  //A private member cannot be accessed, or even viewed, from outside the class; it can be accessed only from within the class.//
    string name;
};

int main() {
    myClass myObj;
    myObj.setName("John");
    //cout << myObj.name; The name attribute is private and not accessible from the outside.

    return 0;
}
