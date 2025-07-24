#include <stdio.h>
#include <stdlib.h>
/* Stdlib.h -> É um arquivo cabeçalho da biblioteca de propósito geral padrão da linguagem
de programação C. Ela possui funções envolvendo alocação de memória, controle de processos,
conversões e outras*/

int main()
{

    /* OBS.: A linguagem C aceita atribuição diretamente na declaração da variável, inclusive para texto. Por exemplo.:
    int idade = 20;
    char nome[50] = "Maria Silva";*/

    int idade; //Número Inteiro
    double salario, altura; //Número de ponto flutuante -> double: precisão dupla / float: precisão simples
    char genero; //Um único caractere -> Na linguagem C, para se representar um único caractere usa-se o tipo char. Valores literais devem ter aspas simples. Exemplo:'F'
    char nome[50]; //Texto -> Na linguagem C, para se representar um texto, usa-se o vetor de char. Valores literais devem ter aspas duplas. Exemplo:"Maria"

    idade = 20; //Atribuição ao conteúdo de uma variável
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    strcpy(nome, "Maria Silva"); //É uma função da biblioteca string.h, strcpy(destino, origem) -> Ou seja: copia o conteúdo de "origem" para "destino", ou seja, copia o texto para o vetor nome

    printf("IDADE = %d\n", idade); //%d -> Indica que você quer imprimir um valor do tipo inteiro (int)
    printf("SALARIO = %.2lf\n", salario); //%.2lf -> Mostra um número decimal (double) com 2 casas decimais
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %c\n", genero); //%c -> Exibe um caractere
    printf("NOME = %s\n", nome); //%s -> Exibe uma string (texto)

    //\n -> Insere uma quebra de linha, ou seja, o cursor vai para a próxima linha no terminal

    return 0;

}
