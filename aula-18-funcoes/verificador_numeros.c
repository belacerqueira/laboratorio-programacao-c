#include <stdio.h>

int verificarPar() {
    int n;
    printf("\nDigite um número: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("\nO número %d é par.", n);
        return 1;
    } else {
        printf("\nO número %d é ímpar.", n);
        return 0;
    }
}

int main(void) {
    printf("===== VERIFICADOR DE NÚMEROS =====\n");
    verificarPar();
    
    return 0;
}