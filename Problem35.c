/* Circular Primes */

#include <stdio.h>
#include <math.h>

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
			if (i == p){
				return 1;  // e primo
			}
		}
	}
	return 0; // 0 e 1 nao sao primos
}

int n_digitos(int x) {
	int n = 0;
	while (x != 0) {
		x /= 10;
		n++;
	}
	return n;
}

int main(void){
	long k;
	int count = 0;
	
	for (int i = 2; i < 1000000; i++) {
	   	if (n_digitos(i) == 1 && primo(i) == 1) {
	   		count++;
	   	}
		int k;
	   	if (n_digitos(i) == 2 && primo(i) == 1) {
	   		k = i;
	   		int l = 10;
			int t = k % l;
			k /= l;
			k += t*10;
			if(primo(k) == 1) {
				count++;
			}
	   	}
	   	int digitos = n_digitos(i);
	   	if (digitos > 2 && primo(i) == 1) {
	   		printf("i: %d\n", i);
	   		k = i;
	   		int l = pow(10,digitos-1);
			int t = k % l;
			k /= l;
			k += t*10;
			printf("k: %d\n", k);
			if(primo(k) == 1 && n_digitos(k) == digitos) {
				for (int u = 1; u = fact(digitos); u++) {
					int y = k;
					int l = pow(10,digitos-1);
					int t = k % l;
					k /= l;
					k += t*10;
					if (primo(k) == 0) {
						break;
					}
				}
				count++;
				printf("%d\n",count );
			}
	   	}
	    
	}
	
	printf("%d\n", count);
}

// Solução: 55