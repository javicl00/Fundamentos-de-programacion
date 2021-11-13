#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero, v[10], i;
    printf("Escribe los numeros del vector \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%i", &v[i]);
    }
    printf("Escriba que numero desea buscar: ");
    scanf("%i", &numero);
    int exito = 0;
    i = 0;
    while (i < 10 && exito == 0)
    {
        if (v[i] == numero)
        {
            exito = 1;
        }
    }
    if (exito == 1)
    {
        printf("El numero esta en el vector en la posicion %i", i);
    }
    else
    {
        printf("El numero no esta en el vector");
    }
    return 0;
}
