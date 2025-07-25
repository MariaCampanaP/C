#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    printf("===============================================\n");
    printf("             ENTRADA DE DADOS EM C               \n");
    printf("===============================================\n\n");

    //Comando de Entrada de Dados
    printf("Comando no VisualG\tComando em C\t\tBiblioteca\n");
    printf("-------------------\t-------------\t\t---------------------------\n");
    printf("leia\t\t\tscanf\t\t\t#include <stdio.h>\n"); //scanf (para ler dados de tipos básicos)
    printf("\t\t\tfgets\t\t\t#include <stdio.h> + <string.h>\n"); //fgets (para ler texto até a quebra de linha)

    //Para ler um texto de tamanho N até a quebra de linha
    char nome[50];
    printf("\n--- Ler um texto ate a quebra de linha ---\n");
    printf("Digite o nome da pessoa:");
    fgets(nome, 50, stdin);

    printf("Nome:%s\n", nome);

    return 0;
}
