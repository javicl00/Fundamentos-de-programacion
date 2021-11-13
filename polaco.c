#include <stdio.h>
#include <stdlib.h>

#define TAM 100

void matrices(int m1[TAM][TAM], int m2[TAM][TAM], int suma[TAM][TAM], int resta[TAM][TAM], int *maximo1, int *minimo1, int *maximo2, int *minimo2, int *enc1, int *enc2);

int main(int argc, char const *argv[])
{

    int m1[TAM][TAM] = {{5, 2, 3}, {9, 1, 4}, {7, 8, 6}}, m2[TAM][TAM] = {{5, 2, 3}, {9, 1, 4}, {7, 8, 6}};
    int suma[TAM][TAM], resta[TAM][TAM], maximo1, minimo1, maximo2, minimo2, enc1 = 0, enc2 = 0;
    int i, j;

    matrices(m1, m2, suma, resta, &maximo1, &minimo1, &maximo2, &minimo2, &enc1, &enc2);

    printf("\n-------------Matriz suma resultante----------------\n");

    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%i ", suma[i][j]);
        }
    }

    printf("\n-------------Matriz resta resultante----------------\n");

    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%i ", resta[i][j]);
        }
    }

    printf("\n------------Numero maximo y minimo de cada matriz-----------\n");

    printf("El numero mayor y minimo de la matriz 1: (%i,%i).\nEl numero mayor y minimo de la matriz 2: (%i,%i).\n", maximo1, minimo1, maximo2, minimo2);

    printf("\n------------Numeros primos en la matrices--------------\n");

    if (enc1 == 1)
    {
        printf("Hay al menos un numero primo en la mtriz.\n");
    }
    else
    {
        printf("No hay ningun numero primo en la matriz 1.\n");
    }

    if (enc2 == 1)
    {
        printf("Hay al menos un numero primo en la mtriz.\n");
    }
    else
    {
        printf("No hay ningun numero primo en la matriz 1.\n");
    }

    return 0;
}

void matrices(int m1[TAM][TAM], int m2[TAM][TAM], int suma[TAM][TAM], int resta[TAM][TAM], int *maximo1, int *minimo1, int *maximo2, int *minimo2, int *enc1, int *enc2)
{

    int i, j, cont1 = 0, cont2 = 0;

    *minimo1 = m1[0][0];
    *maximo1 = m1[0][0];

    *minimo2 = m2[0][0];
    *maximo2 = m2[0][0];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            suma[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            resta[i][j] = m1[i][j] - m2[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            if ((*minimo1) > m1[i][j])
            {
                (*minimo1) = m1[i][j];
            }

            if ((*maximo1) < m1[i][j])
            {
                (*maximo1) = m1[i][j];
            }

            if ((*minimo2) > m1[i][j])
            {
                (*minimo2) = m1[i][j];
            }

            if ((*maximo2) < m1[i][j])
            {
                (*maximo2) = m1[i][j];
            }
        }
    }

    while ( (*enc1) == 0 ||  (i = 2))
    {
        for (i = 0; i < 3 && (*enc1) == 0; i++)
        {
            for (j = 0; j < 3 && (*enc1) == 0; j++)
            {
                for (int z = 2; z < m1[i][j]; z++)
                {

                    if (m1[i][j] % z == 0)
                    {
                        (*enc1) == 1;
                        break;
                    }
                }
            }
        }
    }

    while ((*enc2) == 0 || (i = 2))
    {
        for (i = 0; i < 3 && (*enc2) == 0; i++)
        {
            for (j = 0; j < 3 && (*enc2) == 0; j++)
            {
                for (int z = 1; z < m2[i][j]; z++)
                {

                    if (m2[i][j] % z == 0)
                    {
                        (*enc2) == 1;
                        break;
                    }
                }
            }
        }
    }
}