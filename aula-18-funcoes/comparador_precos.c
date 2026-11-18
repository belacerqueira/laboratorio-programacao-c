#include <stdio.h>

int maiorPreco() {
    float n1;
    float n2;

    printf("\nPreço 1: ");
    scanf("%f", &n1);

    printf("Preço 2: ");
    scanf("%f", &n2);

    if (n1 > n2) {
        printf("\nMaior preço: %.2f.\n", n1);
    }
    else if (n2 > n1) {
        printf("\nMaior preço: %.2f.\n", n2);
    }
    else {
        printf("\nOs preços são iguais.");
    }

    return 0;
}

int main(void) {
    
    printf("===== COMPARADOR DE PREÇOS =====\n");
    maiorPreco();
    return 0;
}