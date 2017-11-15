/*Lexicographic permutations - Problem 24 - Project Euker*/

#include <stdio.h>

#define Milhao 1000000
#define Numeros 10

unsigned long long factorial(int n);
int c (int n, int* array);

/* Há n! permutações de conjunto de n elementos */
  
int main()
{
    int Permutacoes[Numeros];
    int ArrayN[Numeros];

    for (int i = 0; i < Numeros; i++) /* coloca os numeros de 0 a 10 no array.*/
        ArrayN[i] = i;

    unsigned long long n = Numeros, I = Milhao - 1, F;

    for (int i = 0; i < Numeros; i++) {      /* Funcao que calcula as permutações lexicográficas.*/
        F = factorial(Numeros - i - 1);
        Permutacoes[i] = c((int) (I / F + 1), ArrayN);
        I = I - F * (I / F);
        printf("%d", Permutacoes[i]);
    }

    printf("\n");

    return 0;
}

unsigned long long factorial(int n)  /*Funcao que calcula o factorial usado acima*/
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int c(int n, int* array)
{
    int i = 0, j = 0;

    while (i < n) {
        if (array[j] >= 0)
            i++;
        j++;
    }

    int x = array[j - 1];
    array[j - 1] = -1;

    return x;
}