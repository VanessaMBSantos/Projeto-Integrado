//Double-base palindromes - Problem 36

#include <stdio.h>
#define Maximo 1000000

static int palindromos_base(int n, int base);
int main(void)
{
  int i;
  int soma = 0;

  for (i = 1; i < Maximo; i++) {       //Realiza a soma dos paliandromos.
    if (palindromos_base(i, 10) && palindromos_base(i, 2)) {
      soma += i;
    }
  }
  printf("A soma de todos os números menores que um milhão, que são palindromos na base 10 e na base 2: %d.\n", soma);

  return 0;
}

int palindromos_base(int n, int base) // Função que inverte e compara se o original e igual ao invertido na base 2 e 10.
{
  int invertido = 0;
  const int original = n;

  while (n) {
    invertido = base*invertido + n % base;
    n /= base;
  }
  return original == invertido;
}
