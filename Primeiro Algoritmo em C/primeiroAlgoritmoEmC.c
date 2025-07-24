#include <stdio.h>
/*Biblioteca que define constantes, macros e tipos e
declara fun��es de entrada e de sa�da de fluxo*/

int main(){
    /* int -> � o tipo de retorno da fun��o main. Significa que ele vai retornar
    um n�mero inteiro ao sistema operacional quando o programa terminar.
    Geralmente, esse valor indica se o programa funcionou corretamente:
    > return 0; -> sucesso (o programa rodou sem erros)
    > return 1; -> (ou outro valor diferente de 0) -> erro

    main -> � o nome da fun��o principal do programa. Todo programa em C come�a sua
    execu��o por essa fun��o.
    Ou seja: o que estiver dentro de main() � o que vai ser executado primeiro

    () -> Os par�nteses indicam que essa � uma fun��o. Voc� pode colocar par�metros dentro
    deles (como int argc, char *argv[], quando for lidar com argumentos da linha de comando),
    mas o mais comum para iniciantes � deix�-los vazios: ()

    {} -> S�o as chaves que delimitam o bloco de c�digo da fun��o main. Tudo o que estiver
    entre { e } ser� executado quando o programa come�ar.*/

    printf("Ola mundo!"); //Imprime exatamente o texto entre aspas



    return 0;

}
