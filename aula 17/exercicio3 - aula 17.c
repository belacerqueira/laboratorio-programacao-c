#include <stdio.h>
#include <string.h>

int main (void) {
    char nome[50];
    char curso[10];
    char copia[50];
    char mensagem[60] = "Olá, ";
    
    printf("===== IDENTIFICAÇÃO ACADÊMICA =====\n");
    printf("\nNome do estudante: ");
    scanf("%49s", nome);
    printf("Código do curso [CC/SI]: ");
    scanf("%10s", curso);
    
    printf("\n===== RESULTADO =====\n");
    printf("Estudante: %s.\n", nome);
    if (strcmp(curso, "CC") == 0) {
        printf("Curso: Ciência da Computação.\n");
    } else {
        printf("Curso: Sistemas de Informação.\n");
    }
    printf("Caracteres no nome: %zu.\n", strlen(nome));
    strcpy(copia, nome);
    strcat(mensagem, nome);
    printf("\n%s!\n", mensagem);
    
    return 0;
}