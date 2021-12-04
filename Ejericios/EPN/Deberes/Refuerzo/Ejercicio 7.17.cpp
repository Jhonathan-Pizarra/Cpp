//Ejercicio 7.17
#include <iostream>
    using namespace std;
    #include <ctime> // CONTIENE EL PROTOTIPO DE LA FUNCION TIME
    #include <cstdlib> // CONTIENE EL PROTOTIPO DE LA FUNCION RAND Y SRAND

   int main()


   {                   
    srand( time( 0 ) ); 
    // USA LA HORA ACTUAL COMO SEMILLA PARA PRODUCIR NUMEROS ALEATORIOS 
    // DISTINTOS EN CADA LLAMADA A RAND

    cout <<"\n Lanzamiento de 3600 jugadas: " << endl;
    int lanzamiento;
    int Frecuencia[13] = {0};                         
    // SE LANZAN DOS DADOS Y SE EVITA EL ELEMENTO 0 DEL ARREGLO

    for ( int i = 1; i <= 3600; i++ )
      {                                                
       lanzamiento = ( 1 + rand() % 6 ) + (1 + rand() % 6 );  //  SIMULA EL LANZAMIENTO DE LOS DADOS 
       Frecuencia[lanzamiento]++;   // SE INCREMENTA EN 1 LA FRECUENCIA DEL NUMERO QUE CAYO

      }           

    for ( int n = 2; 12 >= n; n++ )  // ESTE CICLO IMPRIME LAS FRECUENCAS
    cout <<"\nLa frecuencia de " << n << " es: " << Frecuencia[n];
    cout << endl;
    return 0;

   }         
