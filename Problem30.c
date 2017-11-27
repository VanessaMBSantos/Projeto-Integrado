/*Digit fifth powers - Problem 30*/

#include <stdio.h>
#include <string.h>

#define Tamanho 295245
#define potencia5(N) ((N) * (N) * (N) * (N) * (N))

int main(int argc, char **argv)
{
    int t = 0, soma = 0;
    char r[7];
    for(int i = 2; i < Tamanho; i++, t = 0) {
        
        for(int j = 0; j < strlen(r); j++)
            t = t + potencia5((r[j] - '0'));

        if(t == i)
            soma = soma + t;
    }

    printf("A soma de todos os números que podem ser escritos como a soma das potêcias de cinco dos seus dígitos é: %d\n", soma);

    return 0;
}