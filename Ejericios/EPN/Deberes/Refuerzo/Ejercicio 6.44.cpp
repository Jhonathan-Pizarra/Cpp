//Ejercicio 6.44
#include <iostream> 
#include <iomanip> 
using namespace std;

using std::setw;
unsigned long factorial( unsigned long ); // prototipo de funci�n 
int main() 
{ 
 // calcula los factoriales del 0 al 10  
 for ( int contador = 0; contador <= 10; contador++ )  
 cout << setw( 2 ) << contador << "! = " << factorial( contador ) 
 << endl; 
  return 0; 
 
 // indica que termin� correctamente 
 } // fin de main

// definici�n recursiva de la funci�n factorial 
unsigned long factorial( unsigned long numero ) 
{ 
if ( numero <= 1 ) // eval�a el caso base 
return 1; // casos base: 0! = 1 y 1! = 1 
else // paso recursivo
return numero * factorial( numero - 1 ); 
} 
// fin de la funci�n factorial 
