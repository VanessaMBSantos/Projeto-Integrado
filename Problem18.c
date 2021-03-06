/*Maximum path sum I-Problem 18*/

#include <stdio.h>

int maior(int, int);

int main(int argc, char *argv[])
{
  int array [15][15] =             /*Cria-se um array de [15][15] correspondem-te a quantidade de numeros do triângulo.*/
    {
      { 75 },
      { 95, 64 },
      { 17, 47, 82 },
      { 18, 35, 87, 10 },
      { 20, 4, 82, 47, 65 },
      { 19, 1, 23, 75, 3, 34 },
      { 88, 2, 77, 73, 7, 63, 67 },
      { 99, 65, 4, 28, 6, 16, 70, 92 },
      { 41, 41, 26, 56, 83, 40, 80, 70, 33 },
      { 41, 48, 72, 33, 47, 32, 37, 16, 94, 29 },
      { 53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14 },
      { 70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57 },
      { 91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48 },
      { 63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31 },
      { 4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23}
    };
  
/* Começa com a linha final 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23 e avança para zero.*/ 
  int i = 13;

  while(i >= 0) {
    for (int j = 0; j <= i; ++j)
    {
      array[i][j] += maior(array[i+1][j], array[i+1][j+1]);
    }
    i--;

  }

  printf("A soma do total máximo de cima para baixo do triângulo é: %d.\n", array[0][0]);

  return 0;
}

int maior(int a, int b)
{
  /*Condição ternica esta expressão avalia (a) se a condição (a>b) for verdadeira. Caso contrário, avalia para a (b).*/
  /*A partir desta função encontra-se o maior*/
  return a > b ? a : b;
}