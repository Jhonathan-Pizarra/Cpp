//Numeros Romanos y Decimales
#include<iostream>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;
int main()
{
    int R; // R para romanos
    const char *Unidad[]={"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"}; //Numeros romanos del 1 al 10
    const char *Decena[]={"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"}; //Numeros romanos del 10 al 100
    const char *Centena[]= {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}; //Numeros romanos de 100 a 1000
    
    
    cout<<"Numero Decimal: ";
    cin>>R;
    
    int u=R%10;
    int d=(R/10)%10;
    int c=R/100;
    
      if(R>=100){
      	 
      	 
      	 cout<<"Numero Romano:  ";
           cout<<Centena[c]<<Decena[d]<<Unidad[u];
		 
      }else{
      	
          if(R>=10){
          	
          	cout<<"Numero Romano: ";
              cout<<Decena[d],Unidad[u];
          }else{
          	
          	
          	cout<<"Numero Romano: ";
            cout<<Unidad[R];
          }
      }
    return 0;
}
