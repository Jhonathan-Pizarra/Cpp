//Programa: Tablas de verdad 
#include <iostream>
using namespace std;
int main ()
{
	bool p;
	
	cout<<"Tabla de Negación"<<endl<<endl;
	
	cout<< "p     !p   "<<endl;
	cout<< "..... ....."<<endl;
	cout<< true  <<"    "<< !true  <<endl;
	cout<< false <<"    "<< !false <<endl;
	cout<<endl;
	
	cout<<"Tabla de Conjunción"<<endl<<endl;
	
	cout<<"p q   p&&q" <<  endl;
	cout<<"..... ....."<<  endl;
	cout<< false <<"  "<<false <<"  "<< (false && false) <<endl; 
	cout<< false <<"  "<<true  <<"  "<< (false && true ) <<endl; 
	cout<< true  <<"  "<<false <<"  "<< (true  && false) <<endl; 
	cout<< true  <<"  "<<true  <<"  "<< (true  && true ) <<endl; 
	cout<< endl;
	
	cout<<"Tabla de Disyunción"<<endl<<endl;
	
	cout<<"p q   p||q" <<  endl;
	cout<<"..... ....."<<  endl;
	cout<< false <<"  "<<false <<"  "<< (false || false) <<endl; 
	cout<< false <<"  "<<true  <<"  "<< (false || true ) <<endl; 
	cout<< true  <<"  "<<false <<"  "<< (true  || false) <<endl; 
	cout<< true  <<"  "<<true  <<"  "<< (true  || true ) <<endl; 
	cout<< endl;
	
	
	
}
//Notese:
//1y1-->1 implica 1 ["V y V implica V"] b&&b
//1y0 --> 0 implica 0  ["V y F implica F"] b&&a
//0y1-->0 implica 0 ["Fy V implica F"] a&&
//Hemos constriudo nuestra tabla de verdad.
