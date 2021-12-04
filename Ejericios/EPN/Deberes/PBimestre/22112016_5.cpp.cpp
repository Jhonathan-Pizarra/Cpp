// Progrma para muestre al usuario el nombre de la figura geometrica
#include<iostream>
using namespace std;
int main(){
		int a, b, h; 
	float p, q,l;
	char op;
	
	cout<<"Bienvenido al programa para identificar una figura geometrica y su área"<<endl;
	cin>>op;
	
	switch (op){
		case 'a':
	cout<<"Su figura es un Triangulo"<<endl;
		cout<<"Ingrese el valor de la base:"<<endl;
	cin>>b;
	    cout<<"Ingrese el valor de la altura"<<endl;
	cin>>h;
		cout<<"El Area de su figura es:"<<endl;
		cout<<b*h/2<<endl;
		break;
		
		case 'b':
		cout<<"Su figura es un Cuadrado"<<endl;
		cout<<"Ingrese la longitud de sus lados"<<endl;
		cin>>l;
		cout<<"El Area de su figura es:"<<endl;
		cout<<l*l<<endl;
		break;
		
		case 'c':
		cout<<"Su figura es un Pentagono"<<endl;
		cout<<"Ingrese el valor de su apotema"<<endl;
		cin>>p;
		cout<<"Ingrese la longitud de sus lados"<<endl;
		cin>>l;
		cout<<"El Área de su figura es:"<<endl;
		cout<<(5*l)*p/2<<endl;
		break;
		
		case 'd':
		cout<<"Su figura es un Hexagono"<<endl;
		cout<<"Ingrese el valor de su apotema"<<endl;
		cin>>p;
		cout<<"Ingrese la longitud de sus lados"<<endl;
		cin>>l;
		cout<<"El Área de su figura es:"<<endl;
		cout<<(3*l)*p<<endl;
		break;
		
		case 'e':
		cout<<"Su figura es un Heptagono"<<endl;
		cout<<"Ingrese el valor de su apotema"<<endl;
		cin>>p;
		cout<<"Ingrese la longitud de sus lados"<<endl;
		cin>>l;
		cout<<"El Área de su figura es:"<<endl;
		cout<<(7*l)*p/2<<endl;
		break;
		
		case 'f':
		cout<<"Su figura es un Octogono"<<endl;
		cout<<"Ingrese el valor de su apotema"<<endl;
		cin>>p;
		cout<<"Ingrese la longitud de sus lados"<<endl;
		cin>>l;
		cout<<"El Área de su figura es:"<<endl;
		cout<<(4*l)*p<<endl;
		break;
		
		case 'g':
		cout<<"Su figura es un Eneagono"<<endl;
		cout<<"Ingrese el valor de su apotema"<<endl;
		cin>>p;
		cout<<"Ingrese la longitud de sus lados"<<endl;
		cin>>l;
		cout<<"El Área de su figura es:"<<endl;
		cout<<(9*l)*p/2<<endl;
		break;
		
		case 'h':
		cout<<"Su figura es un Decagono"<<endl;
		cout<<"Ingrese el valor de su apotema"<<endl;
		cin>>p;
		cout<<"Ingrese la longitud de sus lados"<<endl;
		cin>>l;
		cout<<"El Área de su figura es:"<<endl;
		cout<<(10*l)*p/2<<endl;
		break;
		
		default:
			cout<<"Opcion no valida"<<endl;
			cout<<"Vuelva a intentar"<<endl;
			break;		
		
	}
			
    
	
}

	

	
		
	
		

	
