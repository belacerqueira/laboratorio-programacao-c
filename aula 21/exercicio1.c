#include <stdio.h>

typedef struct {
    char nome[50];
    char matricula[30];
} funcionario;

int main(void) {
    FILE *arquivo;
    funcionario f;
    int quantidade;

    printf("Quantos funcionários deseja cadastrar?: ");
    scanf("%d", &quantidade);

    if (quantidade < 1 || quantidade > 5) {
        printf("Quantidade inválida!\n");
        return 1;
    }

    arquivo = fopen("funcionarios.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for(int i = 0; i < quantidade; i++) {
        printf("Informe o nome do funcionário: ");
        scanf(" %49[^\n]", f.nome);
        printf("Informe a matrícula do funcionário: ");
        scanf(" %29[^\n]", f.matricula);
        fprintf(arquivo, "Nome: %s\n", f.nome);
        fprintf(arquivo, "Matrícula: %s\n\n", f.matricula);
    }

    fclose(arquivo);

    printf("Dados cadastrados com sucesso!");
}
