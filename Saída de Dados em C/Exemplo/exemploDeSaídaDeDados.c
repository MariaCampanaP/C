#include <stdio.h>
#include <stdlib.h>

int main(){

    //Sem quebra de linha
    printf("Bom dia");
    printf("Boa noite");

    printf("\n");

    //Com quebra de linha
    printf("Bom dia\n");
    printf("Boa noite\n");

    //Atribuição de valores inteiros
    int x, y;
    x = 10;
    y = 20;
    printf("%d\n", x);
    printf("%d\n", y);

    //Atribuição de valores reais
    double w;
    w = 2.3456;
    printf("%.2lf\n", w);

    //Atribuições no geral
    int idade;
    double salario;
    char nome[50];
    char sexo;

    idade = 32;
    salario = 4560.9;
    strcpy(nome, "Maria Silva");
    sexo = 'F';

    printf("A funcionaria %s, sexo %c, ganha %.2lf e tem %d anos\n", nome, sexo, salario, idade);

    return 0;

}
