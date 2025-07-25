#include <stdio.h>

int main(){

    printf("\nEstrutura Condicional Simples\n\n");

    int n1, n2;

    printf("Digite o primeiro numero:");
    scanf("%d", &n1);

    printf("Digite o segundo numero:");
    scanf("%d", &n2);

    if(n1 > n2){
        printf("n1 eh maior que n2\n");
    }

    printf("\nEstrutura Condicional Composta\n");

    int idade;

    printf("\nDigite a idade:");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Maior de idade!\n");
    }
    else{
        printf("Menor de idade!\n");
    }

    printf("\nEstrutura Condicional Encadeada\n");

    int hora;

    printf("\nDigite uma hora do dia:");
    scanf("%d", &hora);

    if(hora < 12){
        printf("Bom dia!\n");
    }else if (hora >= 12 && hora < 18){
        printf("Boa tarde!\n");
    }else{
        printf("Boa noite!\n");
    }

    return 0;

}
