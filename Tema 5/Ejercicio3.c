#include <stdio.h>
#include <stdlib.h>
int segundos (int h, int m, int s);
float media (int a, int b);
int instanteIntermedio(int h1, int m1, int s1, int h2, int m2, int s2);
int main()
{
    int hora1, minutos1, segundos1, hora2, minutos2, segundos2, aux, inter, s, minutos, horas;
    printf("Escribe el extremo inferior del intervalo: ");
    printf("Hora: ");
    scanf("%i", &hora1);
    printf("Minutos: ");
    scanf("%i", &minutos1);
    printf("Segundos: ");
    scanf("%i", &segundos1);
    printf("Escribe el extremo superior del intervalo: ");
    printf("Hora: ");
    scanf("%i", &hora2);
    printf("Minutos: ");
    scanf("%i", &minutos2);
    printf("Segundos: ");
    scanf("%i", &segundos2);
/*guardar variable auxiliar para convertir de segundos a hh/mm/ss*/
    inter = instanteIntermedio(hora1, minutos1, segundos1, hora2, minutos2, segundos2);
    aux = inter;
    s = inter % 60;
    aux = aux / 60;
    minutos = aux % 60;
    horas = aux / 60;
    printf("El instante intermedio es %i horas, %i minutos, %i segundos ", horas, minutos, s);
    return 0;
}
int segundos (int h, int m, int s)
{
    int segundos;
    segundos = h*3600 + m*60 + s;
    return segundos;
}
float media (int a, int b)
{
    return (a+b)/2.0;
}
int instanteIntermedio(int h1, int m1, int s1, int h2, int m2, int s2)
{
    return media(segundos(h1, m1, s1), segundos(h2, m2, s2));
}
