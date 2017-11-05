/*Factorial digit sum- Problem20*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
  int resultado[200];
  int carry,digito, mult, dig, numero;
  int soma = 0;

/*ciclo for para echer o array com 200 inteiros a zero e para o primeiro digito ser 1*/
  
  for (dig = 0; dig < 200; dig++){
    resultado[dig] = 0;
   
  }
  resultado[0] = 1; 

 /*ciclo que calcula 100!*/

  for (numero = 1; numero <= 100; numero++){ /*ciclo que percorre os numeros de 1 a 100 para calcular o fatorial*/
    carry = 0;
    for (dig = 0; dig < 200; dig++){ /*ciclo que percorre o array*/
      mult = resultado[dig] * numero + carry; /*expressao para o calculo do fatorial*/
      digito = mult % 10;
      resultado[dig] = digito;
      if (mult > 9)/*se o resultado da multiplicação for maior que 9 divide-se por 10 e coloca-se no carry para somar ao proximo*/
        carry = (mult - digito)/10;
      else carry = 0;
    }
  }

 /*ciclo for que calcula a soma ao percorrer o array e da print do seu conteudo com o resulado de 100!*/
 
  for (dig = 199; dig >= 0; dig--){
    printf("%d", resultado[dig]);
    soma= soma + resultado[dig];
  }
  printf("\nA soma dos dígitos no número 100!:%d\n", soma);
  return 0;
}