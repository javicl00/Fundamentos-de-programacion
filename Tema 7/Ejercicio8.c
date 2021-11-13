#include <stdio.h>
#include <string.h>

#define NFIL 100
#define NCOL 100

typedef struct{

  float matriz[NFIL][NCOL];
  int filas;
  int columnas;

}Matriz;



int main(void) {

  Matriz m1, m2, suma;
  int i, j;

  printf("Introduce las filas de la primera matriz.\n");
  scanf("%i", &m1.filas);

  m2.filas = m1.filas;

  printf("Introduce las columnas de la primera matriz.\n");
  scanf("%i", &m1.columnas);

  m2.columnas = m1.columnas;

  for(i=0;i<m1.filas;i++){
    printf("\n");
    for(j=0;j<m1.columnas;j++){

      printf("Introduce los elementos de la primera matriz.\n");
      scanf("%f", &m1.matriz[i][j]);

    }
  }



  printf("\n-----------Matriz 1----------- .\n");
  for(i=0;i<m1.filas;i++){
    printf("\n");
    for(j=0;j<m1.columnas;j++){

      printf("%f\t", m1.matriz[i][j]);


    }
  }

  printf("\n\n");

  for(i=0;i<m1.filas;i++){
    printf("\n");
    for(j=0;j<m1.columnas;j++){

      printf("Introduce los elementos de la segunda matriz.\n");
      scanf("%f", &m2.matriz[i][j]);

    }
  }

  printf("\n");

  printf("-----------Matriz 2----------- .\n");
  for(i=0;i<m1.filas;i++){
    printf("\n");
    for(j=0;j<m1.columnas;j++){

      printf("%f\t", m2.matriz[i][j]);

    }
  }

  for(i=0;i<m1.filas;i++){
    for(j=0;j<m1.columnas;j++){

      suma.matriz[i][j] = m1.matriz[i][j] + m2.matriz[i][j];

    }
  }

  printf("\n\n");

  printf("---------Matriz resultante----------");
  for(i=0;i<m1.filas;i++){
    printf("\n");
    for(j=0;j<m1.columnas;j++){

      printf("%f\t", suma.matriz[i][j]);

    }
  }

 
}