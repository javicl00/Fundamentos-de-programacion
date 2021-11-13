#include <stdio.h>
#include <string.h>
typedef struct
{
    char nombre[50];
    int curso;
    int semestre;
    float nota;
    int matriculas;
} asignatura;
void ordenAsignaturas(asignatura asignaturas[50], char campo, char solucion);
void ordenacion(asignatura asignaturas[50], char campo);
int main(int argc, char const *argv[])
{
    char campo[50];
    char solucion[50];
    asignatura a1 = {"fp", 1, 1, 5.9, 2};
    asignatura a2 = {"poo", 1, 2, 5, 1};
    asignatura a3 = {"mmi", 1, 2, 5, 1};
    asignatura vectorAsignaturas[] = {a1, a2, a3};
    printf("Escribe el campo que quieras usar para ordenar\n\n1.nombre\n\n2.curso\n\n3.semestre\n\n4.nota\n\n5.matriculas\n");
    scanf("%s", campo);
    ordenAsignaturas(vectorAsignaturas, campo, solucion);
    return 0;
}
void ordenAsignaturas(asignatura asignaturas[50], char campo, char solucion)
{
    int i;
    char aux[50];
    for (i = 0; i < 3; i++)
    {
        if (strcmp(campo, "nombre") == 0)
        {
            ordenacion(asignaturas[i].nombre, campo);
        }
        else if (strcmp(campo, "curso") == 0)
        {
            ordenacion(asignaturas[i].curso, campo);
        }
        else if (strcmp(campo, "semestre") == 0)
        {
            ordenacion(asignaturas[i].semestre, campo);
        }
        else if (strcmp(campo, "nota") == 0)
        {
            ordenacion(asignaturas[i].nota, campo);
        }
        else if (strcmp(campo, "matriculas") == 0)
        {
            ordenacion(asignaturas[i].matriculas, campo);
        }
    }
}
void ordenacion(asignatura asignaturas[50], char campo)
{
    for (int i = 1; i < 2; i++)
    {
        for (int j = 1; j < tam - i - 1; j++)
        {
            if (asignaturas[i].campo > asignaturas[j].edad)
            {
                struct empleado temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
}
