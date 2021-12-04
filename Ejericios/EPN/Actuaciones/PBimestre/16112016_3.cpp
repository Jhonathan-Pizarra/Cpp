// Progrma para muestre al usuario el nombre de la figura geometrica
#include<iostream>
using namespace std;
int main()
{
	int a;
	float p,l;
	cout<<"Bienvenido al programa para identificar una figura geometrica"<<endl;
	cout<<"Ingrese el numero de lados"<<endl;
	cin>>a;
	cout<<"Ingrese el valor de la magnitud de su figura:"<<endl;
	cin>>l;
	
	
	if(a==3){
		cout<<"Su figura es un Triangulo"<<endl;
		cout<<"El perimetro de su figura es:"<<endl;
		cout<<a*l<<endl;
		
	}
	else if(a==4){
		cout<<"Su figura es un Cuadrado"<<endl;
		cout<<"El perimetro de su figura es:"<<endl;
		cout<<a*l<<endl;
	}
	else if(a==5){
		cout<<"Su figura es un Pentagono"<<endl;
		cout<<"El perimetro de su figura es:"<<endl;
		cout<<a*l<<endl;
	}
	else if(a==6){
		cout<<"Su figura es un Hexagono"<<endl;
		cout<<"El perimetro de su figura es:"<<endl;
		cout<<a*l<<endl;
	}
	else if(a==7){
		cout<<"Su figura es un Heptagono"<<endl;
		cout<<"El perimetro de su figura es:"<<endl;
		cout<<a*l<<endl;
	}
	else if(a==8){
		cout<<"Su figura es un Octogono"<<endl;
		cout<<"El perimetro de su figura es:"<<endl;
		cout<<a*l<<endl;
	}
	else if(a==9){
		cout<<"Su figura es un Eneagono"<<endl;
		cout<<"El perimetro de su figura es:"<<endl;
		cout<<a*l<<endl;
	}
	else if(a==10){
		cout<<"Su figura es un Decagono"<<endl;
		cout<<"El perimetro de su figura es:"<<endl;
		cout<<a*l<<endl;
	}
	else if(a==11){
		cout<<"Su figura es un Endecagono"<<endl;
		cout<<"El perimetro de su figura es:"<<endl;
		cout<<a*l<<endl;
	}
	else if(a==12){
		cout<<"Su figura es un Dodecagono"<<endl;
		cout<<"El perimetro de su figura es:"<<endl;
		cout<<a*l<<endl;
	}
	else if(a<=2){
		cout<<"No existe figura"<<endl;
	}
	else if(a>=20){
		cout<<"Demasiados lados"<<endl;
	}
	}
	
	

