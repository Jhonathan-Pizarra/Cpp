 // Ejercicio 6.49: ej06_49.cpp 
 // ¿Qué error tiene este programa? 
 #include <iostream> 
using std::cin; 
using std::cout; 
/int main() 
 { 
 int c; 
 if ( ( c = cin.get() ) != EOF ) 
  { 
  main(); 
  cout << c; 
   } // fin de if 
   return 0; // indica que terminó correctamente 
   } // fin de main */
   
   
   //Respuesta, no es un programa, es decir, no ejecuta ninguna accion...Eso se debe a que hay dos estrucutras de main y no reconoce que c esta en main2 y resulta ajeno al conidionante
   //Correccion:
   
 /* int main() 
 { 
       int c; 
 if ( ( c = cin.get() ) != EOF ) 
  {  
  cout << c; 
   } // fin de if 
   return 0; // indica que terminó correctamente 
   } // fin de main */
   
   
