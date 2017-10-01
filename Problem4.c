/* Largest palindrome product*/

#include <stdio.h>
int inverte(int produto);
int main(void)
{
   int x, y,produto, maximo = 0;   

    for(x=0 ; x<=999 ; x++)
        for(y=0; y<=999 ; y++)
        {
            produto = x * y;
            if(produto == inverte(produto))   //verifica se o número é um palíndromo
                if (produto > maximo)        //verifica se é o maior palíndromo armazenado
                {
                    maximo = produto; 
            }
        }
        printf("%d\n", maximo);
        
}
 
int inverte(produto)    
{
    int resto, inverter=0;
    
    while (produto !=0)
    {
        resto = produto % 10;
        inverter *= 10  + resto;
        produto /= 10;
    }
    return inverter;
}
            
