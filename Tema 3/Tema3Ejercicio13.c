#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int n, factorial = 1, i, j, exito = 0;

    printf("Introduzca un umbral: ");
    scanf("%i", &n);

    i = 1;  
    while (exito == 0)
    {
        factorial = factorial * i;
        if (factorial > n)
        {
            exito = 1;
        }
        i++; 
    }
    i--;
    printf("El numero más bajo que supera el umbral es %i", i);

    
    
}