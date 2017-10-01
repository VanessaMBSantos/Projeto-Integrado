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
	long long n = 600851475143;
	int p = 2;
	int maior;
	while (n != 1) {
		if (n % p == 0 && primo(p) == 0) {
			maior = p;
			n /= p;
			p += 1;
			}
		else {
			p += 1;
		}
	}
	printf("%d\n", maior);
}
