//Programa para imgresar un numero e imprimir el mes del año.
#include <iostream>
using namespace std;
int main ()
{
	int a;
	cout<<"Bienvenido"<<endl;
	cout<<"Ingrese un numero del 1 al 12"<<endl;
	cin>>a;
	
	 
    if (a==1){
        cout<<"Uno"<<endl;
        cout<<"Enero"<<endl;
    }
    else if (a==2){
        cout<<"Dos"<<endl;
        cout<<"Febrero"<<endl;
    }
    else if (a==3){
        cout<<"Tres"<<endl;
        cout<<"Marzo"<<endl;
    }
    else if (a==4){
        cout<<"Cuatro"<<endl;
        cout<<"Abril"<<endl;
    }
    else if (a==5){
        cout<<"Cinco"<<endl;
        cout<<"Mayo"<<endl;
    }
    else if(a==6){
        cout<<"Seis"<<endl;
        cout<<"Junio"<<endl;
    }
    else if(a==7){
        cout<<"Siete"<<endl;
        cout<<"Julio"<<endl;
    }
    else if(a==8){
        cout<<"Ocho"<<endl;
        cout<<"Agosto"<<endl;
    }
    else if(a==9){
        cout<<"Nueve"<<endl;
        cout<<"Septiembre"<<endl;
    }
    else if(a==10){
        cout<<"Diez"<<endl;
        cout<<"Octubre"<<endl;
    }
    else if(a==11){
        cout<<"Once"<<endl;
        cout<<"Noviembre"<<endl;
    }
    else if(a==12){
        cout<<"Doce"<<endl;
        cout<<"Diciembre"<<endl;
    }
    else{
        cout<<"opcion no valida"<<endl;
    }
      
        system ("pause");   
         
	
	
}
