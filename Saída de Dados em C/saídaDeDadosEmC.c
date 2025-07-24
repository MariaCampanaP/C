#include <stdio.h>

int main() {
    printf("===============================================\n");
    printf("             SAÍDA DE DADOS EM C               \n");
    printf("===============================================\n\n");

    // Comando de saída
    printf("Comando no VisualG\tComando em C\t\tBiblioteca\n");
    printf("-------------------\t-------------\t\t----------\n");
    printf("escreva / escreval\tprintf\t\t\t#include <stdio.h>\n\n");

    // Placeholders de formatação
    printf("Tipo de Dado\t\tPlaceholder de Formatacao\n");
    printf("-------------\t\t-------------------------\n");
    printf("int (16 bits)\t\t%%d ou %%i\n");
    printf("long int (32 bits)\t%%li\n");
    printf("long long int (64 bits)\t%%lli\n");
    printf("float\t\t\t%%f\n");
    printf("double\t\t\t%%lf\n");
    printf("char\t\t\t%%c\n");
    printf("char[] (texto)\t\t%%s\n");

    return 0;
}
