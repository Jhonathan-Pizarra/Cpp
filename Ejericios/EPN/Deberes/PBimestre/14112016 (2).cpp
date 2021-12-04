#include <iostream>
using namespace std;
int main(){
	int x, y;
	cout<< "Ingrese su nota x: \n"<<endl; 
	cin>>x;
	cout<< "Ingrese su nota y: \n"<<endl;
	cin>>y;
	cout<<   "Su nota final es:"<<endl;
	cout<< x+y;
	cout<<"\n"<<endl;
	if(x+y>=14){
		cout<< "Usted ha aprobado \n"<<endl;
	}
	if(x+y>=10 && x+y<14){
		cout<<"Supletorio \n"<<endl;
	}
	if(x+y<10){
		cout<<" Usted ha sido reprobado \n"<<endl;
	}
	return 0;}
