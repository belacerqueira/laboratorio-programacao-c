#include <stdio.h>

int main(void) {
    FILE *arquivo;
    int numero;
    int caractere;

    arquivo = fopen("numeros.txt", "w");

    printf("===== LENDO NÚMEROS =====\n");
    for(int i = 0; i < 5; i++) {
        printf("Informe um número: ");
        scanf("%d", &numero);
        fprintf(arquivo, "Número informado: %d\n", numero);
    }

    printf("\n===== NÚMEROS INFORMADOS =====\n");

    fclose(arquivo);

    arquivo = fopen("numeros.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        putchar(caractere);
    }

    fclose(arquivo);

    return 0;
}
