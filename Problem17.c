/* Number letter counts */

#include <stdio.h>

int a[9] = {3,3,5,4,4,3,5,5,4}; // 1 a 9
int b[10] = {3,6,6,8,8,7,7,9,8,8}; // 10 a 19
int c[8] = {6,6,5,5,5,7,6,6}; // 20,30,40,50,60,70,80,90

int main(void) {
	int counter = 0;
	// 1 a 9
	for (int i = 0; i < 9 ; i++) {
		counter += a[i];
	}
	// 10 a 19
	for (int i = 0; i < 10; i++) {
		counter += b[i];
	}
	// 20 a 99
	for (int i = 0; i <= 8; i++) {
		counter += c[i];
		for (int l = 0; l < 9; l++) {
			counter += c[i] + a[l];
		}
	}
	// 100 a 999
	for (int i = 0; i < 9; i++) {
		counter += a[i] + 7; // + hundred
		// 1 a 9
		for (int i = 0; i < 9 ; i++) {
			counter += a[i] + 7 + 3 + a[i]; // and +
		}
		// 10 a 19
		for (int i = 0; i < 10; i++) {
			counter += a[i] + 7 + 3 + b[i]; // and +
		}
		// 20 a 99
		for (int i = 0; i < 8; i++) {
			counter += a[i] + 7 + 3 + c[i]; // and +
			for (int l = 0; l < 9; l++) {
				counter += a[i] + 7 + 3 + c[i] + a[l];
			}
		}
	}
	counter += 11; // one thousand
	printf("%d\n", counter);
}

// Solução: 21124