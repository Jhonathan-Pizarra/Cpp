 // Ejercicio 
// �Qu� hace este programa? 
#include <iostream> 
using std::cout; 
using std::cin; 
using std::endl; 
int misterio( int, int ); // prototipo de funci�n 
int main() 
{ 
int x, y; 
cout << "Escriba dos enteros: ";
cin >> x >> y;
cout << "El resultado es " << misterio( x, y ) << endl; 
 return 0; // indica que termin� correctamente 
 } // fin de main 

int misterio( int a, int b ) 
 {
  if ( b == 1 ) // caso base 
     return a;
	   else // paso recursivo
	     return a + misterio( a, b - 1 ); 
		 } // fin de la funci�n misterio
		 

//Repuesta multiplica los enteros ingresados

////Nota // el par�metro b debe ser un entero positivo para prevenir la recursividad infinita 
