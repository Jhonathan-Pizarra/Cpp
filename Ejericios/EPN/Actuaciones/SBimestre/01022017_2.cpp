#include<iostream>
#include<string.h>
using namespace std;

int lineal(int array[], int numero); //Prototipo de arreglo

int main(){
	int n;
	
	int array[10];
    for(int j=0; j<10; j++){
        cout<<"Ingrese un numero: ";
		cin>>array[j];
	}
	cout<<endl;
	
	cout<<"Ingrese un numero a buscar: ";
	cin>>n; 
	cout<<endl;
	
	cout<<" Elija una opcion de busqueda: "<<endl;
	cout<<" a) Busqueda lineal o secuencial"<<endl;
	cout<<" b) Busqueda binaria"<<endl;
	char opcion;
	cin>>opcion;
	
	switch(opcion){
		
		case 'a': lineal(array, n);
		break;
		
		break;
		case 'b': 
		break;
		
		default: cout<<"Opcion no valida"<<endl;
	}
	
	cout<<endl;
	cout<<"\t * Oden del Arreglo * "<<endl;
	cout<<"En orden Ascendente: ";
    for(int i=0; i<10; i++){
        cout<<array[i]<<" ";
     
    }
    cout<<endl;
    cout<<"En orden Descendente: ";
    for(int i=9; i>=0; i--){
        cout<<array[i]<<" ";
     
    }
    cout<<endl;
     
	
	return 0;
}

  int lineal(int array [], int numero){
  	
  	for(int i=0; i<10; i++){
  		if(array [i]==numero){
  			 cout<<"La poscicion del numero que busca es: ";
			  cout<<i;
			  cout<<endl;
		  }
	  }
	  
  }
  
  




 
