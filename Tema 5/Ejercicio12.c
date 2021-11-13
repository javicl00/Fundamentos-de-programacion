#include <stdio.h>
#include <string.h>
#define TAM 100

int repe(char cad[TAM], char c);

int main(int argc, char const *argv[])
{
    char cad[TAM], c, i, res;

    printf("Escribe una frase. Cuando quieras parar pulsa enter: ");
    
    gets(&cad);
    puts(&cad);

    printf("Escribe el caracter a controlar: ");
    scanf("%s", &c);

    res = repe(cad, c);

    if (res>0)
    {
        printf("El caracter %c se repite %i veces", c, res);
    }else
    {
        printf("El caracter %c no aparece", c);
    }
    return 0;
}

int repe(char cad[], char c)
{
    int i = 0, sumador = 0;
    
    for (i = 0; i <= strlen(cad); i++)
    {
        if (cad[i] == c)
        {
            sumador++;
        }
    }

    return sumador;
}
