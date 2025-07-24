#include <stdio.h>
/*Biblioteca que define constantes, macros e tipos e
declara funções de entrada e de saída de fluxo*/

int main(){
    /* int -> É o tipo de retorno da função main. Significa que ele vai retornar
    um número inteiro ao sistema operacional quando o programa terminar.
    Geralmente, esse valor indica se o programa funcionou corretamente:
    > return 0; -> sucesso (o programa rodou sem erros)
    > return 1; -> (ou outro valor diferente de 0) -> erro

    main -> É o nome da função principal do programa. Todo programa em C começa sua
    execução por essa função.
    Ou seja: o que estiver dentro de main() é o que vai ser executado primeiro

    () -> Os parênteses indicam que essa é uma função. Você pode colocar parâmetros dentro
    deles (como int argc, char *argv[], quando for lidar com argumentos da linha de comando),
    mas o mais comum para iniciantes é deixá-los vazios: ()

    {} -> São as chaves que delimitam o bloco de código da função main. Tudo o que estiver
    entre { e } será executado quando o programa começar.*/

    printf("Ola mundo!"); //Imprime exatamente o texto entre aspas



    return 0;

}
