 #include <iostream>
 using namespace std;
 
 int main (){
 	
 	char dibujo='*';
    int n=5;
    int n2=0;
    int valor=1;
    n2=n;

//Triangulo centrado
   for(int i=1;i<=n;i++){
        for(int z=0;z<=n2;z++)
        {
            cout<<" ";
        }
        n2--;
        for(int j=1;j<=valor;j++){
            cout<<dibujo<<" ";
        }
        valor++;
        cout<<endl;
    }
//Triangulo invertido

   for(int i=0;i<=n;i++){
        for(int z=0;z<=n2;z++)
        {
            cout<<" ";
        }
        n2++;
        for(int j=1;j<=valor;j++){
            cout<<dibujo<<" ";
        }
        valor--;
        cout<<endl;
    }
    
    
 	
 }
 
