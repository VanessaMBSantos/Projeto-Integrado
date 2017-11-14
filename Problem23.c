/* Non-abundant sums */

#include <stdio.h>

int perfect_number(int x) {
	int sum = 0;
	for (int i = 1; i < x; i++) {
		if ( (x % i) == 0) {
			sum += i;
		}
	}
	if (sum == x) {
		return 1;
	}
	if (sum >= x) {
		return 2;
	}
	else {
		return 0;
	}
}

int soma(int x) {
	int s = 0;
	for (int i = 0; i <= x; i++) {
		s += i;
	}
	return s;
}

int main(void) {
	int sum1 = soma(28123);
	int sum2 = 0;
	for (int i = 2; i <= 28123; i++) {
		for (int e = 1; e <= i/2; e++) {
			int u = i - e;
			if (perfect_number(e) == 2 && perfect_number(u) == 2) {
				sum2 += i;
				break;
			}
		}
	}
	printf("%d\n", sum1 - sum2);
}

// Solução: 4179871