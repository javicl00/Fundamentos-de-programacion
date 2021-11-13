#include <stdio.h>
float sumaDS(float v[100][100], int filas, int columnas);
int main(int argc, char const *argv[])
{
    int i, j, filas, columnas;
    float v[100][100], res;
    printf("Escribe el numero de filas que quieres para la matriz");
    scanf("%i", &filas);
    printf("Escribe el numero de columnas que quieres para la matriz");
    scanf("%i", &columnas);
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            scanf("%f", &v[i][j]);
        }
    }
    for (i = 0; i < filas; i++)
    {
        printf("\n");
        for (j = 0; j < columnas; j++)
        {
            printf("%f", v[i][j]);
        }
    }
    res = sumaDS(v, filas, columnas);
    printf("%f", res);
    return 0;
}
float sumaDS(float v[100][100], int filas, int columnas)
{
    int i, j;
    float sumatorio = 0;
    i = filas;
    j = 1;
    while (j <= i)
    {
        sumatorio += v[i-j][i-j];
        j++;
    }
    return sumatorio;
}
