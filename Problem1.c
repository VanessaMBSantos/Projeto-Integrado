
#include <stdio.h>

int n = 0;
int soma = 0;


int main(void) {

	while (n < 1000) {
		if (n % 3 == 0) {
			soma += n;
		}	
		if (n % 5 == 0) {
			soma += n;
		}
		if (n % 15 == 0) {
			soma -= n;
		}
		n += 1;
	}

	printf ("%d\n", soma);
}