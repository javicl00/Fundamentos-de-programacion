#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int main(int argc, char const *argv[]){

    int cont=0, i, j;
    float v[] = {0.01, 0.02, 0.05, 0.1, 0.2, 0.5, 1, 2, 5, 10, 20, 50, 100, 200, 500}, dinero[TAM], cantidad;
    
    
    printf("Introduce la cantidad de dinero.\n");
    scanf("%f", &cantidad);


    int k=0;
    while(cantidad>0)
    {
        for(i=15 ; i >= 0 ; i--)
        {
            if(v[i]<=cantidad)
            {
                dinero[k] = v[i];
                cantidad = cantidad - v[i];
                cont++;
                k++;
                break;
            }
        }
    }

    for(k=0 ; k < cont ; k++)
    {
        printf("%f ", dinero[k]);
    }
  
    return 0;
}