#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, i, sumador = 0;
    printf("Escribe el valor de a: ");
    scanf("%i", &a);
    printf("Escribe el valor de b: ");
    scanf("%i", &b);
    for (i = a; i <= b; i++)
    {
        sumador += pow(i, 2);
    }
    printf("La suma de los valores es %i", sumador);
    return 0;
}