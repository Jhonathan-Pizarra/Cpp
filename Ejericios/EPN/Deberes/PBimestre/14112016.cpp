#include <iostream>
using namespace std;
int main(){
	float p, q, r;
	cout<< "Escuela Politecnica Nacional" <<endl;
	cout<< " Alumno: Jhonathan Pizarra" <<endl;
	cout<< " Curso: Tec-22A"<<endl;
	
	cout<<"Ingrese el valor de su peso"<<endl;
	cin>>p;
	cout<<"Ingrese su altura"<<endl; 
	cin>>q;
    r=q*q;
	cout<<"Su indice de masa corporal es: \n"<<endl; 
	
	cout<<p/r; 
	 cout<<"\n"<<endl;
	if(18.5<=p/r && p/r<=24.98){
		cout<< "Su peso es normal \n"<<endl;
	}
	if(25<=p/r && p/r<=29){
		cout<< "Usted tiene sobrepeso \n"<<endl;
	}
	if(30<=p/r && p/r<=34){
		cout<< "Usted tiene obesidad \n"<<endl;
	}
	if(35<=p/r && p/r<=39.9){
		cout<<"Usted tiene obesidad de grado 2 \n"<<endl;
	}
	if(40<p/r && p/r<49.9){
		cout<< "Usted tiene obesidad de grado 3 \n"<<endl;
	}
	if(50<=p/r){
		cout<< "Usted tiene un sobrepeso de tipo 4 \n"<<endl;
	}
	return 0;
}

