// Ejercicio 7.19

#include <iostream>              
using namespace::std;                 
#include <iomanip>              
               
int Asignar(int b[], int r);           
               
int main()              
{ // ABRE MAIN            
               
int PrimeraClase[6] = {0};            
int Economico[6] = {0};            
int respuesta, n = 0, s = 1, evaluacion;       
int Contador_PrimeraClase = 0;            
int Contador_Economico = 0;            
               
while ( (Contador_Economico + Contador_PrimeraClase) < 10 )        
{ // ABRE WHILE            
               
if ( 5 == Contador_PrimeraClase )          
{ // ABRE IF            
cout <<"\n Porfavor escriba ( 1 para primera clase, 0 Economico) " << endl;
cin >> respuesta;             
               
if ( 1 == respuesta )          
{               
evaluacion = Asignar( Economico, n ); // SI EL CLIENTE DESEA NO FUMAR SE ENVIA N
if ( 0 == evaluacion )          
Contador_Economico++;               
else               
Contador_PrimeraClase++;               
               
} // CONTADOR NO_FUMAR            
               
else               
cout <<"\nEl proximo vuelo parte en tres horas. " << endl;     
               
} // CIERRA IF            
               
else               
{ // ABRE ELSE            
cout <<"\n ¿Que viaje desea? (1 para primera clase, 0 para Economico) "<<endl;    
cin >> respuesta;             
               
if ( 1 == respuesta )          
{               
evaluacion = Asignar( PrimeraClase, s ); // SE ENVIA S PARA INCREMENTAR CONTADOR_FUMAR   
if (0 == evaluacion)            
Contador_Economico++;               
else               
Contador_PrimeraClase++;               
}               
else               
{ // ABRE ELSE            
cout <<"\n ¿Que viaje desea? (1 para primera clase, 0 para Economico) "<<endl;    
cin >> respuesta;             
if ( 1 == respuesta )          
{               
evaluacion = Asignar(Economico, n );           
if ( 0 == evaluacion )          
Contador_Economico++;               
else               
Contador_PrimeraClase++;               
}               
               
else               
cout <<"\nEl Su pase de abordaje: "<<n;
               
} // CIERRA ELSE            
} // CIERRA ELSE            
               
} // CIERRA WHILE            
               
return 0;              
               
}             
               

int Asignar( int b[], int r )         
{ // ABRE ASIGNAR            
int c, Economico = 0, PrimeraClase = 1;;        
               
for ( c = 1; 5 >= c; c++ )      
{ // ABRE FOR            
               
if ( 0 == b[c] )          
{ // ABRE IF            
cout << "\nAsiento " << c << endl;        
b[c] = 1;             
               
if ( 0 == r )          
return Economico;              
               
else               
return PrimeraClase;              
} // CIERRA IF            
} // CIERRA FOR            
               
} 
