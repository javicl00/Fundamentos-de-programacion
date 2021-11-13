#include <stdio.h>
#include <stdlib.h>

#define NFIL 7
#define NCOL 4

int main(int argc, char const *argv[])
{

    float m[NFIL][NCOL] = {{80.5, 250.0, 60.1, 120.4},
                           {75.2, 320.5, 0.0, 100.6},
                           {90.4, 280.6, 85.1, 90.5},
                           {85.1, 350.2, 49.4, 0.0},
                           {88.4, 420.5, 0.0, 110.0},
                           {78.6, 370.9, 90.5, 96.6},
                           {84.7, 275.3, 75.0, 105.0}};

    int i, j, exito;
    float calorias;

    printf("Introduzca el numero de calorias: ");
    scanf("%f", &calorias);

    // for (i = 0; i < NFIL; i++)//recorrido de dias
    // {
    //     printf("\n\n\n\nIteracion numero %i\n\n\n\n", i);
        j = 0;
        exito = 0;
        while(j < NCOL && i < NFIL && exito == 0)//recorrido de comidas
        {

            if (i == 0 && exito == 0)
            { //i == 0 es lunes; i es dia

                if (j == 0 && (calorias <= m[i][j])&& exito == 0)
                { //j es comida
                    printf("El Lunes para Desayuno ingirieron %f calorias.\n", m[i][j]);
                    exito = 1;
                }
                else if (j == 1 && (calorias <= m[i][j]))
                {
                    printf("El Lunes para Almuerzo ingirieron %f calorias.\n", m[i][j]);
                    exito = 1;
                }
                else if (j == 2 && (calorias <= m[i][j]))
                {
                    printf("El Lunes para Merienda ingirieron %f calorias.\n", m[i][j]);
                    exito = 1;
                }
                else if (j == 3 && (calorias <= m[i][j]))
                {
                    printf("El Lunes para Cena ingirieron %f calorias.\n", m[i][j]);
                    exito = 1;
                }
                else
                {
                    printf("El lunes no se alcanzo la comida para dicho umbral.\n");
                    // break;

                }
                j++;
                i++;
                               
            }

            exito = 0;
            j=0;
            if (i == 1 && exito == 0)
            {

                if (j == 0 && (calorias <= m[i][j]))
                {
                    printf("El Martes para Desayuno ingirieron %f calorias.\n", m[i][j]);
                    exito = 1;
                }
                else if (j == 1 && (calorias <= m[i][j]))
                {
                    printf("El Martes para Almuerzo ingirieron %f calorias.\n", m[i][j]);
                    exito = 1;
                }
                else if (j == 2 && (calorias <= m[i][j]))
                {
                    printf("El Martes para Merienda ingirieron %f calorias.\n", m[i][j]);
                    exito = 1;
                }
                else if (j == 3 && (calorias <= m[i][j]))
                {
                    printf("El Martes para Cena ingirieron %f calorias.\n", m[i][j]);
                    exito = 1;
                }
                else
                {
                    printf("El Martes no se alcanzo la comida para dicho umbral.\n");
                    // break;
                }
                j++;
                i++;
            }

            exito = 0;
            j=0;
            if (i == 2 && exito == 0)
            {

                if (j == 0 && (calorias <= m[i][j]))
                {
                    printf("El Miercoles para Desayuno ingirieron %f calorias.\n", m[i][j]);
                    exito = 1;
                }
                else if (j == 1 && (calorias <= m[i][j]))
                {
                    printf("El Miercoles para Almuerzo ingirieron %f calorias.\n", m[i][j]);
                    exito = 1;
                }
                else if (j == 2 && (calorias <= m[i][j]))
                {
                    printf("El Miercoles para Merienda ingirieron %f calorias.\n", m[i][j]);
                    exito = 1;
                }
                else if (j == 3 && (calorias <= m[i][j]))
                {
                    printf("El Miercoles para Cena ingirieron %f calorias.\n", m[i][j]);
                    exito = 1;
                }
                // else
                // {
                //     printf("El Miercoles no se alcanzo la comida para dicho umbral.\n");
                //     // break;
                // }

                if (exito == 0){
                    printf("El Miercoles no se alcanzo la comida para dicho umbral.\n");
                }
                j++;
                i++;
            }

            exito = 0;
            j=0;
            if (i == 3 && exito == 0)
            {
                if (j == 0 && (calorias <= m[i][j]))
                {
                    printf("El Jueves para Desayuno ingirieron %f calorias.\n", m[i][j]);
                    exito = 1;
                }
                else if (j == 1 && (calorias <= m[i][j]))//aqui tiene que parar
                {
                    printf("El Jueves para Almuerzo ingirieron %f calorias.\n", m[i][j]);
                    exito = 1;
                }
                else if (j == 2 && (calorias <= m[i][j]))
                {
                    printf("El Jueves para Merienda ingirieron %f calorias.\n", m[i][j]);
                    exito = 1;
                }
                else if (j == 3 && (calorias <= m[i][j]))
                {
                    printf("El Jueves para Cena ingirieron %f calorias.\n", m[i][j]);
                    exito = 1;
                }
                else
                {
                    printf("El Jueves no se alcanzo la comida para dicho umbral.\n");
                    // break;
                }
                j++;
                i++;
            }
        }
        return 0;
    }

    
//}
