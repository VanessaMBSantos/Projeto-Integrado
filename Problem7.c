/* 10001st prime */

#include <stdio.h>

int primo(int p) {
	int eprimo = 0;
	int i = 2;
	while (i < p) {
		if (p % i == 0) {
			eprimo = 1;
			break;
		}
		i += 1;
	}
	return (eprimo);
}

int main(void) {
	int n = 1;
	int c = 0;
	while (c <= 10001) {
		if (primo(n) == 0) {
			if (c == 10001) {
				printf("%d\n", n);
				break;
			}
			c += 1;
		}
		n += 1;
	}
}

// Solução: 104743