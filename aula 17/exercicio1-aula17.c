#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char perfil[10];
    char copia[30];
    char mensagem[60] = "Bem-vindo(a), ";
    printf("==========CADASTRO DE USUÁRIO==========\n");
    printf("Digite seu nome: ");
    scanf("%49s", nome);
    printf("Digite seu perfil: ");
    scanf("%9s", perfil);
    
    printf("\n==========DADOS CADASTRADOS==========\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %zu\n", strlen(nome));
    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil: Administrador.\n");
    } else {
        printf("Perfil: Comum.\n");
    }
    strcpy(copia, nome);
    strcat(mensagem, nome);
    printf("%s!\n", mensagem);
    printf("Cadastro realizado com sucesso.");
    return 0;
}




