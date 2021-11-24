/*
You are working on a ticketing system. A ticket costs $10.
The office is running a discount campaign: each group of 5 people is getting a discount, which is determined by the age of the youngest person in the group.
You need to create a program that takes the ages of all 5 people as input and outputs the total price of the tickets.

 The youngest age is 15, so the group gets a 15% discount from the total price, which is $50 - 15% = $42.5
*/
#include <iostream>
using namespace std;

int main(){

    double cost = 10*5;
    double discount = 0;
    double nuevoPrecio = 0;
    int ages[5] = {};
    int menor = 0;
    int centinela = 0;

    for(int i=0; i<5; i++){
        cout<<"Cuantos años tiene?: ";
        cin>>ages[i];
    }

    for(int i=0; i<5; i++){
        centinela = ages[i];

        for(int j=0 ; j<5; j++){
            if(centinela < ages[j]){
                menor = centinela;
                ages[j] = centinela;
            }else{
                menor = centinela;
            }
        }

    }

    cout<<"Menor del grupo: "<<menor<<endl;
    //double discount = menor/100;
    discount = (double)menor/100;
    nuevoPrecio = cost*discount;
    cout<<"Nuevo precio: $"<<nuevoPrecio<<endl;
    cout<<"Total: $"<<cost<<endl;
    cout<<"A pagar: $"<<cost-nuevoPrecio;

    return 0;
}