// Ejercicio 6.42
#include <iostream>
using namespace std;
 
//Funcion para recursividad 
int LoL(int num,int A=1,int C=3,int B=2)
{
    if(num==1) {
        cout<<"Mueva el bloque "<<num<<" desde "<<A<<" hasta  "<<C<<endl; 
             
    }
    else {
        LoL(num-1,A,B,C);
        cout<<"Mueva el bloque "<<num<<" desde "<<A<<" hasta  "<<C<<endl;
        LoL(num-1,B,C,A);
    }
}
 
int main()
{
        int n;
        int A=1,B=2,C=3;
 
        cout<<"Los clavijas son A B C\n";
        cout<<"Numero de discos: ";
        cin>>n;
        LoL(n,A,C,B);
         
}
