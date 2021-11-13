#include <stdio.h>

#define TAM 100

typedef struct
{
    int dia, mes, anyo;
} fecha;

typedef struct
{
    int edad;
    float altura, peso;
    char nombre[TAM];
    char sexo[TAM];
    fecha nacimiento;
} persona;

typedef struct
{
    persona personas[TAM];
    int numPersonas;
} Familia;

void eliminar(Familia f1, Familia fSolucion);
void EliminarElemento(Familia familias, Familia fSolucion);

int main(int argc, char const *argv[])
{

    
    persona p1 = {20, 1.92, 92, "Javier", 'H', 27, 1, 00};
    persona p2 = {19, 1.85, 80, "Daniel", 'H', 5, 8, 01};
    persona p3 = {25, 1.60, 50, "Maria", 'M', 19, 12, 95};
    persona p4 = {20, 1.92, 92, "Javier", 'H', 27, 1, 00};
    persona p5 = {19, 1.85, 80, "Daniel", 'H', 5, 8, 01};
    persona p6 = {30, 1.60, 50, "Maria", 'M', 19, 12, 90};

    persona personas1[TAM] = {p1, p2, p3};
    persona personas2[TAM] = {p4, p5, p6};

    Familia f1 = {personas1[TAM], 3};
    Familia f2 = {personas2[TAM], 3};
    Familia fsolucion = {personas2[TAM], 3};

    eliminar(f1, fsolucion);
    eliminar(f2, fsolucion);

    printf("Nombre\tEdad\tAltura\t\tPeso\tSexo\t\tNacimiento\n");

    for (int i = 0; i < f1.numPersonas; i++)
    {
        printf("%s\t%d\t\t%f\t%f\t%c\t%d/%d/%d\n", f1.personas[i].nombre, f1.personas[i].edad, f1.personas[i].altura, f1.personas[i].peso, f1.personas[i].sexo, f1.personas[i].nacimiento);
        printf("%s\t%d\t\t%f\t%f\t%c\t%d/%d/%d\n", f2.personas[i].nombre, f2.personas[i].edad, f2.personas[i].altura, f2.personas[i].peso, f2.personas[i].sexo, f2.personas[i].nacimiento);
    }
    
    return 0;
}

void eliminar(Familia familias, Familia fSolucion)
{
    for (int i = 0; i < familias.numPersonas; i++){
    if (familias.personas[i].edad >= 20 && familias.personas[i].edad <= 30){
        EliminarElemento(familias, fSolucion);
        }
    }
    
}


void EliminarElemento(Familia familias, Familia fSolucion){
    int i;

    for(i = 0; i< familias.numPersonas - 1; i++){
        fSolucion.personas[i]= fSolucion.personas[i+1];
    }
    (familias.numPersonas)--;
}