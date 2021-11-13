#include <stdio.h>
#include <stdlib.h>
int main(){
    int i = 0, j = 0, filas, columnas, exito;
    float umbral;
    float m[100][100];
    printf("Cuantas filas quieres en la matriz: ");
    scanf("%i", &filas);
    printf("Cuantas columnas quieres en la matriz: ");
    scanf("%i", &columnas);
    printf("Cual es tu umbral: ");
    scanf("%f", &umbral);
    printf("Escribe los numeros de tu matriz: ");
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }
    exito = 0;
    i = 0;
    while (i < filas && exito == 0)
    {
         j = 0;
        while (j < columnas && exito == 0)
        {
            if (m[i][j] > umbral)
            {
                exito = 1;
            }
            else
            {
                 j++;
            }
        }
        if (exito == 0)
            i++;
    }
    if (exito == 0)
    {
        printf("No se supera dicho umbral");
    }
    else
    {
        printf("Si se supera dicho umbral");
    }
    return 0;
}
