#include <stdio.h>
#include <stdlib.h>
#define TAM 100
int main(int argc, char const *argv[])
{
    int  i;
    float media, v[TAM], sumatorio = 0;

    printf("Escribe los elementos del vector. Cuando quieras parar mete un 0");

    i = 0;
    scanf("%f", &v[i]);
    sumatorio += v[i];
    i++;
    while (i < TAM && v[i-1] != 0)
    {
        scanf("%f", &v[i]);
        sumatorio += v[i];
        i++;
    }

    media = sumatorio/(i-1);
    printf("%f", media);
}