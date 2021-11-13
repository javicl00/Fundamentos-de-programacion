#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#define nfil 4
#define ncol 5


int main(int argc, char const *argv[])
{
    int pares[3], contador = 0;

    int m[nfil][ncol] = {{2, 4, 4, 1},
                         {4, 8, 8, 2},
                         {1, 2, 3, 4},
                         {9, 8, 8, 3},
                         {7, 12, 16, 4}};

    for ( int i = 0; i < nfil; i++)
    {
        contador = 0;
        for (int j = 0; i < ncol; i++)
        {
            if (m[j][i] % 2 == 0 && contador < 2)
            {
                contador++;
                pares[j] = m[j][i];
            } 
            
        }
        
    }
    

    return 0;
}
