// matriz de 5 por m
//Prueba practica 3

#include <iostream>
//#include <conio.h>
using namespace std;
int main(){
	
	int m;
	
	cout<<"Ingrese el numero de estudiantes"<<endl;
	cin>>m;
	
	char pro[5][m]={};
	
	pro[0][0]=('P'); // Porgramacion estructurada
	pro[0][1]=('E'); // Porgramacion Orientada
	pro[0][2]=('B'); // Base de deatos
	pro[0][3]=('C'); // Calculo
	pro[0][4]=('F'); // Fisica	
	cout<<pro[0][0]<<endl;
	cout<<endl;
	
	char FI[5][m]={};
	
	FI[1][0]=('P'); // Porgramacion estructurada
	FI[1][1]=('E'); // Porgramacion Orientada
	FI[1][2]=('B'); // Base de deatos
	FI[1][3]=('C'); // Calculo
	FI[1][4]=('F'); // Fisica
	cout<<FI[1][0]<<endl;
	cout<<endl;
	
	char cal[5][m]={};
	
	cal[2][0]=('P'); // Porgramacion estructurada
	cal[2][1]=('E'); // Porgramacion Orientada
	cal[2][2]=('B'); // Base de deatos
	cal[2][3]=('C'); // Calculo
	cal[2][4]=('F'); // Fisica
	
	cout<<cal[2][0]<<endl;
	cout<<endl;
	
	
	char b[5][m]={};
	
	b[3][0]=('P'); // Porgramacion estructurada
	b[3][1]=('E'); // Porgramacion Orientada
	b[3][2]=('B'); // Base de deatos
	b[3][3]=('C'); // Calculo
	b[3][4]=('F'); // Fisica
	
	cout<<b[3][0]<<endl;
	cout<<endl;
	
	
	char e[5][m]={};
	
	e[4][0]=('P'); // Porgramacion Orientada
	e[4][1]=('E'); // Porgramacion Estructada
	e[4][2]=('B'); // Base de deatos
	e[4][3]=('C'); // Calculo
	e[4][4]=('F'); // Fisica
	
	cout<<e[3][0]<<endl;
	cout<<endl;
	
	
	int notas [m][5]={};
	
	cin>>notas[m][0];
	cin>>notas[m][1];
	cin>>notas[m][2];
	cin>>notas[m][3];
	cin>>notas[m][4];
	cout<<endl;
	
	
	for (notas=0; notas<=10, notas++){
		cout<<notas[m][5];
	}
	if (notas<0 && notas>10)
	cout<<"Fuera de Rango"<<endl;
	
	
	
	
}
