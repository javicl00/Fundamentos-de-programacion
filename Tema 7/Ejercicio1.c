#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 50


typedef struct 
{
    char nombre[TAM];
    int curso;
    int semestre;
    float nota;
    int matriculas;

}asignatura;

int main(int argc, char const *argv[])
{
    asignatura asignatura1;
    int i;

    printf("Nombre de la asignatura: ");
    gets(asignatura1.nombre);

    fflush(stdin); 

    printf("\nCurso: ");
    scanf("%d", &asignatura1.curso);
    fflush(stdin);

    printf("\nNota: ");
    scanf("%f", &asignatura1.nota);
    fflush(stdin);


    printf("\nVeces matriculado: ");
    scanf("%i", &asignatura1.matriculas);

    fflush(stdin); 

    printf("\nAsignatura: %s", asignatura1.nombre);
    return 0;
}
