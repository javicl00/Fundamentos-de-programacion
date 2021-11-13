#include <stdio.h>
#include <stdlib.h>
#include <String.h>
typedef struct
{
    char cadena[100];
    float vector[100];
    int n;
    float media;
}Estructura;

void estadisticas(Estructura e1[100][100], int n, float *mediaTotal, int *lonMax, char pLarga[100]);
float media(Estructura e1[100][100]);

int main(int argc, char const *argv[])
{
    int n, lonMax;
    float mediaTotal;
    char pLarga[100];
    Estructura e1 = {"casa", {2.4, 1.1, 3.5}, 3, 0};
    Estructura e2 = {"armario", {10.5, 9.5}, 2, 0};
    Estructura e3 = {"butaca", {5.4, 3.1, 5.5, 9.8}, 4, 0};
    Estructura e4 = {"chimenea", {2.1, 3.5}, 2, 0};
    Estructura e5 = {"escalera", {6.1, 3.1, 4.8, 3.5}, 4, 0};
    Estructura e6 = {"cocina", {1.4}, 1, 0};
    Estructura e7 = {"despensa", {4.1, 16.0, 8.7}, 3, 0};
    Estructura e8 = {"mesa", {1.4, 2.1, 3.5}, 3, 0};
    Estructura e9 = {"televisor", {1.4, 2.2}, 2, 0};
    Estructura m1[100][100] = { {e1, e2, e3},
                                {e4, e5, e6},
                                {e7, e8, e9} };

    estadisticas(m1, n, &mediaTotal, &lonMax, pLarga);
    return 0;
}

void estadisticas(Estructura j1[100][100], int n, float *mediaTotal, int *lonMax, char pLarga[100])
{
    int i, j = 0, contador = 0;
    float sumador = 0;
    char lonMay[100] = {};
//media de cada elemento de la matriz
    for (i = 0; i < j1[i][j].n; i++)
    {
        for (j = 0; j < j1[i][j].n; j++)
        {
            j1[i][j].media = media(j1);
        }
    }
//media total
    for (i = 0; i < j1[i][j].n; i++)
    {
        for (j = 0; j < j1[i][j].n; j++)
        {
            sumador += j1[i][j].media;
            contador++;
        }
    }
    *mediaTotal = sumador/contador;
//longitud mayor
    for (i = 0; i < j1[i][j].n; i++)
    {
        for (j = 0; j < j1[i][j].n; j++)
        {
            if (strlen(j1[i][j].cadena) > strlen(lonMay))
            {
                strcpy(lonMay, j1[i][j].cadena);
            }
    }
//palabra mas larga de cada columna
}
float media(Estructura e1[][]){
    float media = 0, sumatorio = 0;
    int j = 0, cont = 0;
    for (int i = 0; i < e1[i][j].n ; i++)
    {
        for (j = 0; j < e1[i][j].n; j++)
        {
            sumatorio += e1[i][j].vector[j];
            cont++;
        }
    }
    media = sumatorio/cont;
    return media;
}
