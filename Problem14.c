/*Longest Collatz sequence- Problem 14*/

#include <stdio.h>
# define Maximo 1000000

long long int count(long long int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        if(n%2==0)
            return (1+count(n/2)); /* Se n for par então divide o numero por 2*/
        else
            return (1+count(3*n+1)); /* Se n for impar entao multiplica-se o numero por 3 e soma-se 1*/
    }
}

int main()
{
    long long int i=0, c, max, k=1;
    max=1;
    for(i=1; i< Maximo; i++)
    {
        c=count(i);
        if(c>max)
        {
            max=c;
            k=i;     
        }
    }
    printf("%lld\n",k);
    return 0;
}
