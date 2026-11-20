#include <stdio.h>

int main(void) {
    int numeros[5];
    int *p = numeros;

    for (int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    }

    printf("\nNúmeros armazenados:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(p + i));
    }

    return 0;
}

