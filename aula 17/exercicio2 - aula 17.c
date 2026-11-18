#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char categoria[20];
    char copia[30];
    char descricao[50] = "Descrição: Produto: ";
    
    printf("==========CADASTRO DE PRODUTOS==========\n");
    printf("Nome do produto: ");
    scanf("%49s", nome);
    printf("Categoria: ");
    scanf("%19s", categoria);
    printf("\n==========RESUMO==========\n");
    printf("Produto: %s.\n", nome);
    printf("Caracteres: %zu.\n", strlen(nome));
    if (strcmp(categoria, "PERIFÉRICO") == 0) {
        printf("Categoria: Periférico.\n");
    } else {
        printf("Categoria: Hardware.\n");
    }
    strcpy(copia, nome);
    strcat(descricao, nome);
    printf("%s.\n", descricao);
    printf("Cdastro concluido!");
    return 0;
}




