#include <stdio.h>
int main()
{
    float m[100][100], suma = 0;
    int i, j, filas, columnas;
    printf("Introduce las filas que quieres que tenga la matriz.\n");
    scanf("%i", &filas);
    printf("Introduce las columnas que quieres que tenga la matriz. \n");
    scanf("%i", &columnas);
    for (i = 0; i < filas; i++)
    {
        printf("\n");
        for (j = 0; j < columnas; j++)
        {
            printf("Introduce los valores de la matriz.\n");
            scanf("%f", &m[i][j]);
        }
    }
    for (i = 0; i < filas; i++)
    {
        printf("\n");
        for (j = 0; j < columnas; j++)
        {
            printf("%f \t", m[i][j]);
        }
    }
    j = 0;
    while (j <= filas)
    {
        suma = suma + m[j][(filas - j)];
        j++;
    }
    printf("%f", suma);
    return 0;
}
