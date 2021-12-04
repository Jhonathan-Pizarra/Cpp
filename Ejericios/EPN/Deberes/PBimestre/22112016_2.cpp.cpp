//Programa  que te pida dos números y que indique si son primos cada uno y si son primos los dos
#include <iostream>
using namespace std;
int main()
{
		int a;
	int b; 
	
	cout<<"Bienvenido"<<endl;
	cout<<"Ingrese un numero"<<endl;
	cin>>a;
	cout<<"Ingrese otro numero"<<endl;
	cin>>b;
	
	 if(a==b){
        cout<<"a y b Son iguales"<<endl;
    }
    else {
        cout<<"\t a y b Son diferentes"<<endl;
    }
    if (a%2==0){
        cout<<"a no es primo"<<endl;
    }
    else {
        cout<<"a es un numero primo"<<endl;
    }
    if(b%2==0){
        cout<<"b no es primo"<<endl;
    }
    else {
        cout<<"b es primo"<<endl;
         
	
}
	
}


