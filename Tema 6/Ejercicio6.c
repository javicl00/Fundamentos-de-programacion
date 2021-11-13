#include <stdio.h>
void localizaNumero(int num, float m[100][100], int filas, int columnas, int *enc, int *i, int *j);
int main(){
    int i, j, filas, columnas, enc=0;
    float m[100][100], num;
    printf("Introduce el numero a buscar.\n");
    scanf("%f", &num);
    printf("Introduce las filas de la matriz.\n");
    scanf("%i", &filas);
    printf("Introduce las columnas de la matriz.\n");
    scanf("%i", &columnas);
    printf("\n");
    for(i=0;i<filas;i++){
        printf("\n");
        for(j=0;j<columnas;j++){
            printf("Introduce los elementos de la matriz.\n");
            scanf("%f", &m[i][j]);
        }
    }
    localizaNumero(num, m, filas, columnas, &enc, &i, &j);
    printf("\n");
    if(enc == 0){
        printf("No se ha encontrado el numero en la funcion.\n");
    }else{
        printf("Se ha encontrado el numero la posicion (%i,%i)", i, j);
    }
    return 0;
}
void localizaNumero(int num, float m[100][100], int filas, int columnas, int *enc, int *i, int *j){
    i=0;
    while(i<filas && *enc==0){
        j=0;
        while(j<columnas && enc==0){
            if(num==m[i][*j]){
                enc = 1;
            }
            (j)++;
        }
        (i)++;
    }
    (i)--;
    (*j)--;
}
