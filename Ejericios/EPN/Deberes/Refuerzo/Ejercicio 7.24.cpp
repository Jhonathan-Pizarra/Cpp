#include<iostream>
#include<conio.h>
using namespace std;
	bool  validarPosicion(int & a,int & b, int x){
		
		int vertical[] = {-1,-2,-2,-1,1,2,2,1};
		int horizontal[] = {2,1,-1,-2,-2,-1,1,2};
		a += horizontal[x];
		b += vertical[x];
		if(a < 0 || a > 7 || b < 0 || b > 7){
			a -= vertical[x];
			b -= horizontal[x];
			}
		if(a > 0 && a < 7 && b > 0 && b < 7){
			return true;
		}else{
			return false;
			}
	}
	bool validarCasilla(int arreglo[][8],int f,int c){
		if(arreglo[f][c] == 0){
			arreglo[f][c]++;
			return true;
		}else{
			return false;
	} 
	}
	void imprimirArreglo(int arreglo[][8]){
		for(int i = 0;i < 8;i++){
			for(int j = 0;j < 8;j++){
				cout<<arreglo[i][j];
			}
			cout << endl;
		}
	}
int main(){
	
   int tablero[8][8] = {};
   int fila,columna;
   int movimiento;
   fila = 0;
   columna = 0;
   
   for(int i = 1;i < 64;i++)
   {
      do
      {
         cout << "Indica el numero de movimiento: ";
         cin >> movimiento;
         
         movimiento--;
         
         validarPosicion(fila,columna,movimiento);
         validarCasilla(tablero,fila,columna);
         
      }while(validarPosicion(fila,columna,movimiento) == false || validarCasilla(tablero,fila,columna)==false);
      
      imprimirArreglo(tablero);
   }
   getch();
   return 0;
}
	

