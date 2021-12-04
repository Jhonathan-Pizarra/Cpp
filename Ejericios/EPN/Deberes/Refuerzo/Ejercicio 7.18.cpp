//Ejercicio 7.18

 // ¿Qué hace este programa? 
  #include <iostream> 
   using std::cout;  
    using std::endl; 
 int queEsEsto( int [], int ); // prototipo de funció
 int main()  { 
   const int tamanioArreglo = 10; 
   int a[ tamanioArreglo ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   int resultado = queEsEsto( a, tamanioArreglo );   
   
   cout << "El resultado es " << resultado << endl;   
   
   return 0; // indica que terminó correctamente 
    } // fin de main 19  

 // ¿Qué hace esta función? 
 int queEsEsto( int b[], int tamanio ) { 
   if ( tamanio == 1 ) // caso base 
    return b[ 0 ];  
	else // paso recursivo 
	
 return b[ tamanio - 1 ] + queEsEsto( b, tamanio - 1 ); 
  } // fin de la función queEsEsto
  
  //Respuesta: El programa imprime 55, lo que ahce es basicamente definir un arreglo con un tamaño contante  e imprima un resultado que involucre a los mismos valores de los valores definidos en el arreglo
  
              /// La funcion solo nos condiciona de que si el tamaño  es 1, me retorne a la primera poscicon (que es también el 1, de de lo contrario retorne el tamaño suado al otro
              
