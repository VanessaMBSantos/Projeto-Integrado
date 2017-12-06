/* Digit cancelling fractions */

#include <stdio.h>

int reduzden(int num, int den) {
	for (int i = num; i >= 1; i--) {
		if (num % i == 0 && den % i == 0) {
			num /= i;
			den /= i;
		}
	}
	return den;
}

int main(void) {
	int num2 = 1, den2 = 1;
	for (int den = 10; den <= 99; den++) {
		for (int num = 10; num <= 99; num++) {
			if ((num % 10 == 0 && den % 10 == 0) || (num % 11 == 0 && den % 11 == 0) || num == den) {
				break;
			}
			float exp = 0.0;
			float r = num / (float)den;

			int r1 = num % 10;
			int d1 = num / 10;
			int r2 = den % 10;
			int d2 = den / 10;

			if (r1 == d2) {
				exp = d1 / (float)r2;
			}
			else if (d1 == r2) {
				exp = r1 / (float)d2;
			}
			
			if (exp == r && exp < 1) {
				num2 *= num;
				den2 *= den;
			}
		}
	}
	printf("%d\n", reduzden(num2,den2));
}

// Solução: 100