#include <iostream>
#include <conio.h>
using namespace std;
int ToresDeHanoiIterativo(int nroDiscos,int origen,int destino,int auxiliar)
{
 char pilaO[10],pilaD[10],pilaX[10];
 int pilaN[10];
 int tope;
 char varaux;
 bool band;
 tope=0;
 band=false;
 while(nroDiscos>0 && band==false)
 {
   while(nroDiscos>1)
   {
     tope=tope+1;
     pilaN[tope]=nroDiscos;
     pilaO[tope]=origen;
     pilaD[tope]=destino;
     pilaX[tope]=auxiliar;
     nroDiscos=nroDiscos-1;
     varaux=destino;
     destino=auxiliar;
     auxiliar=varaux;
   }
   
   cout<<"Mover un disco de"<<origen<<" hacia->"<<destino<<endl;
   band=true;
   if(tope>0)
   {
   nroDiscos=pilaN[tope];
   origen=pilaO[tope];
   destino=pilaD[tope];
   auxiliar=pilaX[tope];
   tope=tope-1;
          cout<<"Mover un disco de"<<origen<<"hacia->"<<destino<<endl;
   nroDiscos=nroDiscos-1;
   varaux=origen;
   origen=auxiliar;
   auxiliar=varaux;
   band=false;
   }
 }
}
int main()
{
  int nroDiscos;
  int O=1, D=3, A=2;
  cout<<"Ingrese el numero de discos:";
  cin>>nroDiscos;
  ToresDeHanoiIterativo(nroDiscos,O,D,A);  
}
