/* Integer right triangles */

#include <stdio.h>

int main(void) {

	int count;
	int max = 0;
	int max2 = 0;

	for (int p = 0; p <= 1000; p++) {
		count = 0;
		for (int a = 0; a < p/2; a++) {
			for (int b = 0; b < p/2; b++) {
				int c = p - a - b;
				if (a*a + b*b == c*c) {
					count++;
				}
			}
		}
		if (count > max) {
			max = count;
			max2 = p;
		}
	}
	printf("%d\n", max2);
}

// Solução: 840