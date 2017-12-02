/*Pandigital products - Problem 32*/

#include <stdio.h>
#include <time.h>
#include <string.h>


unsigned getMask(unsigned numero); /*Unsigned diz que o número deve ser guardado sem sinal. Assim podemos gurdar valores superiores,*/
int resolve();

int main()
{
	int rs = resolve();
	printf("A soma de todos os produtos que podem ser escritos de 1 a 9 pandigital é:%d\n", rs);
	return 0;
}


int resolve(){
	int maximo = 10000;
	int array[maximo];
	memset(array,0, sizeof(int)*maximo);
	int i,j;
	int soma = 0;

	for( i = 1; i <= 99; ++i){
		for( j = 100; j <= 9999; ++j){
			if( i*j > maximo) {break;}

			if( !array[i*j] ){
				if( 0x1ff == (getMask(i) | getMask(j) | getMask(i*j)) ){
					soma = soma + i*j;
					array[i*j] = i*j;
				} //Uma máscara define quais são os bits que se deseja manter e quais se deseja limpar.
			}	 //Mascarar é o ato de aplicar uma máscara a um valor. Isto é feito fazendo:
		}		//Bitwise ORing para definir um subconjunto dos bits no valor.
	}		
	return soma;
}

unsigned getMask(unsigned numero){
	unsigned d;
	unsigned mask =0;
	do{
		d = numero%10;
		mask |= ( 1 << (d-1)); //(|) O Operador binário OR operador copia um bit se existir em qualquer operando.
		numero = numero/10;	   //<< Deslocamento de bits à direita
	}while(numero);
	return mask;
}