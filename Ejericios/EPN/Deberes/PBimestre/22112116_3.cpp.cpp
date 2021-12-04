#include <iostream>
using namespace std;
int main(){
char letra;
cout<<"ingrese una letra"<<endl;
cin>>letra;
switch(letra){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
cout<<"la letra ingresada es una vocal"<<endl;
break;
default:
cout<<"la letra ngresada no es una vocal"<<endl;
break;
}
return 0; }
