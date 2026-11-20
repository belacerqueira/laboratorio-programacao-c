#include <stdio.h>

typedef struct {
 char nome[50];
 float salario;
 int horasExtras;
} Funcionario;

int main(void) {
    FILE *arquivo;
    int quantidade;
    Funcionario f;

    printf("Quantos funcionários deseja cadastrar?: ");
    scanf("%d", &quantidade);

    if(quantidade < 1 || quantidade > 5) {
        printf("Quantidade inválida!\n");
        return 1;
    }

    arquivo = fopen("funcionario.txt", "a");

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }


    for(int i = 0; i < quantidade; i++){
        printf("Informe o nome do funcionário: ");
        scanf(" %49[^\n]", f.nome);
        printf("Informe o salário do funcionário: ");
        scanf("%f", &f.salario);
        printf("Informe as horas extras dos funcionários: ");
        scanf("%d", &f.horasExtras);
        fprintf(arquivo, "%s;%.2f;%d\n", f.nome, f.salario, f.horasExtras);
    }

    fclose(arquivo);

    arquivo = fopen("funcionario.txt", "r");

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("===== FUNCIONÁRIOS CADASTRADOS =====\n");

    while (fscanf(arquivo, "%49[^;];%f;%d\n", f.nome, &f.salario, &f.horasExtras) == 3) {
        printf("\nNome: %s\n", f.nome);
        printf("Salário: R$ %.2f\n", f.salario);
        printf("Horas extras: %d\n", f.horasExtras);
    }

    fclose(arquivo);

    return 0;
}

