#include <stdio.h>
int DSIgualFila(int v[100][100], int filas, int columnas);
int main(int argc, char const *argv[])
{
    int i, j, v[100][100], filas, columnas, res;
    printf("Escriba las filas que desea");
    scanf("%i", &filas);
    printf("Escriba las columnas que desea");
    scanf("%i", &columnas);
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            scanf("%i", &v[i][j]);
        }
    }
    res = DSIgualFila(v, filas, columnas);
    if (res == 0)
    {
        printf("La diagonal secundaria no suma igual que alguna fila");
    }
    else
    {
        printf("La diagonal secundaria suma igual que alguna de las filas de la matriz");
    }
    return 0;
}
int DSIgualFila(int v[100][100], int filas, int columnas)
{
    int i, j, ds = 0, sumatorio, exito = 0;
    i = 0;
    while (i <= filas)
    {
        j = 0;
        while (j <= columnas)
        {
            ds += v[i][i-j-1];
            j++;
        }
        i++;
    }
    i = 0;
    while (i <= filas && exito == 0)
    {
        sumatorio = 0;
        j = 0;
        while (j <= columnas && exito == 0)
        {
            sumatorio += v[i][j];
            if (sumatorio == ds)
            {
                exito = 1;
            }
        }
    }
    return exito;
}
