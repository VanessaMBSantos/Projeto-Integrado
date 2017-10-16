/*Highly divisible triangular number*/
/*para compilar usar: gcc Problem12.c -lm -o Problem12.exe*/

#include <stdio.h>
#include <math.h>
#define Alvo 500 /*Numero que conhenha 500 divisores*/


int main (void)
{
int divisor = 2;
int i = 7;                    /*Começa no setimo numero do triangulo corresponde ao 28 */
int limite;
int j; 


unsigned int triangulo = 28; /*( unsigned numero guardado sem sinal começa no 28 porque 28 e o ultimo exemplo dado)*/


while ( divisor <= Alvo )
{
  divisor = 2; /* 1 e o próprio número de triângulo contagem então comeca-se com o número de divisores 2*/
  i++;


  triangulo = triangulo + i; /*Soma do numero triangular anterior com o proximo numero ex: 28+8º numero = 45 proximo numero)*/
  limite = sqrt(triangulo); 
  
  
  for (j = 2; j <= limite; j++)
  {
   if (!(triangulo % j)) /* Se o resto de triangulo com j for difrente de zero vai para o proximo if*/
   {
    if (j == limite)    
     divisor++; /*Se o número tiver uma raiz quadrada inteira adiciona mais 1*/
    else
     divisor = divisor + 2; /*Para cada número que se divide uniformemente adicione 2 
                            ao número de divisores que o número possui*/
   }
  }
}


printf("O primeiro numero triangular com 500 ou mais divisores é: %d\n", triangulo);


return 1;
}
