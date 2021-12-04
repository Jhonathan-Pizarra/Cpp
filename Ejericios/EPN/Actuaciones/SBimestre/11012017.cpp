// la unioca fila con valores quemados es la primera
// // las siguientes dos el doble de la primera
//ASI:
// 1 3  5  7   9
// 2 6  10 14 18 (Es el doble)
// 4 12 20 28 36
// 8 24 40 56 72

#include <iostream>
using namespace std;
int main (){
	
	int matriz [4][5]={1,3,5,7,9};
	
	//  Forma manual
	// cout<<matriz[1][0]=2*matriz[0][0];
	// cout<<matriz[1][1]=2*matriz[0][1];
	// cout<<matriz[1][0]=2*matriz[0][2];
	// Asì hasta 5 veces..
	

	for (int j=0; j<5; j++){
			matriz[1][j]=2*matriz[0][j];
		}
	
	
	
	for (int j=0; j<5; j++){
			matriz[2][j]=2*matriz[1][j];
		}
		
		
		
	for (int j=0; j<5; j++){
			matriz[3][j]=2*matriz[2][j];
		}
	
	
	

	for( int i=0; i<4; i++){
		for ( int j=0; j<5; j++){
		cout<<matriz[i][j]<<" ";
			
		}
	cout<<endl;
	}
	
}
