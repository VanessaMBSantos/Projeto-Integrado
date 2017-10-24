/* Lattice paths */

#include <stdio.h>
#include <stdlib.h>

long long binomial(int n, int k)
{
    if (k == 0)
        return 1;
    else if (k > n / 2)
        return binomial(n, n - k);
    else
        return n * binomial(n - 1, k - 1) / k;
}

int main(void) {

    printf("%lli\n", binomial(40, 20));
    
}

// Solução: 137846528820

