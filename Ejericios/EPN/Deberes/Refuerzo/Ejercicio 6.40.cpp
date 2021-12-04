#include<iostream> 
using namespace std;
double potencia (int, int);
int main()
{
int base, exponente;
cout<<"ingrese base : "<<endl;
	cin>>base;
	cout<<"ingrese exponente: "<<endl;
	cin>>exponente;
	cout<<"  "<<endl;
	
	cout<<"Potencia: "<<potencia(base,exponente)<<endl;
	return 0;
	
}

 double potencia (int base, int exponente){
if(exponente==1){
	return base;
}
else 
{	
	return base*potencia(base,exponente-1);
}
 }
