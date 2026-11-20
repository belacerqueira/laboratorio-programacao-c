#include <stdio.h>

void dobrar(int *numero) {
    *numero = *numero * 2;
}

int main(void) {
    int valor;

    printf("Digite um número: ");
    scanf("%d", &valor);

    dobrar(&valor);

    printf("Dobro: %d\n", valor);

    return 0;
}
