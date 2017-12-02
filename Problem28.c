/*Number spiral diagonals- Problem 28*/

#include <stdio.h>

#define Maximo 1001

int main(void){
  int soma,i;
  soma = 1;
  for (i = 3; i <= Maximo; i = i + 2) {
    soma= soma + 2*(2*i*i - 3*i + 3);
  }
  printf("A soma dos números nas diagonais em uma espiral 1001 por 1001 é:%d\n", soma);
  return 0;
}
