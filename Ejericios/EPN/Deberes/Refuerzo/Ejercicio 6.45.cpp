
#include<stdio.h>
#include<conio.h>
int MCD(int x, int y)
{
    if(y==0)
        return x;
    else
        return MCD(y, x%y);
}
int main()
{
    int num1=0,num2=0;
    printf("::MAXIMO COMUN DIVISOR::\n");
    printf("Introduce el primer numero: ");
    scanf("%i",&num1);
    printf("Introduce el segundo numero: ");
    scanf("%i",&num2);
    printf("\tEl resultado es: %i\n", MCD(num1, num2));
    getch();
    return 0;
   
}
