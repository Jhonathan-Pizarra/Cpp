// Realizar una aplicacion que permita el ingreso de una cadena y determine si es un palindromo. 
#include <stdio.h>
#include <string.h>
 
int main()
{
    char palabra[20];
    int i, j;
    int palindromo = 1;
    printf("Escribe una cadena: ");
    fflush(stdout);
    gets(palabra);
    j=strlen(palabra)-1;
    for(i=0; i<strlen(palabra)/2; i++, j--) {
        printf("Comprobando... %c==%c\n", *(palabra+i), *(palabra+j));
        if (*(palabra+i)!=*(palabra+j)) {
            palindromo = 0;
            break;
        }
    }
    if (palindromo)
        printf("\nEs un palindrimo.\n");
    else
        printf("\nNo es un palindrimo.\n");
 
    return (0);
}

