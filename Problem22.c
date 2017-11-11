/*Names scores - Problem 22 project Euler*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

static int compara(const void *x, const void *y); /*const void *pontos de memória que não devem ser modificados.*/

int main(void)
{
  FILE *ficheiro;
  char path[] = "names.txt"; /*Guarda os nomes no array*/
  char **nomes;
  int soma = 0, i , contador=0;

  ficheiro = fopen(path, "r");
  if (!ficheiro) {
    perror(path); /*Imprime uma mensagem de erro descritivo para stderr.*/
    return 1;
  }

  /*Analisa o ficheiro names.txt */
  nomes = malloc(8192 * sizeof *nomes);
  nomes[contador] = malloc(16);   /*Aloca o tamanho solicitado dos bytes e retorna o primeiro byte do ponteiro do espaço alocado*/
  while (fscanf(ficheiro, "\"%[^\"]\",", nomes[contador]) != EOF) { /*{ %[^\n]especificação de conversão, que corresponde a uma string de todos os caracteres que não é igual ao novo caractere de linha ('\n')*/ 
    nomes[++contador] = malloc(16);
  }
  free(nomes[contador]); /*Desaloca a memória previamente alocada pela malloc.*/
  fclose(ficheiro);
  qsort(nomes, contador, sizeof *nomes, compara); /*organizar por ordem alfabetica*/

  for (i = 0; i < contador; i++) { /*contador contem o numero de palavras*/
    int j, s = 0;
    for (j = 0; nomes[i][j] != 0; j++) {
      s = s + nomes[i][j]-'A'+1; /*s da a soma das letras sendo a primeira palavra AARON 0 1 2 20 35 49*/
    }
    soma = soma + s * (i+1); /*Soma é igual a soma das letras * posição da palavra.*/

    free(nomes[i]);
  }
  free(nomes);

  printf("A soma das pontuações dos numeros contidos no arquivo é: %d\n", soma);

  return 0;
}

int compara(const void *x, const void *y)
{
  return strcmp(*(char * const *)x, *(char * const *)y);
}