#include <stdio.h>
#include <stdlib.h>

void pFinal(float * euros, float porcentaje);

int main(int argc, char const *argv[])
{
    
    float euros, porcentaje;

    printf("Escribe una cantidad de euros y el porcentaje a aplicar. \t\n");
    printf("Euros: ");
    scanf("%f", &euros);
    printf("Porcentaje: ");
    scanf("%f", &porcentaje);

    pFinal(&euros, porcentaje);

    printf("El precio final se queda en %f", euros);


    return 0;
}

void pFinal(float * euros, float porcentaje)
{
    *euros = *euros - *euros * porcentaje/100;
}