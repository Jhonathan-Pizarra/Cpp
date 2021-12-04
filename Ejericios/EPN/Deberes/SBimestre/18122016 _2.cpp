#include <iostream>
using namespace std;
int main(){
	int n=0;
	 //cuadrado sin relleno
	cout<<"Bienvenido Usuario"<<endl;
	cout<<"Ingrese en numero: "<<endl;
	cin>>n;

    
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1; j <= n ; j++){
            if(i == 1 || j == 1 || i == n || j == n){
                cout <<"*";
            }else{
                cout <<" ";
            }
        }
        cout <<endl;
    }
 
     
	
}
