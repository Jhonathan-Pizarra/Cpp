#include<iostream> 
using namespace std;

int main(){ 

int n;
int j;
int i; 

cout<<"Bienvenido Usuario"<<endl;
cout<<"Ingrese un numero"<<endl;
cin>>n;

for(i=0;i<n;i++){ 
for(j=0;j<n;j++){ 
if(i+j==n/2-1 || i-j==n/2 ||j-i==n/2||i+j==n+n/2-1){ 
cout<<"*"; 
} 
else{ 
cout <<" "; 
} 
} 
cout<<endl; 
} 
return 0; 
}
