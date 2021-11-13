#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define nfil 100
#define ncol 100
#define tam 100

int matrices (int numMatrices, int filas[tam], int columnas[tam]);

int main(int argc, char const *argv[])
{
    int filas[tam], columnas[tam], numMatrices;

    printf("cuantas matrices quiere: ");
    scanf("%i", &numMatrices);

    int matrices(numMatrices, filas[tam], columnas[tam]);

    return 0;
}

int matrices (int numMatrices, int filas[tam], int columnas[tam])
{

    float matrizMatrices[nfil][ncol][nfil][ncol];
    for (int i = 0; i < numMatrices; i++)
    {
        printf("Cuantas filas quiere en su matriz: ");
        scanf("%i", &filas[i]);

        printf("Cuantas columnas quiere en su matriz: ");
        scanf("%i", &columnas[i]);

        printf("Escribe los elementos de la matriz\n");
        for (int i = 0; i < numMatrices; i++)
        {
            for (int j = 0; j < numMatrices; j++)
            {
                for (int k = 0; k < filas[i]; k++)
                {
                    for (int l = 0; l < columnas[j]; l++)
                    {
                        scanf("%f", &matrizMatrices[i][j][k][l]); 
                    }
                    
                }
                
            }
            
        }
        
    }
}