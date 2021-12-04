#include<iostream>
#include <stdio.h>
 
using namespace std;
int main()
{
unsigned int register i;
unsigned int register j;
unsigned int n,N;

printf("cuantas filas (entre 0-13):");

scanf("%u",&n);

N = 2 * n - 1; /* numero de columnas*/
int a[n][2 * n - 1];
for (i=0;i<n;i++)
{
for (j=0;j<=(N-1);j++)
{
{a[i][j] = 0 ; a[0][n-1] = 1; a[n-1][0] = 1;
if (i>=1 && j>=1 ) a[i][j] = a[i-1][j-1] + a[i-1][j+1];
a[n-1][N-1]= 1;
cout<<"  " <<a[i][j];
}
}printf(" \n");
}
return 0;
}
