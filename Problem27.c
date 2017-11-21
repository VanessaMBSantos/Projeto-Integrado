/* Quadratic primes */

#include <stdio.h>

int primo(int p) {
	if (p == 2) {
		return 1;
	}
	if (p > 1) {
		int i = 2;
		while (i < p) {
			if (p % i == 0) {
				return 0;  // nao e primo
			}
			i += 1;	
		}
		return 1;  // e primo
	}
	return 0; // 0 e 1 nao sao primos
}

int main(void){
	int a, b, n, produto;
	int max = 0;
	for (a = -999; a < 1000; a++){
    	for (b = -999; b < 1000; b++){
    	    int c = 0;
			for (n = 0; n < 1000; n++) {
    	 		if (primo((n * n) + (a * n) + b) == 1) {
    	 			c++;
    	 		}
   				else {
   					break;
   				}
			}
			if (c > max) {
    	  		max = c;
    	  		produto = a * b;
			}
		}
	}	 
	printf("%d\n", produto);      
}

// Solução: -59231