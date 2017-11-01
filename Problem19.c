/* Counting Sundays */

#include <stdio.h>

int main(void) {
	int counter = 0;
	int diasemana = 2;

	for (int ano = 1901; ano <= 2000; ano++)
		for (int mes = 1; mes <= 12; mes++) {
			if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
				for (int dia = 1; dia <= 31; dia++) {
					if (diasemana == 7) {
						diasemana = 0;
						if (dia == 1) {	
							counter += 1;
						}
					}	
					diasemana += 1;
				}
			printf("c: %d\n", counter);	
			}

			if (mes == 2) {
				if (ano%4 == 0) {
					for (int dia = 1; dia <= 29; dia++) {
						if (diasemana == 7) {
							diasemana = 0;
							if (dia == 1) {	
								counter += 1;
							}
						}
						diasemana += 1;
					}
				}

				if (ano%4 != 0) {
					for (int dia = 1; dia <= 28; dia++) {
						if (diasemana == 7) {
							diasemana = 0;
							if (dia == 1) {	
								counter += 1;
							}
						}
						diasemana += 1;
						}
					}
			}
			if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
				for (int dia = 1; dia <= 30; dia++) {
					if (diasemana == 7) {
							diasemana = 0;
							if (dia == 1) {	
								counter += 1;
							}
					}
					diasemana += 1;
				}
			}
	}	
		printf("%d\n", counter);
}

// Solução: 171