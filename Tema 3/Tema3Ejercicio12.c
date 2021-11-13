#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int n, i, exito, sumatorio = 0;
    printf("Introduzca un numero para ver si es perfecto: ");
    scanf("%i", &n);
    if (n == 0)
    {
        printf("No es numero perfecto");
    }
    else
    {
        i = 1;
        while (i < n)
        {
            if (n % i == 0)
            {
                sumatorio += i;
            }
            i++;
        }
        if (sumatorio == n)
        {
            printf("El numero es perfecto");
        }
        else
        {
            printf("El numero no es perfecto");
        }
    }
    i = 1;
    while (i < n)
    {
        if (n % i == 0)
        {
            sumatorio += i;
        }
        i++;
    }
    if (sumatorio == n)
    {
        printf("El numero es perfecto");
    }
    else
    {
        printf("El numero no es perfecto");
    }
}
