/* Truncatable primes */

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
		}
		return 1;  // e primo
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

int esquerda(int x) {
	int digitos = n_digitos(x);
	for (int u = digitos-1 ; u >= 1; u--) {
		int k = x;
		int l = pow(10,u);
		k %= l;
		if (!primo(k)) {
			return 0;
		}
	}
	return 1;
}

int direita(int i) {
	int k = i;
	int digitos = n_digitos(i);
	for (int u = 1 ; u <= digitos-1; u++) {
		k /= 10;
		if (!primo(k)) {
			return 0;
		}
	}
	return 1;
}

int main(void) {
	int sum = 0;
	int counter = 0;
	for (int i = 10; ; i++) {
		if (primo(i)) {
			if (esquerda(i) && direita(i)) {
				sum += i;
				counter++;
				if (counter == 11) {
					break;
				}
			}
		}
	}
	printf("%d\n", sum);
}
// Solução: 748317