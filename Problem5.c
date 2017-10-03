/* Smallest Multiple */

#include <stdio.h>

int main(void) {
	int menor;
	int c = 0;
	for (int n = 20; n <= 40000000000; n++) {
		if (c == 20) {
			break;
		}
		c = 0;
		for (int i = 1; i <= 20; i++) {
			if (n % i == 0) {
				c += 1;
				if (c == 20) {
					menor = n;
					break;
				}
			}
			else {
				break;
			}
		}
	}
	printf("%d\n", menor);
}

// Solução: 232792560