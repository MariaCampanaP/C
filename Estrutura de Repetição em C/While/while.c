#include <stdio.h>

int main(){

    /*Regra do While
    V : executa e volta
    F : pula fora */

    int x, soma;

    soma = 0; //Iniciarlizar a variável para evitar looping infinito

    printf("Digite o primeiro numero:");
    scanf("%d", &x);

    while(x != 0){
        soma = soma + x;
        printf("Digite outro numero:");
        scanf("%d", &x);
    }

    printf("SOMA = %d\n", soma);

    return 0;

}
