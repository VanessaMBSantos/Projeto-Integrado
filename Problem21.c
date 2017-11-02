/* Amicable numbers */

#include <stdio.h>

int soma(int x) {
	int sum = 0;
	for (int i = 1; i < x; i++) {
		if ( (x % i) == 0) {
			sum += i;
		}
	}
	return sum;
}

int main(void) {
	int sum2 = 0;
	for (int i = 2; i < 10000; i++) {
		int r = soma(i);
		if (i < r && soma(r) == i) {
			sum2 = sum2 + i + r;
		}
	}
	printf("%d\n", sum2);
}


// Solução: 31626