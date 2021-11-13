#include <stdio.h>
#include <stdlib.h>

#define NFIL 100
#define NCOL 100
#define TAM 50

void pEscalar(float m[NFIL][NCOL], int *fila1, int *fila2, int filas, int columnas);
float escalar(float v1[TAM], float v2[TAM], int columnas);

int main(int argc, char const *argv[])
{
    float m[NFIL][NCOL];
    int fila1, fila2, filas, columnas;

    printf("Cuantas filas quiere en su matriz: ");
    scanf("%i", &filas);

    printf("Cuantas columnas quiere en su matriz: ");
    scanf("%i", &columnas);

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }

    pEscalar(m, &fila1, &fila2, filas, columnas);

    printf("Las filas que tienen el mayor producto escalar son \n Fila 1: %i \n Fila 2: %i", fila1, fila2);

    return 0;
}

void pEscalar(float m[NFIL][NCOL], int *fila1, int *fila2, int filas, int columnas)
{
/*aqui habia pensado tener dos vectores auxiliares para ir haciendo el producto escalar de estos, de forma que quedase guardado en un auxiliar para despues compararlo en un if*/
    float vAux[TAM], vAux2[TAM], mayor = 0, aux = 0, aux2 = 0;
/*es en este punto donde me quedo bloqueado, pues no se me ocurre cómo seguir con el ejercicio*/
   for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            
        }
        aux = escalar(vAux, vAux2, columnas);       
    }
}

/*hice esta funcion para tener un poco mas limpio el codigo*/
float escalar(float v1[TAM], float v2[TAM], int columnas)
{
    float aux = 0;
    for (int i = 0; i < columnas; i++)
    {
           aux += v1[i]*v2[i];
    }
    return aux;
}
