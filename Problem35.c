/* Circular Primes */

#include <stdio.h>
#include <math.h>

int primo(int p) {
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

int rotacao(int x) {
	int ultimo = x % 10;
	int rot = x/10 + ultimo * pow(10, n_digitos(x)-1);
	return rot;
}

int main(void){
	int count = 13; //numero de primos abaixo de 100
	for (int i = 101; i < 1000000; i+=2) {
	   	if (primo(i)) {
	   		int flag = 1;
	   		int rot = rotacao(i);
	   		while (rot != i) {
	   			if (!primo(rot)) {
	   				flag = 0;
	   				break;
	   			}
	   			rot = rotacao(rot);
	   		}
	   		if (flag) {
	   			count++;
	   		}
	   	}
	}
	printf("%d\n", count);
}

// Solução: 55