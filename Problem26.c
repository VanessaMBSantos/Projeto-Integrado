/*Reciprocal cycles - Problem 26*/

#include <stdio.h>

const int Maximo = 1000;

int main()
{
  int max_digitos = 0, resposta = 0, decimal, contagem, n,d; /*Iniciamos a resposta e os digitos a zero.*/

  for (d = 10; d < Maximo; ++d) { /*Ciclo for que inicia em 10 (o ultimo exemplo dado pelo exercico) e corre ate ao máximo. */
    decimal = 10 % d;
    contagem = 1;
    n = Maximo;

    while (decimal > 1 && n > 0) {
      decimal = decimal * 10; /*Decimal encontra o valor decimal da divisao 1/d.*/
      decimal = decimal % d;
      
      ++contagem; /*Variavel que vai guardar no max_digitos o maior numero que encontrar.*/
      --n;
    }

    if (contagem > max_digitos && n > 1) { /*Se contagem for maior que o digito maximo e n>1 a resposta vai ser igual ao numero do ciclo acima.*/
      max_digitos = contagem;
      resposta = d;
    }
  }

  printf("O valor de d<1000 para o qual 1/d contem o ciclo recorrente mais longo na sua fração decimal é:: %d\n", resposta);
  return 0;
}

