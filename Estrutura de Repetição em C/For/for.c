#include <stdio.h>

int main(){

    /*Sintaxe | Regra do For
    for(inicio -> executa somente na primeira vez; condição -> V : executa e volta, F : pula fora; incremento -> Executa toda vez depois de voltar){
        comando1
        comando2
    }*/

    int N, i, x, soma;

    printf("Quantos numeros serao digitados?:");
    scanf("%d", &N);

    soma = 0;

    for(i = 1; i <= N; i++){
        printf("Digite um numero:");
        scanf("%d", &x);
        soma = soma + x;
    }

    printf("Soma = %d\n", soma);

    return 0;

}
