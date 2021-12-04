#include <iostream>
using namespace std;
int suma(int &a, int &b); //Ese & dice que vamos a pasar una localizacion de memoria en donde se localiza una variable, si no lo hubiera es que no
int main (){
	int a=3;
	int b=2;
	int c;
	
	suma(a,b);
	return 0;

}
int suma(int &a, int &b){
	int c;
	c=a+b;
	cout<<c<<endl;
	
	return 0;
}





