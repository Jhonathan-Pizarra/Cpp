//Porgrama para calcular la tabla de multiplicar de cualquier numero ingresado
#include <iostream> 
using namespace std; 
int main() { 
int numero; 
cout<<                      " Bienvenido usuario"<<endl;
cout<<"Ingrese un numero: "; 
cin>>numero; 
cout<<"\nTabla del "<<numero; 
cout<<endl; 
for(int i = 1; i < 11; i++){ 
cout<<i<<"*"<<numero<<"="<<i*numero; 
cout<<endl; 
} 

return 0; 
}
