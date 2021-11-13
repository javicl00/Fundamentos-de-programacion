#include <stdio.h>
#include <stdlib.h>

#define NFIL 100
#define NCOL 100

typedef struct 
{
    float matriz[NFIL][NCOL];
    int nfil, ncol;

}Matriz;


void primeraCoincidencia(Matriz m1, Matriz m2, int * nfil, int * ncol);

int main(int argc, char const *argv[])
{
    Matriz m1 = {  {{1,2} , {3,4}} , 2, 2};
    Matriz m2 = {  {{2,1} , {3,8}} , 2, 2};
    int fil, col;

    primeraCoincidencia(m1, m2, &fil, &col);
    return 0;
}



void primeraCoincidencia(Matriz m1, Matriz m2, int * nfil, int * ncol)
{
    int i, j, exito;

    i = 0;
    exito = 0;
    while (exito == 0 && i < m1.nfil)
    {
        j = 0;

        while (j < m1.ncol && exito == 0)
        {
            if(m1.matriz[i][j] == m2.matriz[i][j])
            {
                exito = 1;
                *nfil = i;
                *ncol = j;
            }else
            {
                j++;
            }
            
        }
        
        i++;
        
    }
    
}