#include <iostream> 
#include <math.h> 
#include <conio.h> 
# define iva 0.14
using namespace std;
//Llamaremos a las funciones
void menu(); 
void primo();
void multiplo();
void mayorde3(); 
void impuesto();
void cubo(); 
void calculadora(); 
 

int main( ){ //Inicia la funcion main

menu(); 
} 

void menu(){ 
char opc; 
cout<<"\rMENU DE OPERACCIONES\n"; 
cout<<endl;
cout<<" 1) El numero primo"<<endl; 
cout<<" 2) muliplos del 3 entre 1 y un numero"<<endl; 
cout<<" 3) El mayor de 3 numeros"<<endl; 
cout<<" 4) Calcular el iva"<<endl;
cout<<" 5) Calculadora trigonometrica"<<endl;	
cout<<" 6) Potencias "<<endl;
cout<<" 7) Salir\n"<<endl;
cout<<endl;
cout<<"\nIngrese Seleccion del Menu: "; 
cin>>opc; 

switch(opc){ 
case '1': primo();
getch(); menu(); break; 
case '2': multiplo();
 getch(); menu(); break; 
case '3': mayorde3(); 
getch();menu(); break; 
case '4': impuesto(); 
getch();menu(); break;
case '5': calculadora();
getch();menu(); break;  
case '6': cubo();
getch();menu(); break; 
case '7': break; 
default : cout<<"VALOR NO PERMITIDO"; getch(); menu(); break; 
}
} 

void primo(){
	int num,cont=0; 

cout<<"Ingrese un numero ";cin>>num; 
for(int i=1;i<=num;i++) 
{ 
if(num%i==0) 
cont=cont+1; 
} 

if(cont==2) 
{ 
cout<<"el numero "<<num<<" "<<"es primo"; 
} 
else 
{ 
cout<<"El numero no es primo"; 
} 
}

//Multiplo de 3

void multiplo(){
	int x;


	cout<<"Numeros primos entre 1 al numero ingresado"<<endl; 
	cin>>x;
	
for( int i=1 ; i<=x;i++) 
{ 
if(i%3==0){ 
cout<<i<<endl; 

} 

} 
}

//El mayor de 3 numeros

void mayorde3(){ 
int i, num, max = 0; 
for( i = 0 ; i < 3 ; i ++){ 
cout<<"\nIngrese un entero: "; 
cin>>num; 
if (num > max) max = num; 
} 
cout<<"\nEl numero más grande es: "<< max << " \n"; 
} 

//Calcualar el IVA
void impuesto ()
{
float subtotal, total;  
    cout <<"  Bienvenido Usuario"<<endl;
    cout <<"  "<<endl;
    cout<<"Ingrese el subtotal: ";
    cin>>subtotal;
    total=subtotal+(subtotal*iva);
    cout <<"  "<<endl;
    cout <<"El total con i.v.a del 14% es:  ";
    cout<<total;	
}

//Calculadora Trigonometcia
void calculadora(){ 
int num; 
cout<<"\nIngrese el valor del angulo: "; 
cin>> num; 
cout<<"El coseno del numero ingresado es: "<<cos(num)<<"\n"; 
cout<<"El seno del numero ingresado es: "<<sin(num)<<"\n"; 
cout<<"La tangente del numero ingresado es: "<<tan(num)<<"\n"; 

}

//Potencia
void cubo(){ 
int num, exp, resp; 
cout<<"\nIngrese una base: "; 
cin>>num;
cout<<"\nIngrese una exponente: "; 
cin>>exp;

resp=pow(num, exp); 

cout<<"La respuesta es : "<<resp;
} 

