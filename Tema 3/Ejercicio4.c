#include <stdio.h>

int main()
{
    float gasto = 0, sumatorio = 0, max, i;
    int exito = 0;

    printf("Cuanto se puede gastar como maximo: ");
    scanf("%f", &max);

    printf("Vaya escribiendo los gastos: ");

    while(sumatorio <= max)
    {
        printf("Escriba el gasto: ");
        scanf("%f", &gasto);
        sumatorio += gasto;
    }
    printf("Ha superado el limite");

    
    return 0;
}
