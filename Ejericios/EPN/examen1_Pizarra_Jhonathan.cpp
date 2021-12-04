#include <iostream>
using namespace std;
int main (){
	int x1;
	int y1;
	int x2;
	int y2;
	float m;
	int b;
	float y;
	int a;
	int e;
	
	
	
	cout<<"Bienvenido usuario"<<endl;
	cout<<"Ingrese un par ordenado A=(X1,Y1)"<<endl;
	cout<<"Valor para x1"<<endl;
	cin>> x1;
	cout<<"Valor para y1"<<endl;
	cin>> y1;
	cout<<"  "<<endl;
	
	cout<<"Ingrese el otro par ordenado B=(X2,Y2)"<<endl<<endl;
	cout<<"Valor para x2"<<endl;
	cin>> x2;
	cout<<"Valor para y2"<<endl;
	cin>> y2;
	
	// Si los dos puntos son iguales es decir:
	if (x1==x2 && y1==y2) {
	cout<<"No se puede calcular la ecuacion porque los puntos son iguales"<<endl;
	}
	
	//Si una de las coordenadas son iguales
	//Si la cordenado en x de A es igual a la coordenada x de B, mostrar el mensaje "La recta es paralela al eje y" y la ecuacion es: x=x1
	else if (x1==x2 && y1!=y2){
	cout<<"La recta es paralela el eje y"<<endl;
	cout<<"Ecuacion: x=";
	e=(x1=x2);	
	cout<<e<<endl;
		
	}
	else if (x1!=x2 && y1==y2){
	cout<<"La recta es paralela el eje x"<<endl;
	cout<<"Ecuacion: y=";
	e=(y1=y2);	
	cout<<e<<endl;
		
	}
	// Si las dos coordenadas son diferentes 
	else if (x1!=x2 && y1!=y2){
	cout<<"La pendiente es:"<<endl;
	m= (y2-y1)/(x2-x1);
	cout<<m<<endl;
	
	cout<<"el parametro b: "<<endl;
	b= y2-(m*x2);
	cout<<b<<endl;
	
	int x;
	cout<<"La ecuacion de la recta:"<<endl;
	y=m*x+b;
	cout<<y<<endl;
	
		
	}
	

    
	
	
}
