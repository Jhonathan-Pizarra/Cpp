#include<iostream>
using namespace std;
int main(){
int a= 5;
int n;


char materias[5]={'P','O','B','C','F'};

//cout<<"Ingrese el numero de filas: "<<endl;

cout<<materias[0]<<"\t";
cout<<materias[1]<<"\t";
cout<<materias[2]<<"\t";
cout<<materias[3]<<"\t";
cout<<materias[4]<<"\t";
cout<<endl;
  
cout<<"Ingrese el numero de alumnos: "; 
  cin>>n;
  int  A[a][n],suma[a][n];
  int notas_estudiantes[n][5];
  
  
  cout<<"Ingrese las notas (/10): "<<endl;	
  cout<<endl;
	
	for (int i=0; i<n ; i++){// bucle (
	cout<<"Estudiante "<<i+1<<endl;
	for (int j=0; j<5; j++){ // Le pongo 5 por la matriz (el estudiante representa a i, y 5 a j)
		cin>> notas_estudiantes[i][j]; // Para ingresar i y j
	} 
cout<<endl;
}
    
  
  for (int i= 0;i<n;i++){
            for(int j=0;j<5;j++){
                 
                    cout<<notas_estudiantes[i][j]<<"\t";
             }
            cout<<"\n";
             
         }
         cout<<endl;
         cout<<"PROMEDIOS: "<<endl;
  
  
 cout<<notas_estudiantes[0][1]+notas_estudiantes[0][2]+notas_estudiantes[0][3]+notas_estudiantes[0][4]+notas_estudiantes[0][0];
 cout<<"  ";
 cout<<"  ";
 cout<<"  ";
 cout<<notas_estudiantes[1][1]+notas_estudiantes[1][2]+notas_estudiantes[1][3]+notas_estudiantes[1][4]+notas_estudiantes[1][0];
 cout<<"  ";
 cout<<"  ";
 cout<<"  ";
 cout<<notas_estudiantes[2][1]+notas_estudiantes[2][2]+notas_estudiantes[2][3]+notas_estudiantes[2][4]+notas_estudiantes[2][0];
 cout<<"  ";
 cout<<"  ";
 cout<<"  ";
 cout<<notas_estudiantes[3][1]+notas_estudiantes[3][2]+notas_estudiantes[3][3]+notas_estudiantes[3][4]+notas_estudiantes[3][0];
 cout<<"  ";
 cout<<"  ";
 cout<<"  ";
 cout<<notas_estudiantes[4][1]+notas_estudiantes[4][2]+notas_estudiantes[4][3]+notas_estudiantes[4][4]+notas_estudiantes[4][0];
 
 
 
 
 }
 
 
