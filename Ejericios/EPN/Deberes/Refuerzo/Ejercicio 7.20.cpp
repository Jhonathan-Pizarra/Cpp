// Ejercicio 7.20

#include <iostream>        
using namespace::std;        
         
void Alguna_Funcion ( char b[], int Tamano )  
{         
if ( Tamano > 0 )    
{         
Alguna_Funcion ( &b[1], Tamano - 1 );   
cout << b[0] << " ";    
}         
}         
         
         
int main()        
{         
const int Tamano_Arreglo = 4;     
char A[Tamano_Arreglo] = {'H', 'O', 'L', 'A' };  
         
cout <<"\n\nLos valores en el arreglo son: " << endl;
         
Alguna_Funcion(A, Tamano_Arreglo);        
         
cout << endl;       
         
return 0;        
}         

// Produce Hola inverido asi: ALHO 
