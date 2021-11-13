#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int n, i, j, resultado;

    for (i = 1; i < 11; i++)
    {
        printf("\n----------Tabla del %i----------\n", i);
        for (j = 1; j < 11; j++)
        {
            resultado = i * j;
            printf("%i * %i = %i\n", i, j, resultado);
        }
        
    }
    
}