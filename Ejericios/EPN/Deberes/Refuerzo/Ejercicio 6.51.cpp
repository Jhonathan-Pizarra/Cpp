 // Ejercicio 6.51

#include <iostream> 
using namespace std;
 
int misterio( int, int ); // prototipo de función 
int main() 
{ 
int x, y; 
cout << "Escriba dos enteros: ";
cin >> x;
cin >> y;


cout << "El resultado es: " << misterio( x, y ) << endl; 
 return 0; // indica que terminó correctamente 
 } // fin de main 


int misterio( int a, int b ) 
 {
  if ( b == 0 || a == 0 ) // caso base 
     return 0;
	   else // paso recursivo
	    return a + misterio( a, b - 1 ); 
	 } 
	 
////Nota el parámetro b debe ser un entero positivo para prevenir la recursividad infinita 
