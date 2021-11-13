#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
 int h, i, j;
 printf("Que altura quiere para el triangulo. \n");
 scanf("%i", &h);
 for(i = 1; i<=h ; i++){
  printf(" \n");
   for(j = 1 ; j <= i ; j++){
    printf("2");
   }
 }
 return 0;
}
