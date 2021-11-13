#include <stdio.h>
void main()
{
    int i = 0, tam = 4, aux;
    float v[] = {4, 3, 2, 1};
    int z = tam - 1;
    while (z > i)
    {
        aux = v[i];
        v[i] = v[z];
        v[z] = aux;
        i++;
        z--;
    }
    printf("Vector v[] invertido: \n");
    for (i = 0; i < tam; i++)
    {
        printf("%f", v[i]);
    }
}
