/*Digit factorials - Problem 34*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fatorial(int n) {
  int i = 0, fatorialNumero = n;
  if (n == 0)               // Se n==0 então é 1 pois zero fatorial é 1.
    return 1;
  for ( i = 1; i < n; i++) // Ciclo que calcula o fatorial dos numeros contituintes.
    fatorialNumero *= i;
  return fatorialNumero;
}

int main(void) {
  int soma = 0, i = 0;
  for ( i = 10; i < 9999999; i++) { //Ciclo que percorre todos os numeros que estamos a considerar para este problema
    int somaFatorial = 0, n = i;
    while (n > 0) {                // Ciclo que separa os numeros para serem usados na 
      int d = n % 10;             //funcao fatorial e guarda a soma os valores dos fatoriais em somaFatorial
      n /= 10;
      somaFatorial += fatorial(d);
    }
    soma += (somaFatorial == i) ? i : 0; //Em soma apenas se soma se o valor da somaFatorial for igual 
  }                                      //ao número em i, se não é zero
  printf("A soma de todos os números que são iguais à soma do fatorial dos seus dígitos são: %i\n", soma);
  return 0;
}