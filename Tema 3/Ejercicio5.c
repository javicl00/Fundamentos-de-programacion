#include <stdio.h>
#include <stdlib.h>



void main(void)
{
    int i, j, cont = 0, n, f;

    printf("Introduce n: ");
    scanf("%d", &n);

    i = 0;
    j = 1;

    if(n == 0)
        f = 1;
    if(n == 1)
        f = 1;

    while(cont != n)
    {
        f = i + j;
        i = j;
        j = f;
        cont++;
    }

    printf("n = %d\nf = %d", n, f);
}