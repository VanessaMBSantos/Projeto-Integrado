/*Power digit sum- Problem 16*/

#include <stdio.h>
#define tamanho_numero 330 //2^1000 < 8^333 < 10^333. Entao coloquei o tamanho maximo a 330
#define exponente 1000
#define base 10

void inicial(int[]);                 //Funcao que poe tudo a zero
int soma_digitos(int[]);            //Funcao que calcula a soma
void encontra_expoente(int[],int); //Funcao que calcula o valor de 2^1000

int main()
{
    int numero[tamanho_numero], soma, num = 2;

    inicial(numero);
    encontra_expoente(numero, num);
    soma = soma_digitos(numero);
    printf("A soma dos digitos é %d.\n",soma);
    return 0;
}
void inicial(int numero[])    //Inicialmete, o numero é zero entao todos os digitos comecam em zero
{
    int i;
    for(i = 0; i < tamanho_numero; i++)
    {
            numero[i] = 0;
    }
}
void encontra_expoente(int numero[], int num)
{
    int i, primeiro_digito;
    int transporta, substitui, produto, expoente_contador;

    //O primeiro dígito acompanha a posição do "dígito mais significativo" no array onde os zeros à direita terminam
    primeiro_digito = 0;
    numero[primeiro_digito] = 1; //Se não se fizer isto, a resposta é 0

    //Este loop calcula num e guarda no numero[]
    for(expoente_contador = 1; expoente_contador <= exponente; expoente_contador++)
    {
        //Este bloco executa a multiplicação do número[] com o valor atual de num e armazena o resultado em num
        transporta = 0;
        for(i = 0; i <= primeiro_digito; i++)
        {
            produto = num*numero[i] + transporta;
            substitui = produto%base; //substitui é o que deve ser reescrito no i-ésimo dígito
            transporta = produto/base; //transporta precisa ser adicionado quando num é multiplicado com o próximo dígito mais significativo
            //O i-ésimo dígito do número é reescrito agora como o produto base% em que estamos trabalhar, neste caso 10
            numero[i] = substitui;
            //Se houver um transporte no MSB, o número de dígitos aumentará
            if( (i == primeiro_digito) && (transporta > 0) )
            {
                primeiro_digito++;
            }
        }
    }
}
int soma_digitos(int numero[])
{
    int i, soma = 0;
    for(i = 0; i < tamanho_numero; i++)// Cliclo for que percorre o resultado de 2^1000 e vai somando os numeros 
    {                                  //guardados no array
        soma = soma + numero[i];
      }
    return soma;
}    