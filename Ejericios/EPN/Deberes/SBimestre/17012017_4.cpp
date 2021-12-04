#include<iostream>
#include<conio.h>
 
using namespace std;
 
void menu();
double funcion1();
double funcion2();
 
int main()
{
    char opc=' ';
    do
    {
        system ("cls");
        menu();
        cout<<endl;
        cout<<"\t Opcion: ";
        cin>>opc;
        switch (opc)
        {
            case '1':
                system ("cls");
                funcion1();
                cout<<endl;
                break;
            case  '2':
                system ("cls");
                funcion2();
                cout<<endl;
                break;
            default:
                break;
        }
    }while (opc!='s'&&opc!='S');
    cout<<endl;
    cout<<"\t FIN DEL PROGRAMA "<<endl;
     
    getch();
    return 0;
}
 
 
void menu()
{
    cout<<endl;
    cout<<" MENU INTERACTIVO "<<endl;
    cout<<endl;
    cout<<"\t MENU DE OPERACIONES "<<endl;
    cout<<"\t 1. FUNCION1"<<endl;
    cout<<"\t 2. FUNCION2"<<endl;
    cout<<"\t S_ Salir"<<endl;
}
 
 
double funcion1 ()
{
    int valor1 [4]={1,2,3,4};
	int valor2 [4]={5,6,7,9};
	int total [4];
	
	
	for(int i=0; i<4; i++){
			cout<<valor1[i]<<"\t";
		}
	cout<<"\n";
	
	for(int i=0; i<4; i++){
			cout<<valor2[i]<<"\t";
		}
	cout<<"\n";
    cout<<"la suma de los valores es\n"<<endl;
    	
	for(int i=0; i<4; i++){
            total[i]=valor1[i]+valor2[i];
			cout<<total[i]<<"\t";
		}

	
	system("pause");
	return 0;

}
 
double funcion2()
{
    int n;
	int suma[n];
    int numero [n];
    cin>>n;
    
    for(int i=0; i<n; i++){
			cout<<numero[i]<<"\t";
		}
		
		for(int i=0; i<n; i++){
            suma[i]=numero[i]+numero[0];
			cout<<suma[i]<<"\t";
		}
		
	
	system("pause");
	return 0;
}
 

