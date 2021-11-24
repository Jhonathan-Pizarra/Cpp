//TEMAS
//Ifs
//IF-Else
//Ifs anidados
//Ifs-else anidoados
//Switchs

#include <iostream>
using namespace std;

int main() {

    //If
    int a, b;
    a = 1;
    b = 2;

    if(a <= b){
        cout<<"1 es menor que 2";
    }
    cout<<endl;

    //IF-Else
    if(a < b){
        cout<<"1 es menor que 2";
    }
    else{
        cout<<"2 es menor que 1";
    }
    cout<<endl;

    //Ifs anidados
    int mark = 100;

    if (mark >= 50) {
        cout << "You passed." << endl;
        if (mark == 100) {
            cout <<"Perfect!" << endl;
        }
    }
    cout<<endl;

    //Ifs-else anidoados
    if (mark >= 50) {
        cout << "You passed." << endl;
        if (mark == 100) {
            cout <<"Perfect!" << endl;
        } else{
          cout<<"Casi perfect!"<<endl;
        }
    }
    else {
        if (mark <= 50) {
            cout << "You did no passed." << endl;
            if (mark != 100) {
                cout <<"Oh, god!" << endl;
            } else{
                cout<<"Casi perfect!"<<endl;
            }
        }
    }

    //Switchs
    int opcion = 2;
    switch (opcion) {
        case 1:
            cout << "I hate you." << endl;
            break;
        case 2:
            cout << "I love you." << endl;
            break;
        case 3:
            cout << "I hate you." << endl;
            break;
        default:
            cout << "I hate you." << endl;
    }




    return 0;
}
