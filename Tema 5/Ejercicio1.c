#include <stdio.h>
#include <stdlib.h>
float media (float a, float b);
int main()
{
    float x, y;
    printf("Introduce dos numeros reales para saber su media ");
    scanf("%f", &x);
    scanf("%f", &y);
    printf("La media es %f", media (x, y));
    return 0;
}
float media (float a, float b)
{
    return (a+b)/2;
}
