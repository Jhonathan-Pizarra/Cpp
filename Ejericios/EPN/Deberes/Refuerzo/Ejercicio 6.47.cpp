#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;
 
int main()
{
    int num, num1,r=0,numero,suma,resta , division, mezcla, multiplicacion,correcto, incorrecto,nivel,operacion;  

srand(time(NULL));
num = 1+rand() % 9;
num1 =1+rand() % 9;

cout <<  "\t Elija su operacion :"<<endl;
cout <<"1) Suma"<<endl;
cout <<"2) Resta"<<endl;
cout <<"3) multiplicacion"<<endl;
cout <<"4) Division"<<endl;
cout <<"5) Aleatorio"<<endl;

     cin>>operacion;    
cout <<"  "<<endl;

cout <<  "\t Elija su nivel de grado de 1 o 2 :"<<endl;
     cin>>nivel;
	
	

switch(nivel) {
   	case 1 :
         do
{
switch(operacion){
	case 1:
	cout <<"--->> Cuanto es "<<num<<" mas "<<num1<<endl;
		suma = num+num1;
		break;
	case 2:
	cout <<"--->>Cuanto es "<<num<<" menos "<<num1<<endl;
		resta = num-num1;
		break;
	case 3:
	cout <<"--->>Cuanto es "<<num<<" por "<<num1<<endl;
		multiplicacion = num*num1;
		break;
	case 4:
	cout <<"--->>Cuanto es "<<num<<" para "<<num1<<endl;
		division = num/num1;
		break;
	case 5:
		srand(time(NULL));
mezcla = 1+rand() % 4;

		switch (mezcla){
			case 1:
	cout <<"--->>Cuanto es "<<num<<" mas "<<num1<<endl;
		suma = num+num1;
		break;
		case 2:
	cout <<"--->>Cuanto es "<<num<<" menos "<<num1<<endl;
		resta = num-num1;
		break;
	case 3:
	cout <<"--->>Cuanto es "<<num<<" por "<<num1<<endl;
		multiplicacion = num*num1;
		break;
		case 4:
	cout <<"--->>Cuanto es "<<num<<" para "<<num1<<endl;
		division = num/num1;
		break;
		default :
         cout << "elige  de nuevo"<<endl;
		}

		break;
		default :
         cout << "elige  de nuevo"<<endl;
   }
   

	srand(time(NULL));
num = 1+rand() % 9;
num1 =1+rand() % 9;
correcto= 1+rand() % 4;

	cin>>r;
	
		
	if (r == multiplicacion || r == suma || r == resta || r == division)
	{
		
	
   switch(correcto) {
   	case 1 :
         cout <<  "\t Muy bien "<<endl;
         break;
      case 2 :
         cout << "Excelente!" << endl; 
         break;
      case 3 :
      	 cout << "Buen trabajo!" << endl; 
      	break;
      case 4 :
         cout << "Sigue asi!" << endl;
         break;
      default :
         cout <<  "\t Muy bien "<<endl;
   }

}
	
else {
do
{
	srand(time(NULL));
	incorrecto= 1+rand() % 4; 
	
	switch(incorrecto) {
   	case 1 :
       cout << "No. Por favor intenta de nuevo.";
         break;
      case 2 :
         cout << "Incorrecto. Intenta una vez mas." << endl; 
         break;
      case 3 :
      	 cout << "No te rindas!" << endl; 
      	break;
      case 4 :
         cout << "No. Sigue intentando" << endl;
         break;
    
      default :
        cout << "No. Por favor intenta de nuevo.";
   }
	
	cout<<"   "<<endl;	
	cout <<"Ingrese su respuesta: "<<endl;
	cin>>numero;
	if (numero == multiplicacion || numero == suma || numero == resta || numero == division){
		cout <<  "\t Muy bien "<<endl;
	}
}
	
while(numero !=multiplicacion && numero != suma && numero != resta && numero !=division );
}

}
while(num || num1 != multiplicacion || num || num1 != suma || num || num1 != resta || num || num1 != division);
         
         
   break;
         
      case 2 :
      	 do
{
switch(operacion){
	case 1:
	cout <<"--->>Cuanto es "<<num<<" mas "<<num1<<endl;
		suma = num+num1;
		break;
	case 2:
	cout <<"--->>Cuanto es "<<num<<" menos "<<num1<<endl;
		resta = num-num1;
		break;
	case 3:
	cout <<"--->>Cuanto es "<<num<<" por "<<num1<<endl;
		multiplicacion = num*num1;
		break;
	case 4:
	cout <<"--->>Cuanto es "<<num<<" para "<<num1<<endl;
		division = num/num1;
		break;
	case 5:
		srand(time(NULL));
mezcla = 1+rand() % 4;

		switch (mezcla){
			case 1:
	cout <<"--->>Cuanto es "<<num<<" mas "<<num1<<endl;
		suma = num+num1;
		break;
		case 2:
	cout <<"--->>Cuanto es "<<num<<" menos "<<num1<<endl;
		resta = num-num1;
		break;
	case 3:
	cout <<"--->>Cuanto es "<<num<<" por "<<num1<<endl;
		multiplicacion = num*num1;
		break;
		case 4:
	cout <<"--->>Cuanto es "<<num<<" para "<<num1<<endl;
		division = num/num1;
		break;
		default :
         cout << "elige  de nuevo"<<endl;
		}

		break;
		default :
         cout << "elige  de nuevo"<<endl;
   }

	srand(time(NULL));
num = 1+rand() % 9;
num1 =1+rand() % 9;
correcto= 1+rand() % 4;

	cin>>r;
		
	if (r == multiplicacion || r == suma || r == resta || r == division)
	{
   switch(correcto) {
   	case 1 :
         cout <<  "\t Muy bien "<<endl;
         break;
      case 2 :
         cout << "Excelente!" << endl; 
         break;
      case 3 :
      	 cout << "Buen trabajo!" << endl; 
      	break;
      case 4 :
         cout << "Sigue asi!" << endl;
         break;
      default :
         cout <<  "\t Muy bien "<<endl;
   }	
	}
	
else {
do
{
	srand(time(NULL));
	incorrecto= 1+rand() % 4; 
	
	switch(incorrecto) {
   	case 1 :
       cout << "No. Por favor intenta de nuevo.";
         break;
      case 2 :
         cout << "Incorrecto. Intenta una vez mas." << endl; 
         break;
      case 3 :
      	 cout << "No te rindas!" << endl; 
      	break;
      case 4 :
         cout << "No. Sigue intentando" << endl;
         break;
    
      default :
        cout << "No. Por favor intenta de nuevo.";
   }
	
	cout<<"   "<<endl;	
	cout <<"Ingrese su respuesta: "<<endl;
	cin>>numero;
	if (numero == multiplicacion || numero == suma || numero == resta || numero == division){
		cout <<  "\t Muy bien "<<endl;
	}
}
	
while(numero !=multiplicacion && numero != suma && numero != resta && numero !=division );
}

}
while(num || num1 != multiplicacion || num || num1 != suma || num || num1 != resta || num || num1 != division);
         
         
   break;
         
         default:
         cout <<  "\tElegir nuevamente."<<endl;

   }
    return 0;
}
