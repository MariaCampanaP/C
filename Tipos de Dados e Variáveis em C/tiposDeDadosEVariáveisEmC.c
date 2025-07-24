#include <stdio.h>
#include <stdlib.h>
/* Stdlib.h -> � um arquivo cabe�alho da biblioteca de prop�sito geral padr�o da linguagem
de programa��o C. Ela possui fun��es envolvendo aloca��o de mem�ria, controle de processos,
convers�es e outras*/

int main()
{

    /* OBS.: A linguagem C aceita atribui��o diretamente na declara��o da vari�vel, inclusive para texto. Por exemplo.:
    int idade = 20;
    char nome[50] = "Maria Silva";*/

    int idade; //N�mero Inteiro
    double salario, altura; //N�mero de ponto flutuante -> double: precis�o dupla / float: precis�o simples
    char genero; //Um �nico caractere -> Na linguagem C, para se representar um �nico caractere usa-se o tipo char. Valores literais devem ter aspas simples. Exemplo:'F'
    char nome[50]; //Texto -> Na linguagem C, para se representar um texto, usa-se o vetor de char. Valores literais devem ter aspas duplas. Exemplo:"Maria"

    idade = 20; //Atribui��o ao conte�do de uma vari�vel
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    strcpy(nome, "Maria Silva"); //� uma fun��o da biblioteca string.h, strcpy(destino, origem) -> Ou seja: copia o conte�do de "origem" para "destino", ou seja, copia o texto para o vetor nome

    printf("IDADE = %d\n", idade); //%d -> Indica que voc� quer imprimir um valor do tipo inteiro (int)
    printf("SALARIO = %.2lf\n", salario); //%.2lf -> Mostra um n�mero decimal (double) com 2 casas decimais
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %c\n", genero); //%c -> Exibe um caractere
    printf("NOME = %s\n", nome); //%s -> Exibe uma string (texto)

    //\n -> Insere uma quebra de linha, ou seja, o cursor vai para a pr�xima linha no terminal

    return 0;

}
