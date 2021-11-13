#include <stdio.h>
#include <string.h>
typedef struct
{
    char nombre[100];
    int edad;
    float peso, altura;
    char sexo;
} Persona;
typedef struct
{
    Persona personas[100];
    int numPersonas;
} Familia;
int familiaMujer(Familia familia[], Familia solucion[]);
int main(int argc, char const *argv[])
{
    Familia solucion[4];
    Persona a1 = {"Daniel", 19, 85, 1.85, 'H'};
    Persona a2 = {"Rosa", 20, 65, 1.72, 'M'};
    Persona a3 = {"Ana", 17, 69, 1.75, 'M'};
    Persona a4 = {"Silvia", 14, 70, 1.74, 'M'};
    Familia vectorFamilia[4] = {a1, a2, a3, a4};
    int aux = familiaMujer(vectorFamilia, solucion);
    for (int i = 0; i < aux; i++)
    {
        printf("%Familia \t", solucion[i]);
    }
    return 0;
}
int familiaMujer(Familia familia[], Familia solucion[]) //recibir numero de familias
{
    int i, j;
    int cont = 0;
    for (i = 0; i < 4 /*esto seria el numero de familias*/; i++)
    {
        for (j = 0; j < familia[i].numPersonas; j++)
        {
            if (strcasecmp(familia[i].personas[j].sexo, "M") == 0)
            {
                solucion[cont] = familia[i];
                cont++;
            }
        }
    }
    return cont;
}
