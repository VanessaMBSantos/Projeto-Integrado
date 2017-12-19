//Champernowne's constant - Problem 40

#include <stdio.h>
#include <stdlib.h>

/* Calcula 10 elevado a n. */
int ipow10(int n)
{
    int res = 1;
    while (n--) {
        res *= 10;
    }
    return res;
}

// Retorna o enésimo dígito d de n
// Indexação começa a partir de 1 
int obtem_digito(int n, int d)
{
    n /= ipow10(d - 1);
    return n % 10;
}

int main(int argc, char **argv)
{
    int resultado = 1;
    int digito_incre = 1;
    int n, digito_ind;
    int alvo = 10;
    int limite = 1000000;
    if (argc > 1) {
        limite = atoi(*++argv); // Converte o argumento string str para um inteiro (tipo int).
    }
    for (n = 2, digito_ind = 1; digito_ind <= limite; n++) {
        if (n % ipow10(digito_incre) == 0) {
            digito_incre++;
        }
        digito_ind += digito_incre;
        if (digito_ind >= alvo) {
            resultado *= obtem_digito(n, digito_ind - alvo + 1);
            alvo *= 10;
        }
    }
    printf("O valor da seguinte expressão é: %d\n", resultado);
    return 0;
}