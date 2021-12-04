// Progrma para muestre al usuario el nombre de la figura geometrica
#include<iostream>
using namespace std;
int main()
{
	int a, b, h; 
	float p, q,l;
	
	cout<<"Bienvenido al programa para identificar una figura geometrica y su área"<<endl;
	cout<<"Ingrese el numero de lados"<<endl;
	cin>>a;
	

	if(a==3){
		cout<<"Su figura es un Triangulo"<<endl;
		cout<<"Ingrese el valor de la base:"<<endl;
	cin>>b;
	    cout<<"Ingrese el valor de la altura"<<endl;
	cin>>h;
		cout<<"El Area de su figura es:"<<endl;
		cout<<b*h/2<<endl;
		
	}
	else if(a==4){
		cout<<"Su figura es un Cuadrado"<<endl;
		cout<<"Ingrese la longitud de sus lados"<<endl;
		cin>>l;
		cout<<"El Area de su figura es:"<<endl;
		cout<<l*l<<endl;
	}
	else if(a==5){
		cout<<"Su figura es un Pentagono"<<endl;
		cout<<"Ingrese el valor de su apotema"<<endl;
		cin>>p;
		cout<<"Ingrese la longitud de sus lados"<<endl;
		cin>>l;
		cout<<"El Área de su figura es:"<<endl;
		cout<<(5*l)*p/2<<endl;
	}
	else if(a==6){
		cout<<"Su figura es un Hexagono"<<endl;
		cout<<"Ingrese el valor de su apotema"<<endl;
		cin>>p;
		cout<<"Ingrese la longitud de sus lados"<<endl;
		cin>>l;
		cout<<"El Área de su figura es:"<<endl;
		cout<<(3*l)*p<<endl;
	}
	else if(a==7){
		cout<<"Su figura es un Heptagono"<<endl;
		cout<<"Ingrese el valor de su apotema"<<endl;
		cin>>p;
		cout<<"Ingrese la longitud de sus lados"<<endl;
		cin>>l;
		cout<<"El Área de su figura es:"<<endl;
		cout<<(7*l)*p/2<<endl;
	}
	else if(a==8){
		cout<<"Su figura es un Octogono"<<endl;
		cout<<"Ingrese el valor de su apotema"<<endl;
		cin>>p;
		cout<<"Ingrese la longitud de sus lados"<<endl;
		cin>>l;
		cout<<"El Área de su figura es:"<<endl;
		cout<<(4*l)*p<<endl;
	}
	else if(a==9){
		cout<<"Su figura es un Eneagono"<<endl;
		cout<<"Ingrese el valor de su apotema"<<endl;
		cin>>p;
		cout<<"Ingrese la longitud de sus lados"<<endl;
		cin>>l;
		cout<<"El Área de su figura es:"<<endl;
		cout<<(9*l)*p/2<<endl;
	}
	else if(a==10){
		cout<<"Su figura es un Decagono"<<endl;
		cout<<"Ingrese el valor de su apotema"<<endl;
		cin>>p;
		cout<<"Ingrese la longitud de sus lados"<<endl;
		cin>>l;
		cout<<"El Área de su figura es:"<<endl;
		cout<<(10*l)*p/2<<endl;
	}
	else if(a<=2){
		cout<<"No existe figura"<<endl;
	}
	else if(a>=20){
		cout<<"Demasiados lados"<<endl;
	}
	}
	
	

