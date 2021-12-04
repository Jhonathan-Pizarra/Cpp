//Programa que pida al usuario que ingrese una frase y me imprima cuantas palabras tiene esa frase.

#include <iostream>
#include <string.h>
using namespace std;
int main(){
	
   char frase[50];
   int j=0;
   
   cout<<"Escriba una frase: "<<endl;
   gets(frase);
  

for (int i=0; i<strlen(frase); i++){
	
	if(frase [i]==' '){
		cout<<frase[i];
		j++;
	}
}
cout<<j+1;
	
}




