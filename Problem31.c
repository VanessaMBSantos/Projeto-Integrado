/* Coin Sums */

#include <stdio.h>

int main(void) {
	int counter = 0;
	for (int a = 0; a <= 200; a+=200) {		
		for (int e = 0; e <=200; e+=100) {
			for (int i = 0; i <= 200; i += 50) {
				for (int o = 0; o <= 200; o += 20) { 
					for (int u = 0; u <= 200; u += 10) {
						for (int b = 0; b <= 200; b += 5) {
							for (int c = 0; c <= 200; c += 2) {
								for (int d = 0; d <= 200; d += 1) {
									if (a+e+i+o+u+b+c+d == 200) {
										counter++;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	printf("%d\n", counter);
}

// Solução: 73682