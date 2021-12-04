#include <iostream>
using namespace std;
int main()
{
	int a=0;
	int b=1;
	
	cout<<"Bienvenido"<<endl;
	if(a&&a){
		cout<<"Es verdadero"<<endl;
	}
	else if(a&&b){
		cout<<"Es falso"<<endl;
	}
	else if(b&&a){
		cout<<"Es falso"<<endl;
	}
	else if(b&&b){
		cout<<"Es verdadero"<<endl;
	}
	else if (a||a){
		cout<<"Es falso"<<endl;
	}
	system ("pause");
}
//otese que si escribo a, me dara un valor de falso, pero si escribo a&&a mi valor de verdad sera verdadero
//1y1 implica 1 "V y V implica V" b&&b
//1yo -->0  b&&a
//0y1-->0 a&&b


