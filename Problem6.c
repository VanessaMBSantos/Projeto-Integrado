/*Sum square difference*/
/* usar gcc Problemas6.c -lm -o Problemas6.exe*/

#include <stdio.h>
#include <math.h>

int main(void)
{
  int n1, soma1=0, sqsome, soma2=0, n2 = 0, i;

  for (i = 1; i <= 100; i++) {
    n1 = pow(i,2);
    n2 = i;
    soma1=soma1+n1;
    soma2=soma2+n2;
  }
  	sqsome=pow(soma2,2);
  	printf("%d\n", sqsome - soma1);
}