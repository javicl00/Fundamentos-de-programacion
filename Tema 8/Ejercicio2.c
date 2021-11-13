#include <stdio.h>
#include <stdlib.h>

#define max 5
#define TAM 100

int main(int argc, char const *argv[])
{
    int i;
    char nombre[max][TAM];
    float notas[TAM], nota;

    FILE *f;

    f = fopen("D:\\ProyectosVStudio\\C\\Tema 8\\asignaturas.txt", "r");

    if (f == NULL)
    {
        printf("No se ha podido abrir el fichero");
        exit(1);
    }
    else
    {
        for (i = 0; i < max; i++)
        {

            fscanf(f, "%s%f", &nombre[i], &notas[i]);
            fflush(stdin);
            //notas[i] = nota;
        }

        for (i = 0; i < max; i++)
        {
            printf("%s %f\n", nombre[i], notas[i]);
        }

        fclose(f);
    }

    return 0;
}
