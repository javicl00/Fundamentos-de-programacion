#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[50];
    int curso;
    int semestre;
    float nota;
    int matriculas;
}asignatura;

void cEstudio(asignatura m[100][100], int filas, int columnas, float *nminima, float *nmaxima, int *matriculaciones, float *media);
float mediaArit(asignatura m[100][100], int filas, int columnas);
float mediaArit2(asignatura m[100][100], int filas, int columnas);

int main(int argc, char const *argv[])
{
    asignatura m[100][100];
    int filas, columnas, matriculaciones;
    float notaMinima, notaMaxima, media;
    printf("cuantas filas quiere en su matriz: ");
    scanf("%i", &filas);
    printf("cuantas columnas quiere en su matriz: ");
    scanf("%i", &columnas);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
              printf("Introduce el nombre de la asignatura.\n");
              fflush(stdin);
              fgets(m[i][j].nombre, 100, stdin);
              printf("Cual es el curso que usted cursa?\n");
              scanf("%i", &m[i][j].curso);
              printf("A que semestre pertenece la asignatura.\n");
              scanf("%i", &m[i][j].semestre);
              printf("Que nota ha sacado en la asignatura.\n");
              scanf("%f", &m[i][j].nota);
              printf("Cuantos matriculados se encuentran en su carrera.\n");
              scanf("%i", &m[i][j].matriculas);
        }
    }

    cEstudio(m, filas, columnas, &notaMinima, &notaMaxima, &matriculaciones, &media);

    printf("La nota minima es %f, la nota maxima es %f, la media de notas es %f. Ha habido una media de %i matriculaciones", notaMinima, notaMaxima, media, matriculaciones);
    return 0;
}
void cEstudio(asignatura m[100][100], int filas, int columnas, float *nminima, float *nmaxima, int *matriculaciones, float *media)
{
    int i = 0, j= 0;
    float aux;
    aux = m[i][j].nota;
    for ( i = 1; i <= filas; i++)
    {
        for ( j = 1; j <= columnas; j++)
        {
            if (aux < m[i][j].nota)
            {
                *nmaxima = m[i][j].nota;
            }else if (aux > m[i][j].nota)
            {
                *nminima = m[i][j].nota;
            }
        }
    }
    *media = mediaArit(m, filas, columnas);
    *matriculaciones = mediaArit2(m, filas, columnas);
}
float mediaArit(asignatura v[100][100], int filas, int columnas)
{
    int sumador = 0, media, contador = 0;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            sumador = sumador + v[i][j].nota;
            contador++;
        }
    }
    media = sumador/contador;
    return media;
}
float mediaArit2(asignatura v[100][100], int filas, int columnas)
{
    int sumador = 0, media, contador = 0;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            sumador = sumador + v[i][j].matriculas;
            contador++;
        }
    }
    media = sumador/contador;
    return media;
}
