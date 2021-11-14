#include <stdio.h>
void matrizMenor(int m[100][100], int nfil, int ncol, int p, int q, int menor[100][100]);
int main(void)
{
  int m[100][100] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
  int menor[100][100];
  int i, j;
  matrizMenor(m, 3, 3, 1, 1, menor);
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("%d\t", menor[i][j]);
    }
    printf("\n");
  }
  return 0;
}
void matrizMenor(int m[100][100], int nfil, int ncol, int p, int q, int menor[100][100])
{
  int i, j, k, l;
  k = 0;
  l = 0;
  for (i = 0; i < nfil; i++)
  {
    for (j = 0; j < ncol; j++)
    {
      if (i != p && j != q)
      {
        menor[k][l] = m[i][j];
        l++;
        if (l == ncol - 1)
        {
          l = 0;
          k++;
        }
      }
    }
  }
}
