#include <iostream>
using namespace std;

class Mother {
public:
    Mother()
    {
        cout <<"Mother ctor"<<endl;
    }
    ~Mother()
    {
        cout <<"Mother dtor"<<endl;
    }
};

/*
 class Daughter: public Mother {
    public:
        Daughter()
        {
            cout <<"Daughter ctor"<<endl;
        }
        ~Daughter()
        {
            cout <<"Daughter dtor"<<endl;
        }
};
 */
int main() {
    Mother m;
    //  Daughter m;
}

//Si creamos un objeto hija, lo qu eva a apasar es:
/*
- Mother ctor
- Dughter ctor
- Daughter dtor
- Mother dtor
 */