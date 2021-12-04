// Ejercicio 7.10
#include <iostream>
#include <conio.h>
using namespace std;


int main(){
    int tamanio = 10;
	float a[tamanio + 1];
    int b[tamanio + 1], c[11] = {0};
    float ventas;
    for ( int i = 1; i <= tamanio; i++ ){
      		cout<<endl;
       		cout <<" total ventas del empleado " << i << " es:";
       		cin >> ventas;
       		a[i] = (static_cast<float>(9)/100)*ventas + 200.00;
       		cout << "El sueldo del empleado " << i << " es: " <<  a[i] << endl;
       		b[i] =  static_cast< int >( a[i] )/100;
      }

    for ( int k = 1; k <= tamanio; k++ ){
       	if ( b[k] < 10){
       		c[b[k]]++;	
		}else{
       		c[tamanio]++;
		}
      }

   for ( int j = 2; j < tamanio; j++ ){
    	cout << endl;
    	cout << "Hay " << c[j] <<" obreros, cobran entre "  << (j * 100) << " y " << (( j + 1 ) * 100 ) - 1 << " dolares " <<endl;
     }
	cout<<endl;
   	cout <<"Hay " << c[(tamanio)] << " obreros, cobran 1000 o mas."<<endl;
   	getch ();
   	return 0;
}
