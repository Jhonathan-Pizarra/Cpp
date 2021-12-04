#include<iostream>
using namespace std;
 
//funcion fibonacci
int fibonacci(int n)
{
 

int i=0,a=0,b=1,c=0;
    do
    {
    cout<<"Ingrese el numero de la cadena: ";
    cin>>n;
    }while(n<2);
 
cout<<a<<endl;cout<<b<<endl;
while(i<n-2)
    {
        c=a+b; 
        cout<<c<<endl;
        a=b; 
		b=c;
        i++;
    }
}

//funcion fibonacci con double
double fibonacci(double n)
{
 

double i=0,a=0,b=1,c=0;
    do
    {
    cout<<"Ingrese el numero de la cadena: ";
    cin>>n;
    }while(n<2);
 
cout<<a<<endl;cout<<b<<endl;
while(i<n-2)
    {
        c=a+b; 
        cout<<c<<endl;
        a=b; 
		b=c;
        i++;
    }
}
//llamado a la funcion fibonacci
int main()
{
double n; 
cout<<"Fibonacci con int: " <<endl;  
fibonacci(n);    
cout<<"  "<<endl;
cout<<"Fibonacci con double: " <<endl;  
fibonacci(n);
return 0;
}

