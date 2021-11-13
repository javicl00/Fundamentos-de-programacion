#include <stdio.h>
#include <stdlib.h>

#define NFIL 100
#define NCOL 100

void matrices(int m1[NFIL][NCOL], int i1, int j1, int m2[NFIL][NCOL], int msuma[NFIL][NCOL], int mresta[NFIL][NCOL], int *nminimo1, int *nmax1, int *nminimo2, int *nmax2, int *primo1, int *primo2);
int esPrimo(int m1[NFIL][NCOL], int i1, int j1);

int main(int argc, char const *argv[])
{  
    int primo1, primo2, i1, j1, i, j, m1[NFIL][NCOL], m2[NFIL][NCOL], msuma[NFIL][NCOL], mresta[NFIL][NCOL], nmin1, nmax1, nmin2, nmax2;

    printf("Cuantas filas quieres en tu matriz \n");
    scanf("%i", &i1);

    printf("Cuantas columnas quieres en tu matriz \n");
    scanf("%i", &j1);

    printf("Escribe los elementos de tu matriz 1\n");
    for (i = 0; i < i1; i++)
    {
        for (j = 0; j < j1; j++)
        {
            scanf("%i", &m1[i][j]);
        }
    }

    printf("Escribe los elementos de tu matriz 2\n");
    for (i = 0; i < i1; i++)
    {
        for (j = 0; j < j1; j++)
        {
            scanf("%i", &m2[i][j]);
        }
    }

    matrices(m1, i1, j1, m2, msuma, mresta, &nmin1, &nmax1, &nmin2, &nmax2, &primo1, &primo2);

    printf("\n-----------------------Matriz suma-----------------------\n");
    for (i = 0; i < i1; i++)
    {
        printf("\n");
        for (j = 0; j < j1; j++)
        {
            printf("%i    ", msuma[i][j]);
        }
    }

    printf("\n-----------------------Matriz resta-----------------------\n");
    for (i = 0; i < i1; i++)
    {
        printf("\n");
        for (j = 0; j < j1; j++)
        {
            printf("%i    ", mresta[i][j]);
        }
    }

    printf("\nEl numero maximo de m1 es %i, y el minimo es %i", nmax1, nmin1);

    printf("\nEl numero maximo de m2 es %i, y el minimo es %i", nmax2, nmin2);

    if (primo1 == 0)
    {
        printf("\nLa matriz 1 tiene algun primo");
    }
    else
    {
        printf("\nLa matriz 1 no tiene ningun primo");
    }

    if (primo2 == 0)
    {
        printf("\nLa matriz 2 tiene algun primo");
    }
    else
    {
        printf("\nLa matriz 2 no tiene ningun primo");
    }

    return 0;
}

void matrices(int m1[NFIL][NCOL], int i1, int j1, int m2[NFIL][NCOL], int msuma[NFIL][NCOL], int mresta[NFIL][NCOL], int *nminimo1, int *nmax1, int *nminimo2, int *nmax2, int *primo1, int *primo2)
{
    int i, j;
    //suma
    for (i = 0; i < i1; i++)
    {
        for (j = 0; j < j1; j++)
        {
            msuma[i][j] = m1[i][j] + m2[i][j];
        }
    }
    //resta
    for (i = 0; i < i1; i++)
    {
        for (j = 0; j < j1; j++)
        {
            mresta[i][j] = m1[i][j] - m2[i][j];
        }
    }
    //min y max de matriz 1
    *nminimo1 = m1[0][0];
    *nmax1 = m1[0][0];

    for (i = 0; i < i1; i++)
    {
        for (j = 0; j < j1; j++)
        {
            if (*nminimo1 > m1[i][j])
            {
                *nminimo1 = m1[i][j];
            }
            else if (*nmax1 < m1[i][j])
            {
                *nmax1 = m1[i][j];
            }
        }
    }

    //min y max de matriz 2
    *nminimo2 = m2[0][0];
    *nmax2 = m2[0][0];

    for (i = 0; i < i1; i++)
    {
        for (j = 0; j < j1; j++)
        {
            if (*nminimo2 > m2[i][j])
            {
                *nminimo2 = m2[i][j];
            }
            else if (*nmax2 < m2[i][j])
            {
                *nmax2 = m2[i][j];
            }
        }
    }
    //primos
    *primo1 = esPrimo(m1, i1, j1);
    *primo2 = esPrimo(m2, i1, j1);
}

int esPrimo(int m1[NFIL][NCOL], int i1, int j1)
{
    int i, j, cont, primo;

    i = 0;

    primo = 0;
    cont = 2;
    
    while (i < i1 && primo == 0)
    {
        j = 0;
        while (j < j1 && primo == 0)
        {
            while (i > 1 && i < m1[i][j] && primo == 0)
            {
                if (m1[i][j] == 1)
                {
                    primo = 1;
                }else if (m1[i][j] % cont != 0){
                    primo = 1;
                }else{
                    cont++;
                    
                }
            }
        j++;
        }
        i++;
    }
    return primo;
}
