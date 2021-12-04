//Hacer por recursividad la multiplicacion.
#include <iostream>
using namespace std;

//Prototipo
double multiplicacion (int a, int b); 

int main (){
	
	int a;
	int b;
	
	cout<<"Ingrese un numero: ";
	cin>>a;
	cout<<"Ingrese un numero: ";
	cin>>b;
	cout<<endl;
	
	cout<<multiplicacion(a,b);
	cout<<endl;
	cout<<multiplicacion(a,b);

	return 0;	
	
}

double multiplicacion (int a, int b){
	if(b==0){
		return 1;
	}else {
	
	return a*multiplicacion(a,b-1);	
	return a+multiplicacion(a,b-1);	
	}
 	
}


