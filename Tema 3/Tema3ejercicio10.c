#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int n, aux, i, exito = 0;
    printf("Introduzca un numero para ver si tiene cuadrado perfecto: ");
    scanf("%i", &n);
    i = 0;
    while(exito == 0 && i <= n)
        {
            aux = i*i;
            if (aux == n)
            {
                exito = 1;
            }
            i++;
        }
    if (exito == 1)
    {
        printf("Existe un cuadrado perfecto, que es %i * %i", aux, aux);
    }else
    {
        printf("no existe cuadrado perfecto");
    }
    return 0;
}
