#include<iostream> 
#include<math.h> 
using namespace std;
double distancia (int, int, int ,int);
int main()
{
int x1,x2, y1,y2;
cout<<"ingrese coordena x : "<<endl;
	cin>>x1;
	cout<<",";
	cin>>x2;
	
	cout<<"ingrese coordenanda y: "<<endl;
	cin>>y1;
	cout<<",";
	cin>>y2;
	cout<<"  "<<endl;
	
	cout<<"La distancia es: "<<distancia (x1,x2,y1,y2)<<endl;
	return 0;
	
}

 double distancia (int x1, int x2, int y1,int y2){

double d;  /* Variables locales de la funci¢n distancia */
 d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
 
 return d;
 }
