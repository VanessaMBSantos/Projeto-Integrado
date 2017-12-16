//Pandigital multiples-Problem 38
// Pandigital - numero que contém pelo menos um de cada dígito em sua base exemplo: 1749208365.

#include <stdio.h>

int pandigital(int n) //Função que verifica se é numero pandigital a partir da solução que vai receber.
{
  int numeros[9] = {0}; // Array com espaço para um numero de 9 digitos como é pedido pelo problema que contem zero.
  int holder = n;

  while (n) {
    int digito = n % 10;
    if (!digito || numeros[digito - 1]) // || ou
    	return 0;  
    numeros[digito - 1] = digito;
    n /= 10;
  }
  return holder; // Holder tem guardado o número original e devolve esse número caso seja pandigital.
}

int concat_digitos(int a, int b) // Função que realiza a concatonação. 
{
  int dez = 10;
  while (b > dez) 
  	dez *= 10;

  return a * dez + b;
}

int main()
{
  int solucao = 0;

  for (int i = 9876; i > 9182; --i) {  // Números que vão ser concatonados e vão passar a ser a solução.
    solucao = concat_digitos(i, 2 * i);

    if (pandigital(solucao)) {  // Se a solução for pandigital passa para o print.
      break;
    }
  }

  printf("O maior número pandigital de 9 dígitos que pode ser formado como o produto concatenado de um número inteiro com (1,2, ..., n ) onde n > 1 é: %d\n", solucao);
  return 0;
}