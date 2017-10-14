/*Summation of primes*/

#include <stdio.h>
#define Limite 2000000

int main()
{
    int i, j, Primo;
    long soma=0;
    for(i=2; i<Limite; i++)
    {
        /* Verifica se e número primo */
    	Primo = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                /* i nao e primo*/
                Primo = 0;
                break;
            }
        }
         /* Se i for primo addciona a soma*/

        if(Primo==1)
        {
            soma =soma + i;
        }
    }
    printf("Soma de todos os números primos de 1 a  %d = %ld \n", Limite, soma);
}