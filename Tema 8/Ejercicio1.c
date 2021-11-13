#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

int main(int argc, char const *argv[])
{
    int  i, asignaturas;
    float notas;
    char nombre[TAM];

    FILE * f;

    f = fopen("asignaturas.txt", "w");

    if (f == NULL)
        printf("El fichero no se ha podido abrir");
    else
    {
        printf("Escriba cuantas asignaturas desea introducir: ");
        scanf("%i", &asignaturas);
        fflush(stdin);
        for (i = 0; i < asignaturas; i++)
        {
            printf("\n");
            printf("Escriba el nombre de la asignatura: ");
            fflush(stdin);
            fgets(nombre, TAM, stdin);
            fflush(stdin);
            printf("Escriba la nota de la asignatura: ");
            scanf("%f", &notas);
            fflush(stdin);
            fprintf(f, "%s %f\n", nombre, notas);
        }
        
        fclose(f);

    }
    
    
    return 0;
}
