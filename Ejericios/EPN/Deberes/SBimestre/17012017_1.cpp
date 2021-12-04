#include<iostream>
using namespace std;
int main(){
int a,n;

cout<<"Ingrese el numero de filas: ";
  cin>>a;
cout<<"Ingrese el numero de columnas: "; 
  cin>>n;
  
  int  A[a][n],B[a][n],suma[a][n],resta[a][n],multiplicacion[a][n];
  
  cout<<"Valores de la matriz A: "<<endl;
  for( int i=0;i<a;i++){
     for(int j=0;j<n;j++){
            cout<<"A["<<i<<"]["<<j<<"]:";
            cin>>A[i][j];
      }
  }
  cout<<"Valores de la matriz B: "<<endl;
   for( int i=0;i<a;i++){
      for(int j=0;j<n;j++){
            cout<<"B["<<i<<"]["<<j<<"]:";
            cin>>B[i][j];
      }
   }
 for( int i=0;i<a;i++) //suma
 {
     for(int j=0;j<n;j++){
            suma[i][j]=A[i][j]+B[i][j];
      }
 }
 
 for( int i=0;i<a;i++) //resta
 {
     for(int j=0;j<n;j++){
            resta[i][j]=A[i][j]-B[i][j];
      }
 }
 
 for( int i=0;i<a;i++) //multiplicacion
 
     for(int j=0;j<n;j++){
            multiplicacion[i][j]=A[i][j]*B[i][j];
      }
 
 
 
 cout<<"Suma:"<<endl;
 
 for( int i=0;i<a;i++){
 	
 	
     for(int j=0;j<n;j++){
 
            cout<<suma[i][j]<<endl;
            
      }
  }
  

 cout<<"resta:"<<endl;
 for( int i=0;i<a;i++){
 	  
 	
     for(int j=0;j<n;j++){
 
            cout<<resta[i][j]<<endl;
            
      }
  }
  
  cout<<"multiplicacion:"<<endl; 
 for( int i=0;i<a;i++){
 	   
 	
     for(int j=0;j<n;j++){
 
            cout<<multiplicacion[i][j]<<endl;
            
      }
  }   
           
}
