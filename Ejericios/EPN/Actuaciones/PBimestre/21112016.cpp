#include <iostream>
using namespace std;
int main ()
{
	int x;
	int y;
	cout<<"\t Bienvenido"<<endl;
	cout<<"\t Ingrese x"<<endl;
	cin>>x;
	cout<<"\t Ingrese y"<<endl;
	cin>>y;
	
	if(x==y){
		cout<<"Son iguales"<<endl;
	}
	else {
		cout<<"\t Son diferentes"<<endl;
	}
	if (x%2==0){
		cout<<"X es Par"<<endl;
	}
	else {
		cout<<"X Impar"<<endl;
	}
	if(y%2==0){
		cout<<"Y es Par"<<endl;
	}
	else {
		cout<<"Y es Impar"<<endl;
		
	}
	
	
//Si pongo else if ahi si estoy haciendo una comparacion, mientras no, else será el que usmos

	
}
