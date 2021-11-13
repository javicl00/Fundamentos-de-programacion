#include <stdio.h>

#define TAM 100

int main(int argc, char const *argv[])
{
    FILE * f;
    char cad[TAM];
    float suma, nota;
    int nnotas, naprobadas, nevaluadas;

    f = fopen("notas.txt", "r");

    if (f == NULL)
    {
        printf("No se ha abierto");
    }else
    {
        suma = 0;
        fscanf(f, "%s%f", cad, &nota);
        while (!feof(f))        
        {
            suma += nota;
            fscanf(f, "%s%f", cad, &nota);
        }
        
    }
    
    
    return 0;
}
