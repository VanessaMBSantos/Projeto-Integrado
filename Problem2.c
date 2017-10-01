/* Even Fibonacci numbers*/

#include <stdio.h>
#define Maximo 4000000
 
int main (void)
{
   
    int fib = 1, primeiro = 0, segundo = 1, soma = 0;
 
    while(fib <= Maximo)
    {
        /*cálculo Fibonacci*/
        
        fib=primeiro+segundo;
        primeiro=segundo;
        segundo=fib;         /*guarda o valor anterior para ser usado na próxima soma*/

        /*verifica se fib é par e faz a soma dos pares*/
        if(fib % 2 == 0)
        {
            soma = soma + fib;
        }
    }
    printf("%d\n", soma);
}



