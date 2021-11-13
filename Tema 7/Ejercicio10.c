#include <stdio.h>
typedef struct
{
    float matriz[100][100];
    int filas;
    int columnas;
} Matriz;
void matrizTraspCuad(Matriz m1, Matriz m2, Matriz m3);
void triangularSuperior(Matriz m1);
int main()
{
    Matriz m1, m2, m3;
    int i, j;
    printf("Introduce filas m1(sirve tanto para m2 y m3).\n");
    scanf("%i", &m1.filas);
    m2.filas = m1.filas;
    m3.filas = m2.filas;
    printf("Introduce columnas m1(sirve tanto para m2 y m3).\n");
    scanf("%i", &m1.columnas);
    m2.columnas = m1.columnas;
    m3.columnas = m2.columnas;
    for (i = 0; i < m1.filas; i++)
    {
        printf("\n");
        for (j = 0; j < m1.columnas; j++)
        {
            printf("Introduce los elementos de la matriz en la posicion (%i,%i).\n", i, j);
            scanf("%f", &m1.matriz[i][j]);
        }
    }
    printf("\n-----------------Matriz 1-------------------\n");
    for (i = 0; i < m1.filas; i++)
    {
        printf("\n");
        for (j = 0; j < m1.columnas; j++)
        {
            printf("%f \t", m1.matriz[i][j]);
        }
    }
    printf("\n");
    matrizTraspCuad(m1, m2, m3);
    triangularSuperior(m1);

    printf("\n-----------------Triangular superior--------------------\n");
    for (int i = 0; i < m1.filas; i++)
    {
        printf("\n");
        for (int j = 0; j < m1.columnas; j++)
        {
            printf("%f\t", m1.matriz[i][j]);
        }
    }

    return 0;
}
void matrizTraspCuad(Matriz m1, Matriz m2, Matriz m3)
{
    int i, j;
    printf("\n-----------------Matriz 1 Traspuesta-------------------\n");
    for (i = 0; i < m1.filas; i++)
    {
        printf("\n");
        for (j = 0; j < m1.columnas; j++)
        {
            printf("%f \t", m1.matriz[j][i]);
        }
    }
}
void triangularSuperior(Matriz m1)
{
    int k = 1;
    int i = m1.filas - k, j;
    while (i > 0)
    {
        j = m1.columnas - k - 1;
        while (j >= 0 && m1.matriz[i][j] != m1.matriz[i][i])
        {
            m1.matriz[i][j] = 0;
            j--;
        }
        i--;
        k++;
    }
    printf("\n-----------------Triangular superior--------------------\n");
    for (int i = 0; i < m1.filas; i++)
    {
        printf("\n");
        for (int j = 0; j < m1.columnas; j++)
        {
            printf("%f\t", m1.matriz[i][j]);
        }
    }
}
