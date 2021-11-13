#include <stdio.h>
#include <stdlib.h>
float maximoVector (int v[100], int n);
int main()
{
    int v[100], n, i, max;
    printf("introduce el tamaño del vector");
    scanf("%i", &n);
    printf("introduce los numeros del vector");
/*la entrada por teclado es opcional. Puedes poner el vector fijo*/
    for(i = 0; i < n; i++)
        scanf("%i",&v[i]);
    max = maximoVector(v, n);
    printf("El maximo del vector es %i", max);
    return 0;
}
float maximoVector (int v[100], int n)
{
   float max = v[0];
   int i;
   for (i = 0; i < n; i++)
   {
       if (v[i] > max)
       {
           max = v[i];
       }
   }
   return max;
}
