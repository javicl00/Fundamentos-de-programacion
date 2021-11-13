#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int main(int argc, char const *argv[])
{
    int n, i, j;
    float v[TAM], m[TAM], acumulador = 0;

    printf("Introduzca el tamaño de los vectores: ");
    scanf("%i", &n);

    printf("Introduzca los elementos del primer vector: ");
    for (i = 0; i < n; i++)
        {
            scanf("%f", &v[i]);
        }

    printf("Introduzca los elementos del segundo vector: ");
    for (j = 0; j < n; j++)
        {
            scanf("%f", &m[j]);
        }

    for (i = 0; i < n; i++)
    {
      acumulador = acumulador + v[i]*m[i];       
    }

    printf("El producto escalar de los dos vectores es %f", acumulador);

   /* int i = 0, tam;
    float esc = 0, v1[TAM], v2[TAM];
    printf("Introduce el tamaño de los vectores");
    scanf("%i", &tam);

    while (i < tam)
    {
        printf("Introducevalor %i del vector 1. \n", i);
        scanf("%f", &v1[i]);

        printf("Introducevalor %i del vector 2. \n", i);
        scanf("%f", &v2[i]);

        esc = esc + v1[i] * v2[i];

        i++;
    }

    printf("El producto escalar es %f", esc);*/
    
    
    return 0;
}
