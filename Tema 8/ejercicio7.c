#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 100
#define NFIL 100
#define NCOL 100

int solicitaMatriz(int filas, int columas, float m[NFIL][NCOL]);
void ficheroMatriz();

int main (void){

    solicitaMatriz();


}

int solicitaMatriz(int filas, int columas, float m[NFIL][NCOL]){

    int i, j, filas[tam], columnas[tam], numMatrices, m[NFIL][NCOL];

    printf("Matrices a introducir.\n");
    scanf("%i", &numMatrices);

    printf("\n");
    for(i=0;i<numMatrices;i++){

        printf("-----------Matriz %i-------------\n", i+1);
        printf("Introduce las filas de la matriz %i.\n", i+1);
        scanf("%i", &filas[i]);
        printf("Introduce las columnas de la matriz %i.\n", i+1);
        scanf("%i", &columnas[i]);


        printf("\n");

        printf("-----------Matriz %i-------------\n", i+1);
        for(i=0;i<filas[i];i++){
            for(j=0;j<columnas[i];j++){

                printf("Introduce los elementos de la matriz %i.\n", i+1);
                scanf("%i");
            }

        }
    }


}


void ficheroMatriz(){

    FILE * f;

    f = fopen(nombreFichero, "w");

    if(f == NULL){

        printf("No se ha podido abrir el fichero.\n");
        exit(1);

    }else{




        fclose(f);
    }


}