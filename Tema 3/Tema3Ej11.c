#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int n, exito = 0, i;
    printf("Introduzca un numero para ver si es primo: ");
    scanf("%i", &n);
    if (n == 0)
    {
        printf("El numero no es primo");
    }
    i = 2;
    while (i < n && exito == 0)
    {
        if(n % i == 0)
            exito = 1;
        i++;
    }
    if (exito == 1)
    {
        printf("El numero no es primo");
    }else
    {
        printf("El numero es primo");
    }
}
