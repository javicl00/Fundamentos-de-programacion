#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

typedef struct 
{
    char nombre[TAM];
    int curso;
    int semestre;
    float nota;
    int matriculas;

}asignatura;

int comparacion (asignatura a1, asignatura a2, char campo[TAM]);

int main(int argc, char const *argv[])
{
    asignatura a1 = {"Fundamentos de programacion", 1, 1, 5.3, 2};
    asignatura a2 = {"Calculo", 1, 1, 3, 2};
    char campo[TAM];
    int a;

    printf("Escribe el nombre del campo que desee: ");
    scanf("%s", campo);
    a = comparacion(a1, a2, campo);
    printf("%i", a);
    return 0;
}

int comparacion (asignatura a1, asignatura a2, char campo[TAM])
{
    if (strcmp(campo, "nombre") == 0)
    {
        return strcmp(a1.nombre, a2.nombre);            
    }else if (strcmp(campo, "curso") == 0)
    {
        if (a1.curso < a2.curso)
        {
            return -1;
        }else if (a1.curso == a2.curso)
        {
            return 0;
        }else if (a1.curso > a2.curso)
        {
            return 1;
        }
    }else if (strcmp(campo, "semestre")== 0)
    {
        if (a1.semestre < a2.semestre)
        {
            return -1;
        }else if (a1.semestre == a2.semestre)
        {
            return 0;
        }else if (a1.semestre > a2.semestre)
        {
            return 1;
        }
    }else if (strcmp(campo, "nota")== 0)
    {
        if (a1.nota < a2.nota)
        {
            return -1;
        }else if (a1.nota == a2.nota)
        {
            return 0;
        }else if (a1.nota > a2.nota)
        {
            return 1;
        }
    }else if (strcmp(campo, "matriculas")== 0)
    {
        if (a1.matriculas < a2.matriculas)
        {
            return -1;
        }else if (a1.matriculas == a2.matriculas)
        {
            return 0;
        }else if (a1.matriculas > a2.matriculas)
        {
            return 1;
        }
    }
}