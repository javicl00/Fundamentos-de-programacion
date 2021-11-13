#include <stdio.h>
void funcion1(int filas, int columnas, int m[100][100], int x, int menor[100], int mayor[100], int *nmenores, int *nmayores, int *niguales);
int main()
{
  int filas, columnas, m[100][100], x, menor[100], mayor[100], nmenores = 0, nmayores = 0, niguales = 0, i, j;
  printf("Filas de la matriz.\n");
  scanf("%i", &filas);
  printf("Columnas de la matriz.\n");
  scanf("%i", &columnas);
  printf("Introduce un valor.\n");
  scanf("%i", &x);
  printf("\n");
  for (i = 0; i < filas; i++)
  {
    printf("\n");
    for (j = 0; j < columnas; j++)
    {
      printf("Introduce los elementos de la matriz.\n");
      scanf("%i", &m[i][j]);
    }
  }
  funcion1(filas, columnas, m, x, menor, mayor, &nmenores, &nmayores, &niguales);
  printf("\n----------------Vector de menores-------------------\n\n");
  for (i = 0; i <= filas; i++)
  {
    printf("%i ", menor[i]);
  }
  printf("\n");
  printf("\n----------------Vector de mayores-------------------\n\n");
  for (i = 0; i <= filas; i++)
  {
    printf("%i ", mayor[i]);
  }
  printf("\n");
  printf("\n----------------Cantidad de numeros-------------------\n\n");
  printf("Hay %i numeros superios al umbral\n", nmayores);
  printf("Hay %i numeros menores al umbral\n", nmenores);
  printf("Hay %i numeros iguales al umbral\n", niguales);
  return 0;
}
void funcion1(int filas, int columnas, int m[100][100], int x, int menor[100], int mayor[100], int *nmenores, int *nmayores, int *niguales)
{
  int i, j, k = 0, t = 0;
  for (i = 0; i < filas; i++)
  {
    for (j = 0; j < columnas; j++)
    {
      if (m[i][j] < x)
      {
        menor[k] = m[i][j];
        k++;
        (*nmenores)++;
      }
      else if (m[i][j] > x)
      {
        mayor[t] = m[i][j];
        t++;
        (*nmayores)++;
      }
      else
      {
        (*niguales)++;
      }
    }
  }
}
