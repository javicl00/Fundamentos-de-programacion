#include <stdio.h>
#include <stdlib.h>
int segundos (int h, int m, int s);
int main()
{
    int h, m, s;
    printf("Escribe un tiempo para saber cuanto es en segundos: ");
    printf("Horas: ");
    scanf("%i", &h);
    printf("Minutos: ");
    scanf("%i", &m);
    printf("Segundos: ");
    scanf("%i", &s);
    printf("El tiempo introducido equivale a %i segundos", segundos(h, m, s));
    return 0;
}
int segundos (int h, int m, int s)
{
    int tiempo, minutos, segundos;
    segundos = h*3600 + m*60 + s;
    return segundos;
}
